const int trigpin1=6;
const int echopin1=5;
//const int trigpin2=A2;
//const int echopin2=A3;
//const int trigpin3=A4;
//const int echopin3=A5;
//const int LMA=3;
//const int LMB=5;
//const int RMA=6;
//const int RMB=9;
float previous_time;
float current_time;
int distance_front, distance_left, distance_right;
int time_taken1, time_taken2,time_taken3;
void setup() 
{
  pinMode(echopin1,INPUT);
  pinMode(trigpin1,OUTPUT);
  //pinMode(echopin2,INPUT);
  //pinMode(trigpin2,OUTPUT);
  //pinMode(echopin3,INPUT);
  //pinMode(trigpin3,OUTPUT);

  Serial.begin(9600); 
}
void loop() 
{
  /*digitalWrite(trigpin2,LOW);
  delay(2);
  digitalWrite(trigpin2,HIGH);
  delay(10);
  digitalWrite(trigpin2,LOW);
  time_taken2 = pulseIn(echopin2,HIGH);
  distance_left=(time_taken2*0.343)/2;
  Serial.print(distance_left);
  Serial.print(" ");*/
  
  digitalWrite(trigpin1,LOW);
  delay(2);
  digitalWrite(trigpin1,HIGH);
  delay(10);
  digitalWrite(trigpin1,LOW);
  time_taken1 = pulseIn(echopin1,HIGH);
  Serial.print("  ");
  distance_front=(time_taken1*0.343)/2;
  Serial.print(distance_front);
  Serial.print(" ");
 
 /* digitalWrite(trigpin3,LOW);
  delay(2);
  digitalWrite(trigpin3,HIGH);
  delay(10);
  digitalWrite(trigpin3,LOW);
  time_taken3 = pulseIn(echopin3,HIGH);
  distance_right=(time_taken3*0.343)/2;
  Serial.print("  ");
  Serial.print(distance_right);

  Serial.println();
  
  /*if(distance>2000)
  {
    Serial.println("Out Of Range");
  }
  if((distance>1000)&&(distance<2000))
  {
    digitalWrite(LMA,150);
    digitalWrite(LMB,0);
    digitalWrite(RMA,255);
    digitalWrite(LMA,0);
    Serial.println("Nearby & Turning");
  }
  if(distance<100)
  {
    Serial.println("Too Close");
  }*/
 /* current_time=millis();
  previous_time=current_time;
  Serial.println(previous_time);*/
  //delay(500);
  //Serial.print("Distance : ");
  //Serial.println(distance);
}
