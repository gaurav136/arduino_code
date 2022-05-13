#define ENA 10
#define IN1 9
#define IN2 8
#define ENB 5 
#define IN3 7
#define IN4 6


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite (ENA, 50);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite (ENB, 50); 
}
