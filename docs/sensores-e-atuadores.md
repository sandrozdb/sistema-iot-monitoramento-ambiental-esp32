# 🔧 Sensores e Atuadores — Sistema IoT com ESP32

## 📌 Visão Geral

Este documento apresenta os sensores e atuadores utilizados no Sistema IoT de Monitoramento Ambiental com ESP32.

O projeto foi desenvolvido para coletar dados ambientais em tempo real, processar essas informações no microcontrolador e acionar alertas quando determinadas variáveis estiverem fora dos limites definidos.

---

## 🎯 Objetivo

O objetivo do uso de sensores e atuadores é permitir que o sistema consiga perceber o ambiente, interpretar as condições medidas e reagir automaticamente quando necessário.

Dessa forma, o projeto aplica conceitos de Internet das Coisas, sistemas embarcados, automação e monitoramento remoto.

---

## 🌡️ Sensor de Temperatura e Umidade

O sensor de temperatura e umidade é responsável por medir as condições do ar no ambiente.

No projeto, ele representa a coleta de duas variáveis importantes:

| Variável      | Descrição                                   |
| ------------- | ------------------------------------------- |
| Temperatura   | Mede o nível de calor do ambiente           |
| Umidade do ar | Mede a quantidade de umidade presente no ar |

Esses dados são importantes para aplicações em casas inteligentes, agricultura, ambientes industriais, laboratórios e monitoramento ambiental.

---

## 💡 Sensor de Luminosidade

O sensor de luminosidade mede a intensidade de luz no ambiente.

Ele pode ser utilizado para identificar se o local está claro, escuro ou com baixa iluminação.

Aplicações possíveis:

* Controle automático de iluminação
* Economia de energia
* Monitoramento de ambientes internos
* Automação residencial
* Cidades inteligentes

---

## 🌱 Sensor de Umidade do Solo

O sensor de umidade do solo mede a quantidade de água presente no solo.

Esse tipo de sensor é muito utilizado em aplicações de agricultura inteligente e automação de irrigação.

Aplicações possíveis:

* Monitoramento agrícola
* Irrigação automática
* Estufas inteligentes
* Controle de plantações
* Projetos de sustentabilidade

---

## 🌫️ Sensor de Qualidade do Ar

O sensor de qualidade do ar é utilizado para monitorar condições relacionadas à presença de gases, partículas ou variações ambientais.

No projeto, essa variável pode ser simulada ou representada por um sensor analógico.

Aplicações possíveis:

* Monitoramento ambiental
* Ambientes industriais
* Laboratórios
* Casas inteligentes
* Controle de qualidade do ar

---

## 🎛️ Potenciômetro

O potenciômetro foi utilizado para simular uma variável analógica no sistema.

Ele permite variar manualmente um valor de entrada, facilitando testes durante a simulação.

Funções no projeto:

* Simular variação de sensor
* Testar leitura analógica
* Demonstrar comportamento do sistema
* Validar resposta dos atuadores

---

## 💡 LED

O LED é utilizado como sinalização visual do sistema.

Quando alguma variável ambiental ultrapassa um limite definido, o LED pode ser acionado para indicar uma condição de alerta.

Funções no projeto:

* Indicar status do sistema
* Sinalizar alerta ambiental
* Facilitar visualização durante os testes
* Representar resposta automática do sistema

---

## 🔊 Buzzer

O buzzer é utilizado como alerta sonoro.

Ele pode ser acionado quando alguma condição ambiental estiver fora do padrão esperado.

Funções no projeto:

* Emitir alerta sonoro
* Indicar situação crítica
* Complementar a sinalização visual
* Demonstrar automação baseada em sensores

---

## ⚡ Relé

O relé representa a possibilidade de acionar cargas ou dispositivos externos.

Em um projeto real, ele poderia ser usado para ligar ventiladores, lâmpadas, bombas de irrigação ou outros equipamentos.

Aplicações possíveis:

* Acionamento de cargas elétricas
* Automação residencial
* Controle de irrigação
* Ativação de ventilação
* Controle de dispositivos externos

---

## 📊 Resumo dos Componentes

| Componente                | Tipo              | Função                                          |
| ------------------------- | ----------------- | ----------------------------------------------- |
| ESP32                     | Microcontrolador  | Processa dados e envia informações para a nuvem |
| Sensor de temperatura     | Sensor            | Mede a temperatura do ambiente                  |
| Sensor de umidade         | Sensor            | Mede a umidade do ar                            |
| Sensor de luminosidade    | Sensor            | Mede o nível de luz                             |
| Sensor de umidade do solo | Sensor            | Mede a condição do solo                         |
| Sensor de qualidade do ar | Sensor            | Mede ou simula qualidade ambiental              |
| Potenciômetro             | Entrada analógica | Simula uma variável ambiental                   |
| LED                       | Atuador           | Sinalização visual                              |
| Buzzer                    | Atuador           | Alerta sonoro                                   |
| Relé                      | Atuador           | Acionamento de dispositivos externos            |

---

## ✅ Resultado Esperado

Com a integração entre sensores e atuadores, o sistema consegue monitorar o ambiente, interpretar os dados coletados e reagir automaticamente quando necessário.

Esse funcionamento demonstra a aplicação prática de IoT, sistemas embarcados, automação e monitoramento ambiental em tempo real.
