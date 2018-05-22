#include <Arduino.h>
#include <Servo.h>
/*
author - phantom-5
project - Servos
*/

int led = 13;
int trigPin =10;
int echoPin=12;
Servo rick_s;

void setup() {
    pinMode(led,OUTPUT);
    pinMode(trigPin,OUTPUT);
    pinMode(echoPin,INPUT);
    rick_s.attach(9);
    
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
        rick_s.write(0);
      digitalWrite(led,LOW);
    }else{
        digitalWrite(led,HIGH);
        rick_s.write (180);
    }
    
}