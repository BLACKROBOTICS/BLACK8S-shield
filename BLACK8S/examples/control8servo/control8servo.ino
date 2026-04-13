#include "BLACK8S.h"
BLACK8S S;

void setup() {
S.setROBOT(); //1번부터 8번 모터까지 어티치
S.torqueON();
}


void loop() {

for(int i=1; i<=8; i++){
S.movePOS(i, 0);
delay(1000);
  }

for(int i=1; i<=8; i++){
S.movePOS(i, 90);
delay(1000);
  }

for(int i=1; i<=8; i++){
S.movePOS(i, 180);
delay(1000);
  }

for(int i=1; i<=8; i++){
S.movePOS(i, 90);
delay(1000);
  }

}
