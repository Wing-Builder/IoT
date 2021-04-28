#include "arduino.h"
#include "engine.h"

engine::engine(int pena, int pin1, int pin2, int pin3, int pin4, int penb)
{
    ena = pena;
    in1 = pin1;
    in2 = pin2;
    in3 = pin3;
    in4 = pin4;
    enb = penb;
    speed = 255;
}

engine::~engine()
{
    pinMode(ena, OUTPUT); // pin de sortie.
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(enb, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);
}

void engine::forward() // faire avancer le véhicule.
{
    ml(true);
    mr(true);
    delay(50);
}

void engine::back() // faire reculer le véhicule.
{
    ml(false);
    mr(false);
    delay(50);
}

void engine::ml(bool dir) //roues gauches
{
    analogWrite(ena, speed);
    if (dir)
    {
        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
    }
    else
    {
        digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
    }
}
void engine::mr(bool dir) //roues droites
{
    analogWrite(enb, speed);
    if (dir)
    {
        digitalWrite(in3, HIGH);
        digitalWrite(in4, LOW);
    }
    else
    {
        digitalWrite(in3, LOW);
        digitalWrite(in4, HIGH);
    }
}

void engine::stop(){ // Arrêter la voiture
  digitalWrite(ena, LOW);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(enb, LOW);
  delay(5);
}

void engine::left() // tourner à gauche
{
    ml(false);
    mr(true);
    delay(50);
}

void engine::right() // tourner à droite
{
    ml(true);
    mr(false);
    delay(50);
}


