#include <Arduino.h>

int rxA = A1;
int rxB = A2;
int flapOutput1 = 3;
int flapInput1 = A4;
int flapOutput2 = 5;
int flapInput2 = A6;
int ledBuiltIn = 13;
int pressA;                             //Button A for manipulated mode
int pressB;                             //Button B for Original mode
bool open = false;
int remoteTreshold = 200;

/*    Configurations   Begin    */

int flapInputTreshold = 100;            //measure via putty, should be in the middle of the open / close values

//only set one to true, rest has to be false
bool PWM = true;                        //set output mode for PWM Output         Full electric flaps
bool Pneumatic = false;                 //set output mode for Relay output       Pneumatic flaps
// LIN Bus is not Possible, like the flaps from new Mercedes G Wagon, even if they look exactly like the PWM ones

//Decide if the Remote should open or close the Flaps
bool remoteOpen = true;                 //true = Open the Flap when activate; false = Close the Flap when active

//1 or 2 Flaps options, for 2 different flap behaviors you have to enable both channels and set mono to false
bool twoFlapMode = true;                //use two flaps
bool channel1In = true;                 //use flapInput1 Input
bool channel2In = false;                //use flapInput2 Input
bool mono = true;                       //both flaps behave the same, only possible if channel1In or channel2In is false

/*    Configurations   End    */

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
void openFlap1(){
  if(PWM == true)
  {
    digitalWrite(flapOutput1, HIGH);
    delay(1);
    digitalWrite(flapOutput1, LOW);
    delay(9);
  }
  else if(Pneumatic == true)
  {
    digitalWrite(flapOutput1, HIGH);
  }
}
void closeFlap1(){
  if(PWM == true)
  {
    digitalWrite(flapOutput1, LOW);
    delay(1);
    digitalWrite(flapOutput1, HIGH);
    delay(9);
  }
  else if(Pneumatic == true)
  {
    digitalWrite(flapOutput1, LOW);
  }
}
void openFlap2(){
  if(PWM == true)
  {
    digitalWrite(flapOutput2, HIGH);
    delay(1);
    digitalWrite(flapOutput2, LOW);
    delay(9);
  }
  else if(Pneumatic == true)
  {
    digitalWrite(flapOutput2, HIGH);
  }
}
void closeFlap2(){
  if(PWM == true)
  {
    digitalWrite(flapOutput2, LOW);
    delay(1);
    digitalWrite(flapOutput2, HIGH);
    delay(9);
  }
  else if(Pneumatic == true)
  {
    digitalWrite(flapOutput2, LOW);
  }
}
void checkRemote(){
  pressA = analogRead(rxA);
  if (pressA > remoteTreshold) { open = true; }else{}
  pressB = analogRead(rxB); 
  if (pressB > remoteTreshold) { open = false; }else{}
}
void execute(){
  if(open == false){
    digitalWrite(ledBuiltIn, LOW);
    int a = analogRead(flapInput1);
    if(a >= flapInputTreshold && channel1In == true)
    {
      openFlap1();
      if(mono == true)
      {openFlap2();}
    }
    else{
      closeFlap1();
      if(mono == true)
      {closeFlap2();}
    }
    int b = analogRead(flapInput2);
    if(b >= flapInputTreshold && channel2In == true)
    {
      openFlap2();
      if(mono == true)
      {openFlap1();}
    }
    else{
      closeFlap2();
      if(mono == true)
      {closeFlap1();}
    }
    Serial.println("a: " + String(a) + ", b: " + String(b));
  }
  else{
    digitalWrite(ledBuiltIn, HIGH);
    if(remoteOpen == true)
    {
      openFlap1();
      if(twoFlapMode == true)
      {
        openFlap2();
      }
    }
    else
    {
      closeFlap1();
      if(twoFlapMode == true)
      {
        closeFlap2();
      }
    }
  }
}
void loop() {
  checkRemote();
  execute();
}
