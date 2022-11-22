#include <Keyboard.h>
#include <Keypad.h>

const byte ROWS = 3;  //橫的
const byte COLS = 4;  //直的

char keys [ROWS][COLS] = {
  {'1','2','3','4'},
  {'5','6','7','8'},
  {'9','0','A','B'}
} ;
                                 //按鍵對應
/*String keys [ROWS][COLS] = { 
{"KEY_F13","KEY_F14","KEY_F15","KEY_F16"},
{"KEY_F17","KEY_F18","KEY_F19","KEY_F20"},
{"KEY_F21","KEY_F22","KEY_F23","KEY_F24"}
} ; */   

byte rowPins[ROWS] = {3,4,5};   //定義橫的腳位
byte colPins[COLS] = {6,7,8,9}; //定義直的腳位

Keypad myKeypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {  
  Serial.begin(9600);
}


void loop() {
  
  char key = myKeypad.getKey(); //讀取按鍵的字元
  
  if (key){  // 若有按鍵被按下
    Serial.println(key);  // 顯示按鍵的字元
    switch (key) {
      case '1': //按下Key1
      Keyboard.press(KEY_F13)  ;
      break;
      case '2': //按下Key2
      Keyboard.press(KEY_F14)  ;
      break;
      case '3': //按下Key3
      Keyboard.press(KEY_F15)  ;
      break;
      case '4': //按下Key4
      Keyboard.press(KEY_F16)  ;
      break;
      case '5': //按下Key5
      Keyboard.press(KEY_F17)  ;
      break;
      case '6': //按下Key6
      Keyboard.press(KEY_F18)  ;
      break;
      case '7': //按下Key7
      Keyboard.press(KEY_F19)  ;
      break;
      case '8': //按下Key8
      Keyboard.press(KEY_F20)  ;
      break;
      case '9': //按下Key9
      Keyboard.press(KEY_F21)  ;
      break;
      case '0': //按下Key10
      Keyboard.press(KEY_F22)  ;
      break;
      case 'A': //按下Key11
      Keyboard.press(KEY_F23)  ;
      break;
      case 'B': //按下Key12
      Keyboard.press(KEY_F24)  ;
      break;
    }
    delay(150); Keyboard.releaseAll(); // 按鍵歸位
    }
  }
