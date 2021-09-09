#include <Servo.h>  

Servo myservo;  
 
int potpin = 0; // place where potentiometer in arduino
int val;    // value to store potentiometer value and push it to servo
int button =2; //switch place in arduino
int led = 13;   // led  place in arduino
int status = false ;  // variable for knowing the status of led like (low, high)


 
void setup() {
  myservo.attach(9);  
  pinMode (led , OUTPUT);
  pinMode (button , INPUT_PULLUP);
  
}
 
void loop() {
  if (digitalRead(button)== true){
    status = !status; 
    digitalWrite(led,status);
  }
  while (digitalRead(button)== true);
  delay (50) ;
  val = analogRead(potpin);            
  val = map(val, 0, 1023, 0, 180);   // make it suit value of servo  
  myservo.write(val);                  
                          
}
