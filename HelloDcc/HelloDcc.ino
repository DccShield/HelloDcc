//
// Serial.Printの例
//

#include <arduino.h>

void setup() {
  int version = 1234;
  
  Serial.begin(115200);         // 115200bpsでシリアルポートを開く
  Serial.println("HelloDcc!");  // HelloDcc! を表示して改行

  Serial.print(__DATE__);       // コンパイル時の日付と時間を表示
  Serial.print(" ");
  Serial.println(__TIME__);

  Serial.println( version );    // version変数を10進数で表示

  Serial.println( version,HEX );// version変数を16進数で表示
}

void loop() {

}
