#define IN1 9
#define IN2 6
#define IN3 5
#define IN4 3


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  
  analogWrite (IN1, 200);
  analogWrite (IN2, 0);
  analogWrite (IN3, 0);
  analogWrite (IN4, 200);
}
