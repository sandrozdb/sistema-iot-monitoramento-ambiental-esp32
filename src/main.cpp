#include <Arduino.h>
#include <DHT.h>
#include <HTTPClient.h>
#include <WiFi.h>

const char* WIFI_SSID = "Wokwi-GUEST";
const char* WIFI_PASSWORD = "";
const char* THINGSPEAK_API_KEY = "SUA_API_KEY_AQUI";
const char* THINGSPEAK_URL = "http://api.thingspeak.com/update";

#define DHT_PIN 4
#define DHT_TYPE DHT22
#define PIN_LUMINOSIDADE 34
#define PIN_UMIDADE_SOLO 35
#define PIN_QUALIDADE_AR 32
#define PIN_POTENCIOMETRO 33
#define PIN_LED 2
#define PIN_BUZZER 5
#define PIN_RELE 18

DHT dht(DHT_PIN, DHT_TYPE);
const unsigned long INTERVALO_ENVIO = 15000;
unsigned long ultimoEnvio = 0;

void conectarWiFi() {
    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
    const unsigned long inicio = millis();
    while (WiFi.status() != WL_CONNECTED && millis() - inicio < 15000) {
        delay(500);
        Serial.print(".");
    }
    Serial.println(WiFi.status() == WL_CONNECTED ? "\nWi-Fi conectado." : "\nFalha ao conectar ao Wi-Fi.");
}

void acionarAlerta(bool alerta) {
    digitalWrite(PIN_LED, alerta ? HIGH : LOW);
    digitalWrite(PIN_BUZZER, alerta ? HIGH : LOW);
    digitalWrite(PIN_RELE, alerta ? HIGH : LOW);
}

void enviarDados(float temperatura, float umidade, int luminosidade,
                  int umidadeSolo, int qualidadeAr, int variavelSimulada) {
    if (WiFi.status() != WL_CONNECTED || String(THINGSPEAK_API_KEY) == "SUA_API_KEY_AQUI") {
        Serial.println("Envio ignorado: Wi-Fi ou chave ThingSpeak não configurados.");
        return;
    }
    String url = String(THINGSPEAK_URL) + "?api_key=" + THINGSPEAK_API_KEY +
                 "&field1=" + String(temperatura) + "&field2=" + String(umidade) +
                 "&field3=" + String(luminosidade) + "&field4=" + String(umidadeSolo) +
                 "&field5=" + String(qualidadeAr) + "&field6=" + String(variavelSimulada);
    HTTPClient http;
    http.begin(url);
    Serial.printf("ThingSpeak HTTP: %d\n", http.GET());
    http.end();
}

void setup() {
    Serial.begin(115200);
    dht.begin();
    pinMode(PIN_LED, OUTPUT);
    pinMode(PIN_BUZZER, OUTPUT);
    pinMode(PIN_RELE, OUTPUT);
    acionarAlerta(false);
    conectarWiFi();
}

void loop() {
    const float temperatura = dht.readTemperature();
    const float umidade = dht.readHumidity();
    if (isnan(temperatura) || isnan(umidade)) {
        Serial.println("Falha na leitura do DHT22.");
        delay(2000);
        return;
    }
    const int luminosidade = analogRead(PIN_LUMINOSIDADE);
    const int umidadeSolo = analogRead(PIN_UMIDADE_SOLO);
    const int qualidadeAr = analogRead(PIN_QUALIDADE_AR);
    const int variavelSimulada = analogRead(PIN_POTENCIOMETRO);
    acionarAlerta(temperatura > 35 || umidade < 30 || qualidadeAr > 3000 || umidadeSolo < 1000);

    Serial.printf("Temp: %.1f C | Umidade: %.1f %% | Luz: %d | Solo: %d | Ar: %d\n",
                  temperatura, umidade, luminosidade, umidadeSolo, qualidadeAr);
    if (millis() - ultimoEnvio >= INTERVALO_ENVIO) {
        enviarDados(temperatura, umidade, luminosidade, umidadeSolo, qualidadeAr, variavelSimulada);
        ultimoEnvio = millis();
    }
    delay(2000);
}
