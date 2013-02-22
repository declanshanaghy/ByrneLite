int R1 = 4;
int R2 = 3;
int R3 = 2;

int INT_CYCLE = 1000;
int INT_FLASH_ON = 250;
int INT_FLASH_OFF = 100;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(R1, OUTPUT);     
  pinMode(R2, OUTPUT);     
  pinMode(R3, OUTPUT);     
  
  digitalWrite(R1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(R2, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(R3, LOW);    // turn the LED off by making the voltage LOW  
}

// the loop routine runs over and over again forever:
void loop() {
  cycle(R1);
  cycle(R2);
  cycle(R3);
  
  flashOn();
  flashOff();
}

void cycle(int r) {
  on(r);
  delay(INT_CYCLE);
  off(r);
  delay(INT_CYCLE);
}

void flashOn() {
  on(R1);
  on(R2);
  on(R3);
  delay(INT_FLASH_ON);
}

void flashOff() {
  off(R1);
  off(R2);
  off(R3);
  delay(INT_FLASH_OFF);
}

void on(int r) {
  digitalWrite(r, HIGH);
}

void off(int r) {
  digitalWrite(r, LOW);
}
