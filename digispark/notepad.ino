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
  // Change the directory to Downloads folder
  DigiKeyboard.print("cd %userprofile%\\Downloads");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  // Create a new folder in Documents (if it doesn't exist)
  DigiKeyboard.print("mkdir %userprofile%\\Documents\\MyCopiedFolder");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  // Copy the contents of specific folder to the new folder in Documents
  DigiKeyboard.print("xcopy /E /Y testingdigi %userprofile%\\Documents\\MyCopiedFolder");
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
