# 🧪 Simulação no Wokwi — Sistema IoT com ESP32

## 📌 Visão Geral

Este documento apresenta a simulação do Sistema IoT de Monitoramento Ambiental com ESP32 utilizando a plataforma Wokwi.

O Wokwi foi utilizado para testar virtualmente o funcionamento do microcontrolador, sensores, atuadores e lógica de programação antes da implementação física do projeto.

---

## 🎯 Objetivo da Simulação

O objetivo da simulação é validar o comportamento do sistema em diferentes condições ambientais, sem a necessidade inicial de montagem física dos componentes.

A simulação permite testar:

* Leitura dos sensores
* Processamento dos dados pelo ESP32
* Acionamento de atuadores
* Envio de dados para a nuvem
* Resposta do sistema em situações normais e de alerta
* Funcionamento da lógica programada em C++

---

## 🧩 Componentes Simulados

Na simulação, foram representados os principais componentes do sistema:

* ESP32
* Sensor de temperatura e umidade
* Sensor de luminosidade
* Sensor de umidade do solo
* Sensor de qualidade do ar
* Potenciômetro para variável analógica
* LED
* Buzzer
* Relé
* Comunicação Wi-Fi
* Integração com ThingSpeak

---

## 🔄 Funcionamento Simulado

Durante a simulação, os sensores enviam valores para o ESP32, que realiza a leitura e o processamento das informações.

O sistema verifica se os valores estão dentro dos limites definidos. Caso algum valor esteja fora do padrão esperado, os atuadores são acionados para indicar uma condição de alerta.

As informações coletadas são exibidas no monitor serial e podem ser enviadas para a plataforma ThingSpeak por meio da conexão Wi-Fi simulada.

---

## 📊 Variáveis Testadas

Foram consideradas as seguintes variáveis ambientais:

| Variável           | Função no Sistema                          |
| ------------------ | ------------------------------------------ |
| Temperatura        | Identificar variações de calor no ambiente |
| Umidade do ar      | Monitorar a umidade relativa do ambiente   |
| Luminosidade       | Avaliar o nível de luz                     |
| Umidade do solo    | Verificar a condição de umidade do solo    |
| Qualidade do ar    | Simular indicador de condição ambiental    |
| Variável analógica | Permitir testes com valores variáveis      |

---

## 🚨 Testes de Alerta

A simulação permite testar situações em que os valores ultrapassam limites definidos no código.

Exemplos de condições de alerta:

* Temperatura acima do limite
* Umidade do ar abaixo do limite
* Qualidade do ar acima do limite
* Umidade do solo abaixo do valor mínimo

Quando uma dessas condições ocorre, o sistema pode acionar:

* LED para alerta visual
* Buzzer para alerta sonoro
* Relé para representar acionamento de dispositivo externo

---

## 🧠 Importância do Wokwi no Projeto

O Wokwi contribuiu para o desenvolvimento do projeto porque permitiu:

* Testar o código antes da montagem física
* Validar a lógica do sistema
* Simular sensores e atuadores
* Reduzir erros durante o desenvolvimento
* Demonstrar o funcionamento do projeto em ambiente virtual
* Facilitar a gravação de demonstrações e apresentações

---

## ✅ Resultado Esperado

Ao final da simulação, espera-se que o sistema seja capaz de:

* Realizar leituras dos sensores
* Exibir dados no monitor serial
* Detectar condições fora dos limites definidos
* Acionar alertas automaticamente
* Simular o envio de informações para a nuvem
* Demonstrar a aplicação prática de IoT com ESP32

---

## 🚀 Possíveis Melhorias na Simulação

A simulação pode ser evoluída com:

* Inclusão de novos sensores
* Melhor representação visual do circuito
* Uso de displays OLED ou LCD
* Simulação de dashboards externos
* Integração com mais plataformas IoT
* Simulação de falhas de conexão
* Testes com diferentes limites ambientais
