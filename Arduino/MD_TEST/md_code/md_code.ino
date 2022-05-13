#define ENA 10
#define IN1 6
#define IN2 7 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
}

void loop() {
  // put your code here, to run repeatedly:
  analogWrite(ENA, 255);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
}
