#include <Arduino.h>
int rxA = A1;
int rxB = A2;
int pressA;
int pressB;
int flapOutput1 = 3;
int flapInput1 = 4;
int flapOutput2 = 5;
int flapInput2 = 6;
bool open = false;

void setup() {
  pinMode(rxA, INPUT);
  pinMode(rxB, INPUT);
  pinMode(flapOutput1, OUTPUT);
  pinMode(flapInput1, INPUT);
  pinMode(flapOutput2, OUTPUT);
  pinMode(flapInput2, INPUT);
}

void loop() {
  checkRemote();
}
void checkRemote(){
  pressA = analogRead(a);
  if (pressA > 200) {
    open = true;
  }
  else{}
  
  pressB = analogRead(b); 
  if (pressB > 200) {
    open = false;
  }
  else{}
}
