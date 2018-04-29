/*
author - phantom-5
project - distance_sensing
*/

int led = 13;
int trigPin =10;
int echoPin=12;

void setup() {
    pinMode(led,OUTPUT);
    pinMode(trigPin,OUTPUT);
    pinMode(echoPin,INPUT);
    
}

void loop() {
    float duration,distance;
    digitalWrite(trigPin,LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin,LOW);
    duration=pulseIn(echoPin,HIGH);
    distance=(duration/2)*0.03444;
    if(distance>=40){
      digitalWrite(led,HIGH);
    }else{
      digitalWrite(led,LOW);
    }
}
