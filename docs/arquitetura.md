# 🏗️ Arquitetura da Solução — Sistema IoT de Monitoramento Ambiental com ESP32

## 📌 Visão Geral

Este documento apresenta a arquitetura do Sistema IoT de Monitoramento Ambiental com ESP32.

A solução foi desenvolvida para coletar dados ambientais por meio de sensores, processar as informações no microcontrolador ESP32 e enviar os dados para uma plataforma em nuvem, permitindo monitoramento remoto em tempo real.

---

## 🎯 Objetivo da Arquitetura

O objetivo da arquitetura é integrar hardware, software, sensores, comunicação Wi-Fi e plataforma em nuvem em uma solução funcional de Internet das Coisas.

A arquitetura permite:

* Coleta de dados ambientais
* Processamento local pelo ESP32
* Acionamento de alertas visuais e sonoros
* Envio de informações para a nuvem
* Monitoramento remoto
* Análise contínua das variáveis ambientais

---

## 🧩 Componentes da Solução

### 1. ESP32

O ESP32 é o microcontrolador principal do projeto.

Ele é responsável por:

* Ler os sensores
* Processar os dados coletados
* Controlar atuadores
* Conectar-se à rede Wi-Fi
* Enviar dados para a nuvem
* Executar a lógica principal do sistema

---

### 2. Sensores Ambientais

Os sensores são responsáveis por coletar informações do ambiente.

Sensores utilizados ou simulados:

* Sensor de temperatura
* Sensor de umidade do ar
* Sensor de luminosidade
* Sensor de umidade do solo
* Sensor de qualidade do ar
* Potenciômetro para simulação de variável analógica

---

### 3. Atuadores

Os atuadores são utilizados para indicar situações fora dos limites definidos.

Atuadores utilizados:

* LED para alerta visual
* Buzzer para alerta sonoro
* Relé para acionamento de carga ou dispositivo externo

---

### 4. Comunicação Wi-Fi

O ESP32 possui Wi-Fi integrado, permitindo comunicação com a internet sem a necessidade de módulos adicionais.

A comunicação Wi-Fi é utilizada para:

* Conectar o sistema à internet
* Enviar dados para a nuvem
* Permitir monitoramento remoto
* Integrar o dispositivo a plataformas IoT

---

### 5. ThingSpeak

O ThingSpeak é a plataforma em nuvem utilizada para receber, armazenar e exibir os dados coletados pelo ESP32.

A plataforma permite:

* Visualização de dados em tempo real
* Geração de gráficos
* Armazenamento histórico
* Monitoramento remoto
* Análise das medições ambientais

---

### 6. Wokwi

O Wokwi foi utilizado para simular o funcionamento do circuito com ESP32, sensores e atuadores.

A simulação permite testar a lógica do sistema antes da montagem física.

---

### 7. Tinkercad

O Tinkercad foi utilizado para representação visual e modelagem do gabinete do sistema, contribuindo para a visualização da solução física.

---

## 🏗️ Diagrama da Arquitetura

┌──────────────────────────────┐
│      Sensores Ambientais      │
│ Temperatura, Umidade, Luz     │
│ Solo, Ar e Variável Simulada  │
└───────────────┬──────────────┘
↓
┌──────────────────────────────┐
│             ESP32             │
│ Leitura e Processamento       │
│ dos Dados                     │
└───────────────┬──────────────┘
↓
┌──────────────────────────────┐
│           Atuadores           │
│ LED, Buzzer e Relé            │
└───────────────┬──────────────┘
↓
┌──────────────────────────────┐
│          Comunicação Wi-Fi    │
│ Envio de Dados pela Internet  │
└───────────────┬──────────────┘
↓
┌──────────────────────────────┐
│           ThingSpeak          │
│ Monitoramento em Nuvem        │
└──────────────────────────────┘

---

## 🔄 Fluxo de Funcionamento

1. Os sensores realizam a leitura das variáveis ambientais.
2. O ESP32 recebe os dados dos sensores.
3. O microcontrolador processa as informações.
4. O sistema verifica se os valores estão dentro dos limites definidos.
5. Caso algum valor esteja fora do padrão, LED, buzzer ou relé podem ser acionados.
6. Os dados são enviados para o ThingSpeak por meio da conexão Wi-Fi.
7. A plataforma em nuvem exibe os dados em gráficos.
8. O usuário pode acompanhar as informações remotamente.

---

## 🔐 Considerações de Segurança

Em um ambiente real, o projeto pode ser aprimorado com práticas de segurança, como:

* Proteção da chave de API do ThingSpeak
* Uso de variáveis de ambiente
* Controle de acesso à plataforma em nuvem
* Validação dos dados enviados
* Monitoramento de falhas de conexão
* Proteção da rede Wi-Fi utilizada
* Atualização segura do firmware

---

## 📈 Possíveis Expansões

A arquitetura pode ser expandida futuramente com:

* Dashboard em Power BI
* Banco de dados próprio
* Aplicativo mobile
* Alertas por e-mail
* Notificações em tempo real
* Novos sensores ambientais
* Integração com sistemas de automação residencial
* Aplicação de inteligência artificial para análise de padrões
* Gabinete físico impresso em 3D

---

## ✅ Resultado Esperado

Com essa arquitetura, o sistema permite o monitoramento ambiental remoto e em tempo real, integrando sensores, ESP32, atuadores e plataforma em nuvem.

O projeto demonstra a aplicação prática de Internet das Coisas, sistemas embarcados, automação e comunicação de dados.
