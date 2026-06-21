# 🔌 Conexões do Projeto — Sistema IoT com ESP32

## 📌 Visão Geral

Este documento apresenta a sugestão de conexões entre o ESP32, sensores e atuadores utilizados no Sistema IoT de Monitoramento Ambiental.

As conexões foram pensadas para representar uma estrutura simples, funcional e adequada para simulação no Wokwi ou montagem física em laboratório.

---

## 🎯 Objetivo

O objetivo deste documento é organizar os pinos utilizados no ESP32, facilitando a compreensão da montagem do circuito, a leitura do código e futuras alterações no projeto.

---

## 🧠 Microcontrolador Utilizado

O microcontrolador principal do projeto é o ESP32.

O ESP32 foi escolhido por possuir:

* Wi-Fi integrado
* Boa quantidade de pinos digitais
* Entradas analógicas
* Baixo custo
* Facilidade de uso
* Compatibilidade com Arduino IDE e Wokwi
* Aplicação direta em projetos IoT

---

## 📊 Tabela de Conexões

| Componente                | Tipo              | Pino no ESP32 | Função                                  |
| ------------------------- | ----------------- | ------------- | --------------------------------------- |
| DHT22                     | Sensor digital    | GPIO 4        | Temperatura e umidade do ar             |
| Sensor de luminosidade    | Sensor analógico  | GPIO 34       | Leitura do nível de luz                 |
| Sensor de umidade do solo | Sensor analógico  | GPIO 35       | Leitura da umidade do solo              |
| Sensor de qualidade do ar | Sensor analógico  | GPIO 32       | Leitura ou simulação da qualidade do ar |
| Potenciômetro             | Entrada analógica | GPIO 33       | Simulação de variável ambiental         |
| LED                       | Atuador digital   | GPIO 2        | Alerta visual                           |
| Buzzer                    | Atuador digital   | GPIO 5        | Alerta sonoro                           |
| Relé                      | Atuador digital   | GPIO 18       | Acionamento de dispositivo externo      |

---

## 🌡️ Sensor DHT22

O sensor DHT22 realiza a leitura de temperatura e umidade do ar.

Conexões sugeridas:

* VCC conectado ao 3.3V
* GND conectado ao GND
* DATA conectado ao GPIO 4

---

## 💡 Sensor de Luminosidade

O sensor de luminosidade representa a leitura da intensidade de luz no ambiente.

Conexões sugeridas:

* VCC conectado ao 3.3V
* GND conectado ao GND
* Sinal conectado ao GPIO 34

---

## 🌱 Sensor de Umidade do Solo

O sensor de umidade do solo representa a leitura da quantidade de água presente no solo.

Conexões sugeridas:

* VCC conectado ao 3.3V
* GND conectado ao GND
* Sinal conectado ao GPIO 35

---

## 🌫️ Sensor de Qualidade do Ar

O sensor de qualidade do ar representa uma variável ambiental analógica relacionada à condição do ar.

Conexões sugeridas:

* VCC conectado ao 3.3V
* GND conectado ao GND
* Sinal conectado ao GPIO 32

---

## 🎛️ Potenciômetro

O potenciômetro é utilizado para simular uma variável analógica durante os testes.

Conexões sugeridas:

* Terminal 1 conectado ao 3.3V
* Terminal 2 conectado ao GPIO 33
* Terminal 3 conectado ao GND

---

## 💡 LED

O LED é utilizado como alerta visual.

Conexões sugeridas:

* Ânodo conectado ao GPIO 2
* Cátodo conectado ao GND por meio de resistor

---

## 🔊 Buzzer

O buzzer é utilizado como alerta sonoro.

Conexões sugeridas:

* Terminal positivo conectado ao GPIO 5
* Terminal negativo conectado ao GND

---

## ⚡ Relé

O relé representa o acionamento de cargas ou dispositivos externos.

Conexões sugeridas:

* VCC conectado à alimentação adequada
* GND conectado ao GND
* Sinal conectado ao GPIO 18

---

## ⚠️ Observações Importantes

Em uma montagem física real, é importante observar:

* A tensão de operação dos sensores
* O uso de resistores quando necessário
* A corrente suportada pelos pinos do ESP32
* O isolamento adequado do relé
* A proteção dos componentes
* A segurança elétrica do circuito

---

## ✅ Resultado Esperado

Com essas conexões, o ESP32 consegue realizar a leitura dos sensores, processar os dados ambientais, acionar alertas e enviar informações para a plataforma em nuvem.

A organização dos pinos facilita a manutenção do código, a simulação no Wokwi e a futura montagem física do protótipo.
