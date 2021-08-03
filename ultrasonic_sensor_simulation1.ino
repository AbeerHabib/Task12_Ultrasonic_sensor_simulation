#include <Servo.h>

int trigPin = 12;
int echoPin = 13;
int ledPin = 8;

Servo s1;
Servo s2;
Servo s3;
Servo s4;
Servo s5;
Servo s6;


void setup()
{

  pinMode(trigPin, OUTPUT);
  pinMode(ledPin,OUTPUT);
  pinMode(echoPin,INPUT);
  
  s1.attach(2);
  s2.attach(3);
  s3.attach(4);
  s4.attach(5);
  s5.attach(6);
  s6.attach(7);

  Serial.begin(9600);

}

void loop()
{
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(5);
  
  digitalWrite(trigPin, LOW);
  
  int duration = pulseIn(echoPin, HIGH);
  
  int distance = (duration*0.034)/2;
  
  
  if(distance <= 100){
    
    delay(3000);
    
    digitalWrite(ledPin, HIGH);

	s1.write(90);
    s2.write(90);
    s3.write(90);
    s4.write(90);
    s5.write(90);
    s6.write(90);
    
  }
  
  else{
   	  
    delay(3000);

 	s1.write(0);
    s2.write(0);
    s3.write(0);
    s4.write(0);
    s5.write(0);
    s6.write(0);
    
    digitalWrite(ledPin, LOW);

  }


  
}