//Transmitter
//visit www.rootsaid.com for full tutorial

#include <SoftwareSerial.h>
#include<Servo.h>         

Servo esc; 
SoftwareSerial hc12(2, 3); //RX, TX

int thr, ail, ele, rud;

void setup()
{
esc.attach(10);
pinMode (A0, INPUT);
Serial.begin(9600);
hc12.begin(9600);
}

void loop()
{
  thr=map(analogRead(A0), 0, 1023, 0, 180);
  hc12.print(thr);
  Serial.print(thr);
delay(100);  
}



