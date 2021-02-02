# projeto-mqtt-HigorHenrique-


#Objetivo
O objetivo do projeto é fazer uma ferramenta de alerta e monitoramento utilizando um Arduino Uno e um sensor Magnético para o monitoramento da porta de um RACK de rede, desta forma tendo um retorno remoto do estado da porta que pode ser Aberto ou Fechado. Essa informação é enviada pela internet utilizando o protocolo MQTT (Message Queuing Telemetry Transport) para um outro servidor hospedado na AWS (Amazon Web Service) que exibe a mensagem no aplicativo para SmartPhone MQTT Dash conforme a imagem e anexo:
https://user-images.githubusercontent.com/73251227/106644250-9fafc480-6569-11eb-81d9-82ff9a5cc126.PNG
No Arduino as bibliotecas são trechos de softwere utilizados para funções especificas e neste projeto utilizamos as seguintes biblotecas:
https://github.com/UIPEthernet/UIPEthernet
https://github.com/knolleary/pubsubclient
#Materiais utilizados no projeto
https://www.arduino.cc/
https://www.arduino.cc/search?q=M%C3%B3dulo%20Ethernet%20%28ENC28J60%29
https://blogmasterwalkershop.com.br/arduino/como-usar-com-arduino-sensor-magnetico-com-fio-para-alarme-mc-38/
https://www.arduino.cc/search?q=jumpers&tab=store
#Circuito
https://user-images.githubusercontent.com/73251227/106649666-ab52b980-6570-11eb-98f2-cba4f8a6c201.PNG
