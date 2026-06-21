# 🌎 Sistema IoT de Monitoramento Ambiental com ESP32

## 📌 Sobre o Projeto

Este projeto apresenta o desenvolvimento de uma solução IoT baseada no microcontrolador ESP32 para monitoramento ambiental em tempo real.

O sistema integra sensores para coleta de dados de temperatura, umidade, luminosidade, qualidade do ar, umidade do solo e outras variáveis ambientais. Os dados coletados são processados pelo ESP32 e enviados para uma plataforma em nuvem, permitindo visualização, acompanhamento remoto e análise contínua das informações.

O projeto foi desenvolvido no contexto acadêmico da UniFECAF, aplicando conceitos de Internet das Coisas, sistemas embarcados, sensores, comunicação de dados, automação, computação em nuvem e integração entre hardware e software.

---

## 🎯 Objetivos

* Desenvolver uma solução IoT para monitoramento ambiental.
* Utilizar o ESP32 como microcontrolador principal.
* Integrar sensores para coleta de dados ambientais.
* Processar informações em tempo real.
* Enviar dados para uma plataforma em nuvem.
* Permitir acompanhamento remoto das variáveis monitoradas.
* Aplicar conceitos de sistemas embarcados, IoT e automação.
* Demonstrar a integração entre hardware, software e nuvem.

---

## 🧠 Problema Identificado

Ambientes residenciais, industriais, agrícolas e urbanos podem exigir acompanhamento constante de variáveis ambientais.

A ausência de monitoramento automatizado dificulta a identificação de alterações importantes, como aumento de temperatura, baixa umidade, luminosidade inadequada, variações na qualidade do ar ou baixa umidade do solo.

Com uma solução IoT, é possível automatizar a coleta de dados, visualizar informações remotamente e apoiar decisões com base em dados reais.

---

## 💡 Solução Proposta

A solução proposta utiliza o ESP32 conectado a sensores para coletar informações ambientais em tempo real.

Os dados são processados pelo microcontrolador e enviados para a plataforma ThingSpeak, permitindo o monitoramento remoto por meio de gráficos e registros históricos.

O projeto também conta com atuadores, como LED, buzzer ou relé, que podem ser acionados quando determinados valores ultrapassam limites definidos.

---

## ⚙️ Tecnologias Utilizadas

* ESP32
* C++
* Sensores
* Internet das Coisas
* Sistemas Embarcados
* ThingSpeak
* Wokwi
* Tinkercad
* Wi-Fi
* Automação
* Computação em Nuvem

---

## 🔧 Componentes do Sistema

* ESP32
* Sensor de temperatura e umidade
* Sensor de luminosidade
* Sensor de umidade do solo
* Sensor de qualidade do ar
* Potenciômetro para simulação de variável analógica
* LED para sinalização visual
* Buzzer para alerta sonoro
* Relé para acionamento de carga
* Plataforma ThingSpeak
* Simulação no Wokwi
* Modelagem no Tinkercad

---

## 🔄 Funcionamento do Sistema

1. Os sensores coletam dados ambientais.
2. O ESP32 recebe os sinais dos sensores.
3. Os dados são processados pelo microcontrolador.
4. O sistema verifica se os valores estão dentro dos limites definidos.
5. Caso algum valor esteja fora do padrão, os atuadores podem ser acionados.
6. As informações são enviadas para a nuvem via Wi-Fi.
7. A plataforma ThingSpeak exibe os dados para acompanhamento remoto.
8. Os dados podem ser analisados posteriormente por meio de gráficos e histórico.

---

## 🏗️ Arquitetura da Solução

┌──────────────────────────────┐
│ Sensores Ambientais          │
│ Temperatura, Umidade, Luz    │
└───────────────┬──────────────┘
↓
┌──────────────────────────────┐
│ ESP32                        │
│ Processamento dos Dados      │
└───────────────┬──────────────┘
↓
┌──────────────────────────────┐
│ Atuadores                    │
│ LED, Buzzer e Relé           │
└───────────────┬──────────────┘
↓
┌──────────────────────────────┐
│ Wi-Fi                        │
│ Comunicação com a Internet   │
└───────────────┬──────────────┘
↓
┌──────────────────────────────┐
│ ThingSpeak                   │
│ Monitoramento em Nuvem       │
└──────────────────────────────┘

---

## 📊 Variáveis Monitoradas

| Variável           | Descrição                                  |
| ------------------ | ------------------------------------------ |
| Temperatura        | Mede a temperatura do ambiente             |
| Umidade            | Mede a umidade relativa do ar              |
| Luminosidade       | Identifica o nível de luz do ambiente      |
| Umidade do solo    | Monitora a condição do solo                |
| Qualidade do ar    | Simula ou mede indicadores ambientais      |
| Variável analógica | Representada por potenciômetro para testes |

---

## 🚨 Atuadores

O sistema pode utilizar atuadores para indicar situações fora dos limites definidos.

| Atuador | Função                                         |
| ------- | ---------------------------------------------- |
| LED     | Sinalização visual                             |
| Buzzer  | Alerta sonoro                                  |
| Relé    | Acionamento de cargas ou dispositivos externos |

---

## ☁️ Integração com ThingSpeak

O ThingSpeak é utilizado como plataforma em nuvem para receber, armazenar e exibir os dados coletados pelo ESP32.

A plataforma permite:

* Visualizar dados em tempo real
* Acompanhar gráficos
* Armazenar histórico de medições
* Analisar tendências ambientais
* Monitorar remotamente o funcionamento do sistema

---

## 🧪 Simulação

O projeto foi simulado no Wokwi, permitindo testar o funcionamento do ESP32, sensores e atuadores em ambiente virtual.

Também foi utilizado o Tinkercad para representação visual e modelagem do gabinete do sistema.

---

## ✅ Benefícios do Projeto

* Monitoramento ambiental em tempo real
* Coleta automatizada de dados
* Integração entre hardware e software
* Visualização remota em nuvem
* Aplicação prática de IoT
* Possibilidade de alertas automáticos
* Baixo custo de implementação
* Escalabilidade para diferentes ambientes

---

## 🚀 Possíveis Aplicações

* Casas inteligentes
* Agricultura inteligente
* Monitoramento ambiental
* Automação residencial
* Ambientes industriais
* Escolas e laboratórios
* Projetos acadêmicos
* Cidades inteligentes

---

## 📚 Aprendizados

Durante o desenvolvimento deste projeto, foram aplicados conhecimentos de:

* Internet das Coisas
* Sistemas embarcados
* Programação em C++
* Microcontroladores ESP32
* Sensores analógicos e digitais
* Comunicação Wi-Fi
* Computação em nuvem
* Automação
* Simulação de circuitos
* Monitoramento remoto
* Integração entre hardware e software

---

## 🔮 Melhorias Futuras

* Adicionar dashboard em Power BI
* Integrar alertas por e-mail
* Enviar notificações automáticas
* Utilizar banco de dados próprio
* Implementar aplicativo mobile
* Adicionar mais sensores físicos
* Criar gabinete físico impresso em 3D
* Aplicar IA para análise de padrões ambientais
* Integrar com sistemas de automação residencial

---

## 👨‍💻 Autor

**Sandro Ferreira**

Estudante de Engenharia da Computação
Estudante de Inteligência Artificial e Automação Digital

📧 E-mail: [sandrozdb@gmail.com](mailto:sandrozdb@gmail.com)
💼 LinkedIn: https://linkedin.com/in/sandrozdb
🐙 GitHub: https://github.com/sandrozdb
