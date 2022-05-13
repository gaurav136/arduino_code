#define EnA 10
#define In1 9
#define In2 8
#define In3 7
#define In4 6
#define EnB 5

#define F A1
#define B A2
#define R A3
#define L A4

void setup() {
  // put your setup code here, to run once:
  pinMode(F, INPUT);
  pinMode(B, INPUT);
  pinMode(R, INPUT);
  pinMode(L, INPUT);

  pinMode(EnA,OUTPUT);
  pinMode(In1,OUTPUT);
  pinMode(In2,OUTPUT);
  pinMode(In3,OUTPUT);
  pinMode(In4,OUTPUT);
  pinMode(EnB,OUTPUT);

  analogWrite(EnA, 255);
  analogWrite(EnB, 255);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(F)==1){
    Forward();
  }
  else if (digitalRead(B)==1){
    Backward();
  }
  else if (digitalRead(R)==1){
    TurnRight();
  }
  else if (digitalRead(L)==1){
    TurnLeft();
    }
  else {
    Stop();
  }
}

void Forward(){
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  }

void Backward(){
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
  digitalWrite(In3, LOW);
  digitalWrite(In4, HIGH);
}  
void TurnRight(){
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
}

void TurnLeft(){
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
}
void Stop(){
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
 }


  
