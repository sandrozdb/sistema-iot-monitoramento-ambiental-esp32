#ifndef CONFIG_EXAMPLE_H
#define CONFIG_EXAMPLE_H

// Arquivo de configuração de exemplo
// Nunca coloque senhas reais ou chaves reais em repositórios públicos.

// Configurações Wi-Fi
#define WIFI_SSID "NOME_DA_REDE_WIFI"
#define WIFI_PASSWORD "SENHA_DA_REDE_WIFI"

// Configurações ThingSpeak
#define THINGSPEAK_API_KEY "SUA_CHAVE_DE_API_AQUI"
#define THINGSPEAK_URL "http://api.thingspeak.com/update"

// Configurações do Projeto
#define PROJECT_NAME "Sistema IoT de Monitoramento Ambiental com ESP32"
#define DEVICE_NAME "ESP32 Ambiental 01"

// Intervalo de envio dos dados para a nuvem em milissegundos
#define INTERVALO_ENVIO 15000

// Limites de alerta
#define LIMITE_TEMPERATURA 35
#define LIMITE_UMIDADE_AR 30
#define LIMITE_QUALIDADE_AR 3000
#define LIMITE_UMIDADE_SOLO 1000

#endif
