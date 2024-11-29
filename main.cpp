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
  Serial.begin(9600);
  pinMode(rxA, INPUT);
  pinMode(rxB, INPUT);
  pinMode(flapOutput1, OUTPUT);
  pinMode(flapInput1, INPUT);
  pinMode(flapOutput2, OUTPUT);
  pinMode(flapInput2, INPUT);
  pinMode(ledBuiltIn, OUTPUT);
}
void openFlap(){
    digitalWrite(flapOutput1, HIGH);
    delay(1);
    digitalWrite(flapOutput1, LOW);
    delay(9);
}
void closeFlap(){
    digitalWrite(flapOutput1, LOW);
    delay(1);
    digitalWrite(flapOutput1, HIGH);
    delay(9);
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
    if(a >= 100)
    {
      closeFlap();
    }
    else{
      openFlap();
    }
    int b = analogRead(flapInput2);
    if(b >= 100)
    {
      closeFlap();
    }
    else{
      openFlap();
    }
    Serial.println("a: " + String(a) + ", b: " + String(b));
  }
  else{
    digitalWrite(ledBuiltIn, HIGH);
    openFlap();
    }
}
void loop() {
  checkRemote();
  execute();
}
