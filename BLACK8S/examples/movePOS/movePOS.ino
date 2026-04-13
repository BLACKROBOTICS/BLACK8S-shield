#include "BLACK8S.h"
BLACK8S S;

void setup() {
S.setROBOT(); //1번부터 8번 모터까지 어티치
S.torqueON();
}


void loop() {

S.movePOS(1, 0); //속도 조절 없을 경우 최고속도로 동작
delay(1500);
S.movePOS(1, 180, 1);
delay(500);


}
