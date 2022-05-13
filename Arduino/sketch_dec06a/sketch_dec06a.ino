
int ENB_PIN = 5;
int MD_PIN1 = 7;
int MD_PIN2 = 6;
//int IR_PIN = 10;


void setup() {

  // put your setup code here, to run once:
//pinMode(IR_PIN, INPUT);
pinMode(ENB_PIN, OUTPUT);
pinMode(MD_PIN1, OUTPUT);
pinMode(MD_PIN2, OUTPUT);

   
}

void loop() {
   analogWrite(ENB_PIN,250);
   digitalWrite(MD_PIN1,HIGH);
   //digitalWrite(MD_PIN2,LOW);
}
