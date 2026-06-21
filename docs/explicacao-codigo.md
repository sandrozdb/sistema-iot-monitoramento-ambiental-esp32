# 🧠 Explicação do Código — Sistema IoT com ESP32

## 📌 Visão Geral

Este documento explica o funcionamento do código principal do Sistema IoT de Monitoramento Ambiental com ESP32.

O código foi desenvolvido em C++ utilizando o framework Arduino, com o objetivo de realizar a leitura de sensores ambientais, processar os dados coletados, acionar atuadores em situações de alerta e enviar as informações para a plataforma ThingSpeak.

---

## 📚 Bibliotecas Utilizadas

O código utiliza as seguintes bibliotecas:

### WiFi.h

Responsável por permitir a conexão do ESP32 à rede Wi-Fi.

Essa biblioteca é fundamental para que o sistema consiga se conectar à internet e enviar os dados para a nuvem.

### HTTPClient.h

Responsável por realizar requisições HTTP.

No projeto, ela é utilizada para enviar os dados dos sensores para a plataforma ThingSpeak.

### DHT.h

Responsável pela comunicação com o sensor DHT22.

Esse sensor realiza a leitura de temperatura e umidade do ar.

---

## 🔌 Configuração do Wi-Fi

O código possui variáveis para configuração da rede Wi-Fi.

Na simulação do Wokwi, é utilizado o SSID Wokwi-GUEST, que permite simular a conexão com a internet.

Em uma aplicação real, essas informações devem ser substituídas pelos dados da rede utilizada.

---

## ☁️ Configuração do ThingSpeak

O ThingSpeak é utilizado para receber e exibir os dados enviados pelo ESP32.

No código, existe uma variável para a chave de API da plataforma. Essa chave identifica o canal onde os dados serão armazenados.

Por segurança, a chave real não deve ser publicada em repositórios públicos.

---

## 🌡️ Sensor DHT22

O sensor DHT22 é configurado no pino GPIO 4.

Ele é responsável por medir:

* Temperatura do ambiente
* Umidade relativa do ar

Esses dados são lidos dentro da função loop e enviados posteriormente para o ThingSpeak.

---

## 📊 Sensores Analógicos

O projeto utiliza pinos analógicos do ESP32 para leitura de variáveis ambientais simuladas ou reais.

Sensores e pinos utilizados:

* GPIO 34 — Luminosidade
* GPIO 35 — Umidade do solo
* GPIO 32 — Qualidade do ar
* GPIO 33 — Variável analógica simulada por potenciômetro

Esses sensores retornam valores analógicos que podem variar conforme as condições simuladas ou medidas.

---

## 🚨 Atuadores

O sistema utiliza atuadores para sinalizar situações fora dos limites definidos.

Atuadores utilizados:

* GPIO 2 — LED
* GPIO 5 — Buzzer
* GPIO 18 — Relé

Quando alguma variável ambiental está fora do padrão, esses atuadores podem ser acionados automaticamente.

---

## 🔁 Função conectarWiFi

A função conectarWiFi é responsável por conectar o ESP32 à rede Wi-Fi.

Ela executa os seguintes passos:

1. Inicia a conexão com o Wi-Fi.
2. Aguarda até que o ESP32 esteja conectado.
3. Exibe mensagens no monitor serial.
4. Mostra o endereço IP obtido após a conexão.

Essa função é chamada durante a inicialização do sistema.

---

## 📥 Função lerSensorAnalogico

A função lerSensorAnalogico recebe um pino como parâmetro e retorna o valor lido naquele pino.

Ela utiliza a função analogRead para capturar o valor do sensor.

Essa função facilita a leitura de sensores analógicos e deixa o código mais organizado.

---

## 🚨 Função acionarAlerta

A função acionarAlerta recebe uma condição verdadeira ou falsa.

Quando a condição é verdadeira, o sistema aciona:

* LED
* Buzzer
* Relé

Quando a condição é falsa, todos os atuadores permanecem desligados.

Essa função representa a resposta automática do sistema a situações ambientais fora dos limites definidos.

---

## ☁️ Função enviarDadosThingSpeak

A função enviarDadosThingSpeak é responsável por enviar os dados coletados para a plataforma ThingSpeak.

Ela recebe os valores dos sensores e monta uma URL com os campos correspondentes da plataforma.

Os dados enviados são:

* Temperatura
* Umidade do ar
* Luminosidade
* Umidade do solo
* Qualidade do ar
* Variável analógica simulada

Após o envio, o código exibe no monitor serial se a requisição foi realizada com sucesso.

---

## ⚙️ Função setup

A função setup é executada apenas uma vez quando o ESP32 é iniciado.

Ela realiza as configurações iniciais do sistema:

1. Inicia a comunicação serial.
2. Inicializa o sensor DHT22.
3. Configura os pinos dos atuadores como saída.
4. Garante que LED, buzzer e relé iniciem desligados.
5. Conecta o ESP32 ao Wi-Fi.
6. Exibe mensagem de inicialização do sistema.

---

## 🔄 Função loop

A função loop é executada continuamente enquanto o ESP32 estiver ligado.

Ela é responsável por:

1. Ler temperatura e umidade do DHT22.
2. Ler sensores analógicos.
3. Exibir os dados no monitor serial.
4. Verificar se existem condições de alerta.
5. Acionar atuadores quando necessário.
6. Enviar dados para o ThingSpeak em intervalos definidos.
7. Repetir o processo continuamente.

---

## 🚨 Lógica de Alerta

O sistema considera uma condição de alerta quando alguma variável ultrapassa os limites definidos no código.

Exemplos:

* Temperatura acima de 35 graus
* Umidade do ar abaixo de 30%
* Qualidade do ar acima do limite configurado
* Umidade do solo abaixo do valor mínimo

Quando uma dessas situações ocorre, o sistema aciona os atuadores para indicar a condição fora do padrão.

---

## ⏱️ Intervalo de Envio

O código utiliza um intervalo de envio para evitar que os dados sejam enviados à nuvem a todo momento.

Esse controle é feito por meio da função millis, que permite medir o tempo sem interromper completamente o funcionamento do sistema.

No projeto, o intervalo foi definido para enviar os dados periodicamente ao ThingSpeak.

---

## ✅ Resultado Esperado do Código

Ao executar o código, espera-se que o sistema:

* Conecte-se ao Wi-Fi
* Leia os sensores ambientais
* Exiba os dados no monitor serial
* Identifique condições de alerta
* Acione LED, buzzer ou relé quando necessário
* Envie os dados para o ThingSpeak
* Permita monitoramento remoto em tempo real

---

## 📌 Conclusão

O código demonstra a integração entre sensores, atuadores, microcontrolador ESP32, comunicação Wi-Fi e plataforma em nuvem.

Essa implementação representa uma aplicação prática de Internet das Coisas, sistemas embarcados, automação e monitoramento ambiental em tempo real.
