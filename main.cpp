#include <Arduino.h>

int rxA = A1;
int rxB = A2;
int flapOutput1 = 3;
int flapInput1 = A4;
int flapOutput2 = 5;
int flapInput2 = A6;
int ledBuiltIn = 13;

int pressA;
int pressB;

bool open = false;

void setup() {
  pinMode(rxA, INPUT);
  pinMode(rxB, INPUT);
  pinMode(flapOutput1, OUTPUT);
  pinMode(flapInput1, INPUT);
  pinMode(flapOutput2, OUTPUT);
  pinMode(flapInput2, INPUT);
  pinMode(ledBuiltIn, OUTPUT);
}
void checkRemote(){
  pressA = analogRead(rxA);
  if (pressA > 200) { open = true; }else{}
  pressB = analogRead(rxB); 
  if (pressB > 200) { open = false; }else{}
}
void execute(){
  if(open == false){
    digitalWrite(ledBuiltIn, LOW);
    int a = analogRead(flapInput1);
    if(a >= 125)
    {
      digitalWrite(flapOutput1, 230);
    }
    else{
      digitalWrite(flapOutput1, 26);
    }
    int b = analogRead(flapInput2);
    if(b >= 125)
    {
      digitalWrite(flapOutput2, 230);
    }
    else{
      digitalWrite(flapOutput2, 26);
    }
  }
  else{
    digitalWrite(ledBuiltIn, HIGH);
    analogWrite(flapOutput1, 26);
    analogWrite(flapOutput2, 26);
    }
}
void loop() {
  checkRemote();
  execute();
}
