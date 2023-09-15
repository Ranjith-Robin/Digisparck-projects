#include "DigiKeyboard.h"

void setup() {
  // Wait for the computer to initialize the keyboard
  DigiKeyboard.delay(2000);
}

void typeMessage() {
  DigiKeyboard.print("hey there! you'r hacked");
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // Press Enter to move to the next line
  DigiKeyboard.delay(100); // Wait for a short time before typing again
}

void loop() {
  // Open Notepad using the Windows Run dialog (Win + R)
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  
  // Type "notepad" and hit Enter
  DigiKeyboard.print("notepad");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  // Wait for Notepad to open (adjust the delay based on your system's performance)
  DigiKeyboard.delay(2000);
  
  typeMessage()
  
  // Exit loop (you can add more actions here if needed)
  while (1) {}
}
