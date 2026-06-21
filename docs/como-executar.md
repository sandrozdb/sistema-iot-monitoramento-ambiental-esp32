# ▶️ Como Executar o Projeto — Sistema IoT com ESP32

## 📌 Visão Geral

Este documento explica como o Sistema IoT de Monitoramento Ambiental com ESP32 pode ser executado, simulado e testado.

O projeto foi desenvolvido com foco acadêmico e demonstrativo, utilizando ESP32, sensores ambientais, atuadores, comunicação Wi-Fi e integração com a plataforma ThingSpeak.

---

## 🧰 Pré-requisitos

Para executar ou simular o projeto, recomenda-se utilizar:

* Arduino IDE ou PlatformIO
* Biblioteca WiFi
* Biblioteca HTTPClient
* Biblioteca DHT
* ESP32
* Acesso à internet
* Conta na plataforma ThingSpeak
* Simulador Wokwi
* Navegador web

---

## 🔧 Bibliotecas Necessárias

As principais bibliotecas utilizadas no código são:

* WiFi.h
* HTTPClient.h
* DHT.h

Essas bibliotecas permitem a conexão do ESP32 à rede Wi-Fi, o envio de dados para a nuvem e a leitura do sensor de temperatura e umidade.

---

## 📁 Estrutura do Projeto

O repositório está organizado da seguinte forma:

* README.md — documentação principal do projeto
* src/main.cpp — código principal do ESP32
* docs/ — documentação técnica do projeto
* docs/arquitetura.md — arquitetura da solução
* docs/sensores-e-atuadores.md — sensores e atuadores utilizados
* docs/integracao-thingspeak.md — integração com nuvem
* docs/simulacao-wokwi.md — simulação do projeto
* docs/modelagem-tinkercad.md — representação física do sistema

---

## ⚙️ Configuração do Wi-Fi

No código principal, as credenciais Wi-Fi são configuradas nas seguintes variáveis:

WIFI_SSID

WIFI_PASSWORD

Na simulação do Wokwi, pode ser utilizado:

SSID: Wokwi-GUEST

Senha: vazia

Em um ambiente real, essas informações devem ser alteradas para os dados da rede utilizada.

---

## ☁️ Configuração do ThingSpeak

Para enviar os dados para o ThingSpeak, é necessário criar um canal na plataforma e configurar a chave de API no código.

No arquivo src/main.cpp, localize a variável:

THINGSPEAK_API_KEY

Substitua o valor de exemplo pela chave de escrita do canal ThingSpeak.

Por segurança, não é recomendado publicar chaves reais no GitHub.

---

## 📊 Campos do ThingSpeak

A sugestão de organização dos campos é:

| Campo   | Variável                    |
| ------- | --------------------------- |
| Field 1 | Temperatura                 |
| Field 2 | Umidade do ar               |
| Field 3 | Luminosidade                |
| Field 4 | Umidade do solo             |
| Field 5 | Qualidade do ar             |
| Field 6 | Variável analógica simulada |

---

## 🧪 Executando no Wokwi

Para testar o projeto no Wokwi:

1. Acesse a plataforma Wokwi.
2. Crie um novo projeto com ESP32.
3. Adicione os sensores e atuadores utilizados.
4. Cole o código do arquivo src/main.cpp.
5. Configure os pinos conforme o código.
6. Execute a simulação.
7. Acompanhe as leituras pelo monitor serial.
8. Verifique o envio dos dados para o ThingSpeak.

---

## 🧠 Funcionamento Esperado

Durante a execução, o sistema deve:

* Conectar o ESP32 ao Wi-Fi.
* Ler os sensores ambientais.
* Exibir os dados no monitor serial.
* Verificar se alguma variável está fora dos limites definidos.
* Acionar LED, buzzer ou relé em condição de alerta.
* Enviar os dados para o ThingSpeak.
* Permitir acompanhamento remoto pela plataforma em nuvem.

---

## 🚨 Condições de Alerta

No código, o sistema considera alerta quando:

* A temperatura ultrapassa o limite definido.
* A umidade do ar fica abaixo do limite mínimo.
* A qualidade do ar ultrapassa o limite definido.
* A umidade do solo fica abaixo do valor mínimo.

Quando isso ocorre, os atuadores podem ser acionados automaticamente.

---

## ✅ Resultado Esperado

Ao final da execução, espera-se que o projeto demonstre:

* Leitura de sensores ambientais
* Processamento de dados pelo ESP32
* Acionamento automático de alertas
* Envio de dados para a nuvem
* Monitoramento remoto pelo ThingSpeak
* Aplicação prática de IoT e sistemas embarcados

---

## 🔐 Observação de Segurança

Em projetos reais, informações sensíveis como senhas de Wi-Fi e chaves de API devem ser protegidas.

Recomenda-se não publicar credenciais reais em repositórios públicos.
