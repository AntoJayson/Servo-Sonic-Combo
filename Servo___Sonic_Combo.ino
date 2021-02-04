
int dist;
int trig=A0;
int echo=A1;
int servo=5;
int timetaken;

#include <Servo.h>

void setup() 
{
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(servo,OUTPUT);
}
void loop() 
{
  //Calculating Distance
  //Step 1: Create Pulse to calculate the distance using the concept of sonar.
  //*************************************************************************************
  digitalWrite(trig,LOW);
  delay(2);
  digitalWrite(trig,HIGH); 
  delay(10);
  digitalWrite(trig,LOW);
  digitalRead(echo);
  //**************************************************************************************
  //Step2 Calculating the Distance
  
  timetaken= pulseIn(echo,HIGH);
  dist=(timetaken*0.343)/2;
  Serial.println(dist);
  //***************************************************************************************
  //Step3: Checking condition to activate Servo
  if(dist<7)
  {
    
  }
}
