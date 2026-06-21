#include <WiFi.h>
#include <HTTPClient.h>
#include <DHT.h>

// Sistema IoT de Monitoramento Ambiental com ESP32
// Autor: Sandro Ferreira
// Projeto acadêmico - UniFECAF

// Configurações Wi-Fi
const char* WIFI_SSID = "Wokwi-GUEST";
const char* WIFI_PASSWORD = "";

// Configurações ThingSpeak
const char* THINGSPEAK_API_KEY = "SUA_API_KEY_AQUI";
const char* THINGSPEAK_URL = "http://api.thingspeak.com/update";

// Sensor DHT22
#define DHT_PIN 4
#define DHT_TYPE DHT22
DHT dht(DHT_PIN, DHT_TYPE);

// Sensores analógicos
#define PIN_LUMINOSIDADE 34
#define PIN_UMIDADE_SOLO 35
#define PIN_QUALIDADE_AR 32
#define PIN_POTENCIOMETRO 33

// Atuadores
#define PIN_LED 2
#define PIN_BUZZER 5
#define PIN_RELE 18

// Intervalo de envio para nuvem
const unsigned long INTERVALO_ENVIO = 15000;
unsigned long ultimoEnvio = 0;

void conectarWiFi() {
Serial.println("Conectando ao Wi-Fi...");
WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

```
while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
}

Serial.println();
Serial.println("Wi-Fi conectado com sucesso.");
Serial.print("Endereço IP: ");
Serial.println(WiFi.localIP());
```

}

int lerSensorAnalogico(int pino) {
return analogRead(pino);
}

void acionarAlerta(bool condicaoAlerta) {
if (condicaoAlerta) {
digitalWrite(PIN_LED, HIGH);
digitalWrite(PIN_BUZZER, HIGH);
digitalWrite(PIN_RELE, HIGH);
} else {
digitalWrite(PIN_LED, LOW);
digitalWrite(PIN_BUZZER, LOW);
digitalWrite(PIN_RELE, LOW);
}
}

void enviarDadosThingSpeak(
float temperatura,
float umidade,
int luminosidade,
int umidadeSolo,
int qualidadeAr,
int variavelSimulada
) {
if (WiFi.status() == WL_CONNECTED) {
HTTPClient http;

```
    String url = String(THINGSPEAK_URL) +
                 "?api_key=" + THINGSPEAK_API_KEY +
                 "&field1=" + String(temperatura) +
                 "&field2=" + String(umidade) +
                 "&field3=" + String(luminosidade) +
                 "&field4=" + String(umidadeSolo) +
                 "&field5=" + String(qualidadeAr) +
                 "&field6=" + String(variavelSimulada);

    http.begin(url);
    int httpResponseCode = http.GET();

    if (httpResponseCode > 0) {
        Serial.print("Dados enviados para ThingSpeak. Código HTTP: ");
        Serial.println(httpResponseCode);
    } else {
        Serial.print("Erro ao enviar dados. Código: ");
        Serial.println(httpResponseCode);
    }

    http.end();
} else {
    Serial.println("Wi-Fi desconectado. Não foi possível enviar dados.");
}
```

}

void setup() {
Serial.begin(115200);

```
dht.begin();

pinMode(PIN_LED, OUTPUT);
pinMode(PIN_BUZZER, OUTPUT);
pinMode(PIN_RELE, OUTPUT);

digitalWrite(PIN_LED, LOW);
digitalWrite(PIN_BUZZER, LOW);
digitalWrite(PIN_RELE, LOW);

conectarWiFi();

Serial.println("Sistema IoT de Monitoramento Ambiental iniciado.");
```

}

void loop() {
float temperatura = dht.readTemperature();
float umidade = dht.readHumidity();

```
int luminosidade = lerSensorAnalogico(PIN_LUMINOSIDADE);
int umidadeSolo = lerSensorAnalogico(PIN_UMIDADE_SOLO);
int qualidadeAr = lerSensorAnalogico(PIN_QUALIDADE_AR);
int variavelSimulada = lerSensorAnalogico(PIN_POTENCIOMETRO);

if (isnan(temperatura) || isnan(umidade)) {
    Serial.println("Falha na leitura do sensor DHT22.");
    return;
}

Serial.println("===== Leituras dos Sensores =====");
Serial.print("Temperatura: ");
Serial.print(temperatura);
Serial.println(" °C");

Serial.print("Umidade do Ar: ");
Serial.print(umidade);
Serial.println(" %");

Serial.print("Luminosidade: ");
Serial.println(luminosidade);

Serial.print("Umidade do Solo: ");
Serial.println(umidadeSolo);

Serial.print("Qualidade do Ar: ");
Serial.println(qualidadeAr);

Serial.print("Variável Simulada: ");
Serial.println(variavelSimulada);

bool alerta = false;

if (temperatura > 35 || umidade < 30 || qualidadeAr > 3000 || umidadeSolo < 1000) {
    alerta = true;
    Serial.println("Alerta: variável ambiental fora do limite definido.");
} else {
    Serial.println("Condições ambientais dentro dos limites definidos.");
}

acionarAlerta(alerta);

if (millis() - ultimoEnvio >= INTERVALO_ENVIO) {
    enviarDadosThingSpeak(
        temperatura,
        umidade,
        luminosidade,
        umidadeSolo,
        qualidadeAr,
        variavelSimulada
    );

    ultimoEnvio = millis();
}

delay(2000);
```

}
