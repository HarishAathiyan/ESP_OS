# ESP_OS_v1
A mini GUI interface for ESP32 supporting 128x64 OLED display(can further improved)

#  only simple components are needed to make it work: 
   ESP32
   OLED display 128x64
   HC05 bluetooth module


# The ESP_OS V1 features:
   Supports two modes:
    The SIMPLE mode
    The DESKTOP mode.
#  The pros of simple mode are:
   * the simple mode is quite efficient and doesn't waste much power.
   * It works with simple IR(Infra red) red technology for remotely controlling.
   * you can also use the button mode to feel the real press.
   * It has RGI graphics, ESPcraft, calculator , integrated keyboard, voltmeter, basic command like ON and OFF an LED etc.
   *a keyboard in simple mode  <img width="64" alt="letters" src="https://user-images.githubusercontent.com/75715998/117020439-1187dd80-ad14-11eb-9458-8c8483ec8a75.png">

  
#  The cons of simple mode are:
   * It is not that powerful compared to the desktop mode.
   * It does not comes with bluetooth mouse for ease of moving experience.

#  The pros of desktop mode are:
   * It is powerful than the previous mode.
   * It is near or less looks like ordinary destop OS (not that much) 
   * It does  comes with bluetooth mouse for ease of moving experience.
   
# enabling the desktop mode:
  to enable the desktop mode you need to simply define as desktop or simple Mode in the beginning or just copy and paste this code in the main:
                
                 #define desktopMode
                 //#define simpleMode //comment this out if you need to use the desktop Mode! 
                 
# enabling the Simple mode:
  to enable the desktop mode you need to simply define as desktop or simple Mode in the beginning or just copy and paste this code in the main:
                
                 //#define desktopMode //comment this out if you need to use the simple Mode! 
                 #define simpleMode 





