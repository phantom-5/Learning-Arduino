#include<arduino.h>

int led1=13;
int trigPin=12;
int echoPin=11;
void setup(){
    Serial.begin(9600);
    pinMode(led1,OUTPUT);
    pinMode(trigPin,OUTPUT);
    pinMode(echoPin,INPUT);
}
void loop(){
    float duration,distance;
    digitalWrite(trigPin,LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin,LOW);
    duration=pulseIn(echoPin,HIGH);
    distance=(duration/2)*0.03444;
    if(distance>=40){
      digitalWrite(led1,LOW);
    }
    else{
       digitalWrite(led1,HIGH);
       Serial.println(distance);
    }
}