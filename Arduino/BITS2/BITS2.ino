#define enA 10//Enable1 L298 Pin enA 
#define in1 9 //Motor1  L298 Pin in1 
#define in2 8 //Motor1  L298 Pin in2 
#define in3 7 //Motor2  L298 Pin in3 
#define in4 6 //Motor2  L298 Pin in4 
#define enB 5 //Enable2 L298 Pin enB 
 
#define R_S A0 //ir sensor Right
#define L_S A2 //ir sensor Left
#define M_S A1 //ir sensor Middle

void setup(){ // put your setup code here, to run once

pinMode(R_S, INPUT); // declare if sensor as input  
pinMode(L_S, INPUT); // declare ir sensor as input
pinMode(M_S, INPUT); // declare ir sensor as input 

pinMode(enA, OUTPUT); // declare as output for L298 Pin enA
pinMode(in1, OUTPUT); // declare as output for L298 Pin in1 
pinMode(in2, OUTPUT); // declare as output for L298 Pin in2 
pinMode(in3, OUTPUT); // declare as output for L298 Pin in3   
pinMode(in4, OUTPUT); // declare as output for L298 Pin in4 
pinMode(enB, OUTPUT); // declare as output for L298 Pin enB 

analogWrite(enA, 80); // Write The Duty Cycle 0 to 255 Enable Pin A for Motor1 Speed 
analogWrite(enB, 80); // Write The Duty Cycle 0 to 255 Enable Pin B for Motor2 Speed 
delay(1000);
}
void loop()
{  
if((digitalRead(L_S) == 0) &&( digitalRead(M_S) == 0) &&(digitalRead(R_S) == 0)){UturnL();}   
//if Right Sensor and Left Sensor are at White color and middle sensor is at black color then it will call forword function

if((digitalRead(L_S) == 0) &&( digitalRead(M_S) == 0) &&(digitalRead(R_S) == 1)){turnRight();}
//if left Sensor is Black and right Sensor is White then it will call turn Right function  

if((digitalRead(L_S) == 0) &&( digitalRead(M_S) == 1) &&(digitalRead(R_S) == 0)){forword();}  
//if left Sensor is White and right Sensor is Black then it will call turn Left function

if((digitalRead(L_S) == 0) &&( digitalRead(M_S) == 1) &&(digitalRead(R_S) == 1)){turnRight();} 
// If all sensor are on black color ( juntion point) then it will turn left
  
if((digitalRead(L_S) == 1) &&( digitalRead(M_S) == 0) &&(digitalRead(R_S) == 0)){turnLeft();} 
// if all sensor are on white color then it will take left Uturn 

if((digitalRead(L_S) == 1) &&( digitalRead(M_S) == 0) &&(digitalRead(R_S) == 1)){forword();}

if((digitalRead(L_S) == 1) &&( digitalRead(M_S) == 1) &&(digitalRead(R_S) == 0)){turnLeft();}

if((digitalRead(L_S) == 1) &&( digitalRead(M_S) == 1) &&(digitalRead(R_S) == 1)){UturnR();}
}

void forword(){  //forword
digitalWrite(in1, LOW); //Left Motor forword Pin 
digitalWrite(in2, HIGH);  //Left Motor backword Pin 
digitalWrite(in3, LOW);  //Right Motor backword Pin 
digitalWrite(in4, HIGH); //Right Motor forword Pin 
}

void turnRight(){ //turnRight
digitalWrite(in1, LOW);  //Left Motor forword Pin   
digitalWrite(in2, HIGH);   //Left Motor backword Pin  
digitalWrite(in3, LOW);   //Right Motor backword Pin 
digitalWrite(in4, LOW);   //Right Motor forword Pin 
}

void turnLeft(){ //turnLeft
digitalWrite(in1, LOW);  //Left Motor forword Pin 
digitalWrite(in2, LOW);  //Left Motor backword Pin 
digitalWrite(in3, LOW); //Right Motor backword Pin 
digitalWrite(in4, HIGH);  //Right Motor forword Pin 
}

/*void Stop(){ //stop
digitalWrite(in1, LOW); //Left Motor forword Pin 
digitalWrite(in2, LOW); //Left Motor backword Pin 
digitalWrite(in3, LOW); //Right Motor backword Pin 
digitalWrite(in4, LOW); //Right Motor forword Pin 
}*/

void UturnR(){
digitalWrite(in1, HIGH);   //Left Motor forword Pin 
digitalWrite(in2, LOW); //Light Motor backword Pin 
digitalWrite(in3, LOW);  //Right Motor backword Pin 
digitalWrite(in4, HIGH);   //Right Motor forword Pin
}

void UturnL(){
digitalWrite(in1, LOW);   //Left Motor forword Pin 
digitalWrite(in2, HIGH); //Light Motor backword Pin 
digitalWrite(in3, HIGH);  //Right Motor backword Pin 
digitalWrite(in4, LOW);   //Right Motor forword Pin
}
