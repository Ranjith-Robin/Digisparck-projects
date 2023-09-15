#include "DigiKeyboard.h"

void setup() {
  // Wait for the computer to initialize the keyboard
  DigiKeyboard.delay(2000);
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
  
  // Ensure Notepad is the active window
  DigiKeyboard.sendKeyStroke(0, MOD_ALT_LEFT | MOD_SHIFT_LEFT); // Alt + Shift
  
  // Type "hello" in the opened Notepad
  DigiKeyboard.print("hello");
  
  // Exit loop (you can add more actions here if needed)
  while (1) {}
}
