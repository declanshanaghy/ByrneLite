/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int R1 = 4;
int R2 = 3;
int R3 = 2;

int D = 500;

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
//  digitalWrite(R1, HIGH);    // turn the LED off by making the voltage LOW
//  delay(D);               // wait for a second
//  digitalWrite(R1, LOW);   // turn the LED on (HIGH is the voltage level)
//  delay(D);               // wait for a second
//  
//  digitalWrite(R2, HIGH);    // turn the LED off by making the voltage LOW
//  delay(D);               // wait for a second
//  digitalWrite(R2, LOW);   // turn the LED on (HIGH is the voltage level)
//  delay(D);               // wait for a second
//
  digitalWrite(R3, HIGH);    // turn the LED off by making the voltage LOW
  delay(D);               // wait for a second
  digitalWrite(R3, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(D);               // wait for a second
}
