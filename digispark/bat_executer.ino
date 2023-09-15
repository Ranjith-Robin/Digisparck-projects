#include "DigiKeyboard.h"

void setup() {
  // Start DigiKeyboard once it connects to the computer
  DigiKeyboard.delay(2000);
}

void loop() {
  // Wait a bit before executing the BAT file
  DigiKeyboard.delay(2000);

  // Type "cmd" to open the command prompt
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  // Type the path to the BAT file (replace "C:\\path\\to\\your\\file.bat" with the actual file path)
  DigiKeyboard.print("C:\\Users\\Administrator\\Music\\batscript\\test.bat");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  // Wait for the BAT file to execute (you might need to adjust this delay based on the BAT file's execution time)
  DigiKeyboard.delay(10000);
  
  // if you wanna Close the command prompt window, uncommand the below line
  //DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  while (1) {}
}
