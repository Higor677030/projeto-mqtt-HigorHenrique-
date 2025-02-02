#include <PubSubClient.h>

#include <UIPEthernet.h>

#include <SPI.h>

// variável pro servidor 
boolean mensagem;
//define o endereço MAC que será utilizado
byte mac[] = {0x48,0xF9,0x61,0xC8,0xE5,0x81};
int pino2 = 2;
bool estado_sensor;
//inicia o cliente Ethernet
EthernetClient client;
// p/ protocolo MQTT
PubSubClient mqttClient(client);

void setup() {
  // controlador Ethernet
  Ethernet.begin(mac);

  //monitor serial
  Serial.begin(9600);
  pinMode(pino2,INPUT_PULLUP);

  mqttClient.setServer("54.144.190.205",1883);
  
  Serial.print("o IP do arduino e: ");
  Serial.println(Ethernet.localIP());

  Serial.print("A mascara de Rede do Arduino e: ");
  Serial.println(Ethernet.subnetMask());

  Serial.print("O Gateway do Arduino e: ");
  Serial.println(Ethernet.gatewayIP());

  
   
}

void loop() {
  
  //define um usuário
  mqttClient.connect("HigorHenrique");
  estado_sensor = digitalRead(pino2);

  

  if(estado_sensor == 0)
  {
   Serial.println("o rack esta fechado");
    mensagem = mqttClient.publish("HigorHenrique","FECHADO!");
    Serial.println(mensagem);
      mqttClient.loop();
      


  }
  else{
    Serial.println("o rack esta aberto ");
   mensagem = mqttClient.publish("HigorHenrique","ABERTO!");
   Serial.println(mensagem);
      mqttClient.loop();
      
   
        


  }

    mqttClient.loop();
    

}
