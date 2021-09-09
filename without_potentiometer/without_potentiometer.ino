#include <Servo.h>  // add servo library
 
Servo myservo;  // create servo object to control a servo
 
int potpin = 0;  
int val;  
int button =2;
int led = 13;
int pos = 0; 

 
void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  pinMode (led , OUTPUT);
  pinMode (button , INPUT_PULLUP);
  
}
 
void loop() {
  digitalWrite(led,LOW);
  if (digitalRead(button)== true){  // check switch firstly 
    digitalWrite(led,HIGH); 
  for (pos = 0; pos <= 180; pos += 1) // make it move without potentiometer
    // in steps of 1 degree
    myservo.write(pos);              
    delay(15);                      
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(15); 
  }
  }
  }
