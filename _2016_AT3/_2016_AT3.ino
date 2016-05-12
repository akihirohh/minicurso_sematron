unsigned long start, cur;

void setup() {
  Serial.begin(9600);
  Serial.println("Timestamp -- leitura");
  start = millis();
}

void loop() {
  cur = millis();
  int leitura = random(0,1023);
  Serial.print(cur-start);
  Serial.print("\t\t");
  Serial.println(leitura);
  delay(1000);
  //while(millis()-cur<1000); 
}
