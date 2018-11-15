/*
//CLEAR Programming
void setup(){
  
}

void loop(){
  
}
*/


// SIMPLE BLINK

int led = 13; //LED Number
int dur = 500; //Blink Delay

void setup (){
  pinMode(led, OUTPUT);
}

void loop(){
  digitalWrite(led, HIGH);
  delay(dur);
  digitalWrite(led, LOW);
  delay(dur);
}
