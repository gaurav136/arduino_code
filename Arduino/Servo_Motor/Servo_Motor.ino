#include <Servo.h> 
 
Servo myservo;   

int degree90 = 8;
int degree45 = 9;
int degree0 = 10;
int degree_45 = 11;
int degree_90 = 12;

void setup() 
{ 
  myservo.attach(4);  
  pinMode(degree90, INPUT_PULLUP);
  pinMode(degree45, INPUT_PULLUP);
  pinMode(degree0, INPUT_PULLUP);
  pinMode(degree_45, INPUT_PULLUP);
  pinMode(degree_90, INPUT_PULLUP);
}
 
void loop() 
{ 
  if(digitalRead(degree90) == LOW)
  {
    myservo.write(180);
  }
  
  if(digitalRead(degree45) == LOW)
  {
    myservo.write(117);
  }
  
  if(digitalRead(degree0) == LOW)
  {
    myservo.write(93);
  }

  if(digitalRead(degree_45) == LOW)
  {
    myservo.write(68);
  }
  
  if(digitalRead(degree_90) == LOW)
  {
    myservo.write(3);
  }
}
