
#include "bitmap.h"
#include "variables.h"
#include "irconfig.h"
#include "cal.h"
#include "RGI_graphics.h"
#include "simpleos.h"
#include "MIT_Keyboard.h"
#include "espcommand.h"
#include "bluetooth_mouse.h"
#include "desktopos.h"

/* Welcome to the ESP-OS!. this is a Dumb OS obsolutly only for educational purposes. 
This is ESP-OS V1.1. the additional thing is that is now supports bluetooth
How to choose your OS Mode:
You can choose it by commenting out any one of the modes defined down below(Default is desktop Mode):
*/

#define desktopMode
//#define simpleMode

void setup()
{
#ifdef desktopMode
  desktop_os_start();
#endif

#ifdef simpleMode
  start_espos();
#endif
}

void loop()
{
#ifdef desktopMode
  run_desktop_os();
#endif

#ifdef simpleMode
  espos_buttonsettings();
  simpleos_homescreen();
#endif
}
