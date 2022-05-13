uint8_t  MAC[] = {0xC8, 0x2B, 0x96, 0x08, 0xF0, 0xAB};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0 ; i < 6 ; i++){
    Serial.print(MAC[i]);
    Serial.print(" ");
  }
  Serial.println();
  delay(1000);
}
