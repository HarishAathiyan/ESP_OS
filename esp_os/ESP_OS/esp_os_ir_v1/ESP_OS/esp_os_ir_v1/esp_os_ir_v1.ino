#include "bitmap.h"
#include "variables.h"
#include "irconfig.h"
#include "cal.h"
#include "RGI_graphics.h"
#include "simpleos.h"
#include "bluetooth_mouse.h"
#include "desktopos.h"
#define desktopMode
//#define simpleMode












void setup(){
#ifdef desktopMode  
desktop_os_start();
#endif 
#ifdef simpleMode
start_espos();
#endif 
  }




void loop() { 
#ifdef desktopMode  
run_desktop_os();
#endif
#ifdef simpleMode
espos_buttonsettings();
simpleos_homescreen();
#endif
} 



























  
  






     
