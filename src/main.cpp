
#include <Arduino.h>
int state[8] ;
const byte pins[] = {2,3,4,5,6,7,8,9};

char keys[4][4] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
void setup() {
  Serial.begin(9600);

  for (byte i=0; i<8; i++) {
    pinMode(pins[i], INPUT); 
  }
}

void loop() {
  
  for (byte i=0; i<8; i++) {
    state[i] = digitalRead(pins[i]);
  }

  // for ( byte i=0; i<8; i++) {

  //   // Serial.print(state[i]);
  //   // Serial.print(" ");
  // }

  if(!digitalRead(2)){
  if (digitalRead(6) == LOW) { Serial.println(keys[0][0]); delay(300); }
  if (digitalRead(7) == LOW) { Serial.println(keys[0][1]); delay(300); }
  if (digitalRead(8) == LOW) { Serial.println(keys[0][2]); delay(300); }
  if (digitalRead(9) == LOW) { Serial.println(keys[0][3]); delay(300); }
  }else if(!digitalRead(3)){
  if (digitalRead(6) == LOW) { Serial.println(keys[1][0]); delay(300); }
  if (digitalRead(7) == LOW) { Serial.println(keys[1][1]); delay(300); }
  if (digitalRead(8) == LOW) { Serial.println(keys[1][2]); delay(300); }
  if (digitalRead(9) == LOW) { Serial.println(keys[1][3]); delay(300); }
  }else if(!digitalRead(4)){
  if (digitalRead(6) == LOW) { Serial.println(keys[2][0]); delay(300); }
  if (digitalRead(7) == LOW) { Serial.println(keys[2][1]); delay(300); }
  if (digitalRead(8) == LOW) { Serial.println(keys[2][2]); delay(300); }
  if (digitalRead(9) == LOW) { Serial.println(keys[2][3]);  }

  }else if(!digitalRead(5)){
  if (digitalRead(6) == LOW) { Serial.println(keys[3][0]); delay(300); }
  if (digitalRead(7) == LOW) { Serial.println(keys[3][1]); delay(300); }
  if (digitalRead(8) == LOW) { Serial.println(keys[3][2]); delay(300); }
  if (digitalRead(9) == LOW) { Serial.println(keys[3][3]); delay(300); }
  }
}


