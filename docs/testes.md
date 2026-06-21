# 🧪 Testes do Projeto — Sistema IoT de Monitoramento Ambiental com ESP32

## 📌 Visão Geral

Este documento apresenta os principais testes realizados no Sistema IoT de Monitoramento Ambiental com ESP32.

Os testes têm como objetivo validar a leitura dos sensores, o processamento dos dados, o acionamento dos atuadores e o envio das informações para a plataforma ThingSpeak.

---

## 🎯 Objetivo dos Testes

Os testes foram definidos para verificar se o sistema consegue operar corretamente em diferentes condições ambientais simuladas.

Os principais objetivos são:

* Validar a leitura dos sensores
* Verificar o funcionamento do ESP32
* Testar o acionamento dos atuadores
* Simular condições normais e de alerta
* Verificar o envio de dados para a nuvem
* Confirmar o funcionamento do monitoramento remoto

---

## ✅ Teste 1 — Inicialização do Sistema

### Objetivo

Verificar se o ESP32 inicializa corretamente e executa as configurações iniciais.

### Resultado esperado

* Comunicação serial iniciada
* Sensor DHT22 inicializado
* Atuadores configurados como saída
* LED, buzzer e relé iniciando desligados
* Tentativa de conexão Wi-Fi iniciada

---

## ✅ Teste 2 — Conexão Wi-Fi

### Objetivo

Verificar se o ESP32 consegue se conectar à rede Wi-Fi.

### Resultado esperado

* ESP32 conectado à rede
* Endereço IP exibido no monitor serial
* Sistema apto a enviar dados para a nuvem

---

## ✅ Teste 3 — Leitura de Temperatura e Umidade

### Objetivo

Validar a leitura do sensor de temperatura e umidade.

### Resultado esperado

* Temperatura exibida no monitor serial
* Umidade do ar exibida no monitor serial
* Sistema identificando falha caso o sensor não responda corretamente

---

## ✅ Teste 4 — Leitura dos Sensores Analógicos

### Objetivo

Verificar a leitura dos sensores analógicos e do potenciômetro.

### Variáveis testadas

* Luminosidade
* Umidade do solo
* Qualidade do ar
* Variável simulada por potenciômetro

### Resultado esperado

* Valores analógicos exibidos no monitor serial
* Variação dos valores conforme alteração dos sensores ou potenciômetros
* Dados disponíveis para envio ao ThingSpeak

---

## ✅ Teste 5 — Condição Normal

### Objetivo

Verificar o comportamento do sistema quando todas as variáveis estão dentro dos limites definidos.

### Resultado esperado

* LED desligado
* Buzzer desligado
* Relé desligado
* Mensagem indicando condições ambientais dentro dos limites
* Dados enviados normalmente para a nuvem

---

## ✅ Teste 6 — Condição de Alerta por Temperatura

### Objetivo

Verificar o acionamento dos atuadores quando a temperatura ultrapassa o limite definido.

### Resultado esperado

* Sistema identifica temperatura elevada
* LED é acionado
* Buzzer é acionado
* Relé é acionado
* Mensagem de alerta exibida no monitor serial

---

## ✅ Teste 7 — Condição de Alerta por Baixa Umidade

### Objetivo

Verificar o comportamento do sistema quando a umidade do ar fica abaixo do limite mínimo.

### Resultado esperado

* Sistema identifica baixa umidade
* Atuadores são acionados
* Alerta exibido no monitor serial

---

## ✅ Teste 8 — Condição de Alerta por Umidade do Solo

### Objetivo

Verificar o comportamento do sistema quando a umidade do solo está abaixo do valor esperado.

### Resultado esperado

* Sistema identifica baixa umidade do solo
* LED, buzzer ou relé podem ser acionados
* Alerta exibido no monitor serial

---

## ✅ Teste 9 — Envio de Dados para ThingSpeak

### Objetivo

Verificar se os dados coletados são enviados corretamente para a plataforma ThingSpeak.

### Resultado esperado

* Requisição HTTP enviada
* Código de resposta exibido no monitor serial
* Dados registrados nos campos do ThingSpeak
* Gráficos atualizados na plataforma

---

## ✅ Teste 10 — Falha de Conexão

### Objetivo

Verificar o comportamento do sistema caso a conexão Wi-Fi esteja indisponível.

### Resultado esperado

* Sistema identifica falha na conexão
* Mensagem de erro exibida no monitor serial
* Sistema continua realizando leituras locais
* Envio para nuvem não é realizado até a conexão ser restabelecida

---

## 📊 Resumo dos Testes

| Teste                 | Objetivo                      | Resultado Esperado          |
| --------------------- | ----------------------------- | --------------------------- |
| Inicialização         | Validar partida do sistema    | Sistema inicia corretamente |
| Wi-Fi                 | Validar conexão               | ESP32 conectado             |
| DHT22                 | Ler temperatura e umidade     | Valores exibidos            |
| Sensores analógicos   | Ler variáveis ambientais      | Valores exibidos            |
| Condição normal       | Verificar operação sem alerta | Atuadores desligados        |
| Temperatura elevada   | Testar alerta                 | Atuadores acionados         |
| Baixa umidade         | Testar alerta                 | Atuadores acionados         |
| Umidade do solo baixa | Testar alerta                 | Atuadores acionados         |
| ThingSpeak            | Enviar dados para nuvem       | Dados registrados           |
| Falha de conexão      | Testar erro de rede           | Erro exibido                |

---

## ✅ Conclusão dos Testes

Os testes demonstram que o sistema é capaz de realizar leituras ambientais, processar os dados no ESP32, identificar condições fora dos limites definidos, acionar atuadores e enviar informações para a plataforma ThingSpeak.

Esses testes validam o funcionamento geral da solução e demonstram a aplicação prática de IoT, sistemas embarcados, sensores, atuadores e monitoramento em nuvem.
