#include <Servo.h>
Servo serv_1;
const int sensor1=A0;
Servo serv_2;
const int sensor2=A1;
Servo serv_3;
const int sensor3=A2;
Servo serv_4;
const int sensor4=A3;
Servo serv_5;
const int sensor5=A4;
const int servopin1=10;
const int servopin2=9;
const int servopin3=8;
const int servopin4=7;
const int servopin5=6;
void setup()
{
  Serial.begin(9600);
  pinMode(sensor1,INPUT);
  pinMode(servopin1,OUTPUT);
   pinMode(sensor2,INPUT);
  pinMode(servopin2,OUTPUT);
   pinMode(sensor3,INPUT);
  pinMode(servopin3,OUTPUT);
   pinMode(sensor4,INPUT);
  pinMode(servopin4,OUTPUT);
   pinMode(sensor5,INPUT);
  pinMode(servopin5,OUTPUT);
  serv_1.attach(servopin1);
   serv_2.attach(servopin2);
   serv_3.attach(servopin3);
   serv_4.attach(servopin4);
   serv_5.attach(servopin5);
  
}

void loop()
{
 int flex1=analogRead(sensor1);
  int val = map(flex1,990,1017,0,180);
  serv_1.write(val);
  delay(100);
  
  int flex2=analogRead(sensor2);
  int val2 = map(flex2,990,1017,0,180);
  serv_2.write(val2);
  delay(100);
   
  int flex3=analogRead(sensor3);
  int val3 = map(flex3,990,1017,0,180);
  serv_3.write(val3);
  delay(100);
  
  int flex4=analogRead(sensor4);
  int val4 = map(flex4,990,1017,0,180);
  serv_4.write(val4);
  delay(100);
  
  int flex5=analogRead(sensor5);
  int val5= map(flex5,990,1017,0,180);
  serv_5.write(val5);
  delay(100);
}