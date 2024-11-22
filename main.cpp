#include <Arduino.h>
int rxA = A1;
int rxB = A2;
int flapOutput1 = 3;
int flapInput1 = 4;
int flapOutput2 = 5;
int flapInput2 = 6;

int pressA;
int pressB;

bool open = false;
bool opened = false;

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
  execute();
}
void checkRemote(){
  pressA = analogRead(a);
  if (pressA > 200) { open = true; opened = false; }else{}
  pressB = analogRead(b); 
  if (pressB > 200) { open = false; opened = false; }else{}
}
void execute(){
  if(open = false){
    int a = digitalRead(flapInput1);
    digitalWrite(flapOutput1, a);
    int b = digitalRead(flapInput2);
    digitalWrite(flapOutput2, b);
  }
  else{
    if(opened = false){ open();}else{}}
}
void open(){
//das was zum fick man zum öffnen machen muss machen x2 für 2 klappen
  opened = true;
}
