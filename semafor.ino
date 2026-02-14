int zelenaLED = 11;
int zlutaLED = 10;
int cervenaLED = 9;

void setup() {
  pinMode(zelenaLED, OUTPUT); 
  pinMode(zlutaLED, OUTPUT); 
  pinMode(cervenaLED, OUTPUT); 
}

void loop() {
  digitalWrite(zelenaLED, HIGH);
  delay(1000);
  digitalWrite(zelenaLED, LOW);
  
  digitalWrite(zlutaLED, HIGH);
  delay(1000);
  digitalWrite(zlutaLED, LOW);
  
  digitalWrite(cervenaLED, HIGH);
  delay(1000);
  digitalWrite(cervenaLED, LOW);
}
