# 📋 Requisitos do Projeto — Sistema IoT de Monitoramento Ambiental com ESP32

## 📌 Visão Geral

Este documento apresenta os principais requisitos funcionais e não funcionais do Sistema IoT de Monitoramento Ambiental com ESP32.

O projeto foi desenvolvido com o objetivo de monitorar variáveis ambientais em tempo real, utilizando sensores conectados ao microcontrolador ESP32, envio de dados para a nuvem e acionamento de alertas por meio de atuadores.

---

## 🎯 Objetivo dos Requisitos

Definir as funcionalidades esperadas do sistema, os critérios de funcionamento e as características técnicas necessárias para garantir uma solução organizada, funcional, escalável e alinhada aos conceitos de Internet das Coisas e sistemas embarcados.

---

## ✅ Requisitos Funcionais

### RF01 — Ler temperatura ambiente

O sistema deve realizar a leitura da temperatura do ambiente por meio de sensor conectado ao ESP32.

### RF02 — Ler umidade do ar

O sistema deve coletar informações relacionadas à umidade relativa do ar.

### RF03 — Ler luminosidade

O sistema deve identificar o nível de luminosidade do ambiente por meio de sensor analógico ou simulado.

### RF04 — Ler umidade do solo

O sistema deve coletar dados referentes à umidade do solo, permitindo aplicação em cenários de agricultura inteligente ou monitoramento ambiental.

### RF05 — Ler qualidade do ar

O sistema deve realizar a leitura ou simulação de uma variável relacionada à qualidade do ar.

### RF06 — Ler variável analógica simulada

O sistema deve utilizar um potenciômetro para simular uma variável analógica, permitindo testes e validação do funcionamento.

### RF07 — Processar dados no ESP32

O ESP32 deve receber, organizar e processar os dados coletados pelos sensores.

### RF08 — Identificar condições de alerta

O sistema deve verificar se os valores coletados estão dentro dos limites definidos no código.

### RF09 — Acionar atuadores

Quando alguma variável estiver fora do padrão esperado, o sistema deve acionar atuadores, como LED, buzzer ou relé.

### RF10 — Enviar dados para a nuvem

O sistema deve enviar os dados coletados para a plataforma ThingSpeak utilizando conexão Wi-Fi.

### RF11 — Exibir dados no monitor serial

O sistema deve exibir as leituras dos sensores no monitor serial para acompanhamento durante testes e simulação.

### RF12 — Permitir monitoramento remoto

Os dados enviados ao ThingSpeak devem permitir acompanhamento remoto por meio de gráficos e registros históricos.

---

## ⚙️ Requisitos Não Funcionais

### RNF01 — Baixo custo

A solução deve utilizar componentes acessíveis, como ESP32 e sensores de baixo custo.

### RNF02 — Facilidade de implementação

O projeto deve ser simples de montar, simular e compreender, facilitando seu uso em ambiente acadêmico.

### RNF03 — Escalabilidade

A arquitetura deve permitir a adição futura de novos sensores, atuadores e funcionalidades.

### RNF04 — Confiabilidade

O sistema deve realizar leituras de forma contínua e indicar falhas quando algum sensor não responder corretamente.

### RNF05 — Manutenibilidade

O código e a documentação devem ser organizados para facilitar manutenção, estudo e futuras melhorias.

### RNF06 — Conectividade

O sistema deve utilizar a comunicação Wi-Fi integrada do ESP32 para envio dos dados para a nuvem.

### RNF07 — Segurança

O projeto deve considerar boas práticas de segurança, como proteção da chave de API e das credenciais Wi-Fi.

### RNF08 — Monitoramento em tempo real

A solução deve permitir acompanhamento dos dados ambientais de forma contínua e remota.

---

## 🧪 Regras de Funcionamento

O sistema deve considerar condição de alerta quando:

* A temperatura estiver acima do limite definido.
* A umidade do ar estiver abaixo do limite mínimo.
* A qualidade do ar ultrapassar o valor limite.
* A umidade do solo estiver abaixo do valor esperado.

Quando uma condição de alerta for identificada, o sistema pode acionar:

* LED
* Buzzer
* Relé

---

## 📊 Critérios de Sucesso

O projeto será considerado bem-sucedido quando conseguir demonstrar:

* Leitura de sensores ambientais
* Processamento dos dados pelo ESP32
* Exibição das leituras no monitor serial
* Acionamento de atuadores em condição de alerta
* Envio de dados para o ThingSpeak
* Visualização remota das informações
* Documentação clara da arquitetura e funcionamento

---

## 🚀 Melhorias Relacionadas aos Requisitos

O projeto pode evoluir com novos requisitos, como:

* Dashboard em Power BI
* Aplicativo mobile
* Alertas por e-mail
* Banco de dados próprio
* Integração com automação residencial
* Inteligência Artificial para análise de padrões
* Gabinete físico com impressão 3D
* Novos sensores ambientais
