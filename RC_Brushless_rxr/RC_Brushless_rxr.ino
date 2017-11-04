//Receiver
//Visit www.rootsaid.com for full tutorial

#include <SoftwareSerial.h>
#include<Servo.h>          

Servo esc; 

String input;
int throttle, th;

void setup()
{
esc.attach(10);
Serial.begin(9600);
hc12.begin(9600);
esc.write(170);
delay(2000);
esc.write(90);
delay(2000);
esc.write(140);
delay(2000);
esc.write(90);
delay(2000);
}

void loop()
{

if(Serial.available())
  {
  throttle = Serial.readStringUntil('\n');
  if (input.length() > 0)
      {
       esc.write(throttle);
       delay(10);      
  }

  }

}
