// C++ code
//
#include <Servo.h>


int trigPin = 12;
int echoPin = 13;
int ledPin = 3;

Servo s1;
Servo s2;
Servo s3;
Servo s4;
Servo s5;
Servo s6;

void setup()
{
  
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  s1.attach(3);
  s2.attach(6);
  s3.attach(7);
  s4.attach(9);
  s5.attach(10);
  s6.attach(11);

}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigPin, LOW);

  int duration = pulseIn(echoPin, HIGH);
  
 // convert the time into a distance
  int distance = microsecondsToCentimeters(duration);
 // you can extract the distance from the time by this formula:
 // int distance = (duration*0.034)/2;
  
  if(distance <= 200){
    s1.write(90);
    s2.write(90);
    s3.write(90);
    s4.write(0);
    s5.write(0);
    s6.write(0);
    
    digitalWrite(ledPin, HIGH);


  } 
  
  else{
    s1.write(0);
    s2.write(0);
    s3.write(0);
    s4.write(0);
    s5.write(0);
    s6.write(0);
    digitalWrite(ledPin, LOW);

}
  
    delay(1000);  

}


// you dont need this part if you use the distance formula
long microsecondsToCentimeters(long microseconds) {
  return microseconds / 29 / 2;
}