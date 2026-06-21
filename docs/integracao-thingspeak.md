# ☁️ Integração com ThingSpeak — Sistema IoT com ESP32

## 📌 Visão Geral

Este documento apresenta a integração do Sistema IoT de Monitoramento Ambiental com ESP32 à plataforma ThingSpeak.

O ThingSpeak é utilizado como plataforma em nuvem para receber, armazenar e exibir os dados coletados pelos sensores conectados ao ESP32.

Essa integração permite o acompanhamento remoto das variáveis ambientais em tempo real, por meio de gráficos e histórico de medições.

---

## 🎯 Objetivo da Integração

O objetivo da integração com o ThingSpeak é permitir que os dados ambientais coletados pelo ESP32 sejam enviados para a nuvem, possibilitando visualização, monitoramento e análise contínua.

Com isso, o projeto deixa de ser apenas um sistema local e passa a funcionar como uma solução IoT conectada.

---

## 🔄 Fluxo de Envio dos Dados

O fluxo de envio dos dados ocorre da seguinte forma:

1. Os sensores realizam a leitura das variáveis ambientais.
2. O ESP32 processa os valores coletados.
3. O microcontrolador se conecta à rede Wi-Fi.
4. Os dados são enviados para o ThingSpeak.
5. A plataforma armazena as informações em campos específicos.
6. Os dados ficam disponíveis em gráficos para acompanhamento remoto.

---

## 📊 Campos Utilizados no ThingSpeak

No projeto, cada variável monitorada pode ser associada a um campo da plataforma ThingSpeak.

| Campo   | Variável Monitorada         |
| ------- | --------------------------- |
| Field 1 | Temperatura                 |
| Field 2 | Umidade do ar               |
| Field 3 | Luminosidade                |
| Field 4 | Umidade do solo             |
| Field 5 | Qualidade do ar             |
| Field 6 | Variável analógica simulada |

---

## 🌡️ Temperatura

A temperatura é enviada para o ThingSpeak para permitir o acompanhamento da variação térmica do ambiente ao longo do tempo.

Esse dado pode ser utilizado para identificar situações de calor excessivo ou mudanças bruscas nas condições ambientais.

---

## 💧 Umidade do Ar

A umidade do ar indica a quantidade de vapor de água presente no ambiente.

Esse dado é importante para monitoramento ambiental, conforto térmico, agricultura inteligente e controle de ambientes internos.

---

## 💡 Luminosidade

A luminosidade representa o nível de luz captado pelo sensor.

Esse dado pode ser utilizado para automação de iluminação, economia de energia e monitoramento de ambientes.

---

## 🌱 Umidade do Solo

A umidade do solo representa a quantidade de água presente no solo.

Essa variável pode ser aplicada em projetos de agricultura inteligente, irrigação automática e monitoramento de plantações.

---

## 🌫️ Qualidade do Ar

A qualidade do ar representa uma variável ambiental relacionada à presença de gases, partículas ou condições do ambiente.

No projeto, essa variável pode ser simulada ou coletada por meio de sensor analógico.

---

## 🎛️ Variável Analógica Simulada

A variável analógica simulada é representada por um potenciômetro.

Ela permite testar diferentes valores durante a simulação e validar o comportamento do sistema sem depender de sensores físicos adicionais.

---

## ✅ Benefícios da Integração

A integração com o ThingSpeak permite:

* Monitoramento remoto
* Visualização de dados em tempo real
* Armazenamento histórico das medições
* Análise gráfica das variáveis ambientais
* Comparação entre diferentes sensores
* Acompanhamento contínuo do sistema
* Possibilidade de expansão para dashboards e alertas

---

## 🔐 Cuidados com a Chave de API

A chave de API do ThingSpeak deve ser protegida, principalmente em projetos publicados no GitHub.

Boas práticas recomendadas:

* Não publicar chaves reais no código
* Utilizar uma chave genérica ou de exemplo
* Armazenar credenciais em arquivo de configuração
* Remover dados sensíveis antes de publicar o projeto
* Utilizar variáveis de ambiente em aplicações reais

---

## 📈 Possíveis Melhorias

A integração com ThingSpeak pode ser evoluída com:

* Mais campos de monitoramento
* Alertas automáticos
* Integração com Power BI
* Exportação dos dados para banco de dados
* Análise histórica das medições
* Aplicação de IA para identificação de padrões
* Integração com sistemas de automação residencial

---

## ✅ Resultado Esperado

Com a integração ao ThingSpeak, o sistema permite visualizar os dados ambientais coletados pelo ESP32 de forma remota, organizada e contínua.

Essa etapa demonstra a aplicação prática de Internet das Coisas, conectando sensores físicos ou simulados a uma plataforma em nuvem para monitoramento em tempo real.
