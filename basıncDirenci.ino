const int arduLed1 = 4; //Ardustar Led 1
const int arduLed2 = 5; //Ardustar Led 2
const int arduLed3 = 6; //Ardustar Led 3
const int arduLed4 = 7; //Ardustar Led 4
/*
FSR - Force Sensing Resistor
Kuvvete duyarlı direnç örneği
*/

int basinc;

void setup() {
  Serial.begin(9600);
  
  // Ledlerin bir çıkış olarak tanımlanması
  pinMode(arduLed1, OUTPUT);
  pinMode(arduLed2, OUTPUT);
  pinMode(arduLed3, OUTPUT);
  pinMode(arduLed4, OUTPUT);
}

void loop() {
  basinc = analogRead(0);
  Serial.println(basinc);
  
  
  if(basinc > 100){
    digitalWrite(arduLed1, HIGH);
  }
  else{
    digitalWrite(arduLed1, LOW);
  }
  
 if(basinc > 200){
    digitalWrite(arduLed1, HIGH);
    digitalWrite(arduLed2, HIGH);
  }
  else{
    digitalWrite(arduLed1, LOW);
    digitalWrite(arduLed2, LOW);}

  if(basinc > 300){
    digitalWrite(arduLed1, HIGH);
    digitalWrite(arduLed2, HIGH);
    digitalWrite(arduLed3, HIGH);
  }
  else{
    digitalWrite(arduLed1, LOW);
    digitalWrite(arduLed2, LOW);
    digitalWrite(arduLed3, LOW);
  }
  
  
  if(basinc > 400){
    digitalWrite(arduLed1, HIGH);
    digitalWrite(arduLed2, HIGH);
    digitalWrite(arduLed3, HIGH);
    digitalWrite(arduLed4, HIGH);
  }
  else{
    digitalWrite(arduLed1, LOW);
    digitalWrite(arduLed2, LOW);
    digitalWrite(arduLed3, LOW);
    digitalWrite(arduLed4, LOW);
  }
}
