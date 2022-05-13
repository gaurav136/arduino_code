
#define ENB_PIN 10 
#define MD_PIN4 9
#define MD_PIN3 8

void setup() {
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(ENB_PIN, 255);
  digitalWrite(MD_PIN4, HIGH);
  digitalWrite(MD_PIN3,LOW);
}
