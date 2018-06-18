/* 
 *  Name: Browser Timeout Clicker
 *  Date: 06-18-2018
 *  Desc: An Arduino based mouse emulator, designed to keep a browser window from timing out by showing some activity.
 *  Author: Weldar https://gitlab.com/weldar
 *  Version 1.0
 */

#include <Mouse.h>

void setup() {
  // First time setup code, NEVER looped.

   Mouse.begin();
}

void loop() {
  // Loop that clicks the left mouse button twice every 30 seconds.
  delay(1000);

  while(true) {
    Mouse.click(MOUSE_LEFT);
    delay(500);
    Mouse.click(MOUSE_LEFT);

    delay(30000);
  }
}
