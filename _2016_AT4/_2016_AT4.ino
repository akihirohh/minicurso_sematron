unsigned long start, cur;

void setup() {
  Serial.begin(9600);
  Serial.println("Timestamp -- leitura");
  while(Serial.read()!='s');
  start = millis();
}

void loop() {
  cur = millis();
  int leitura = random(0,1023);
  
  int key;
  if(Serial.available())key = Serial.read();
  
  switch(key){
   case 'm':
    Serial.print(cur-start);
    delay(1000);
    break;
   case ' ':
    Serial.println(leitura);
    delay(1000);
    break;      
  }
  Serial.println("\t\tStill running...");
}
