#include <Arduino.h>

const int led = 13;
const int bouton = 12 ;

void setup() {
  pinMode(bouton,INPUT);
  pinMode(led ,OUTPUT);
  Serial.begin(9600);
  int etat_bouton = 0;
}

void loop() {

  int etat_bouton = digitalRead(bouton);
  //Serial.println(etat_bouton);
  //delay(1000);
  // put your main code here, to run repeatedly:
if (etat_bouton == HIGH)
   {digitalWrite(led,HIGH);}
else
{digitalWrite(led,LOW);}
}
