/*
Here are the declaraton of the libraries used to communicate with the IRremte, Display etc.
*/
#include <IRremote.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// please define your IR recieve pin for IR communication.
#define  IR_RECEIVE_PIN 15

/*
Down below are the declaration for the IR signals for  OS
You can edit them and put whatever value the IR remote gives out. you can test it out using an 
example at the IR remote library.(Here Im using LG37 remote)
*/
#define IR_PIN 11
#define POWER_BUTT 48
#define OPEN/CLOSE_BUTT 54
#define TV_POWER_BUTT 8
#define BUTT_1 59
#define BUTT_2 60
#define BUTT_3 61
#define BUTT_4 62
#define BUTT_5 63
#define BUTT_6 64
#define BUTT_7 65
#define BUTT_8 66
#define BUTT_9 67
#define CLEAR_BUTT 70
#define BUTT_0 68
#define AV_BUTT 11
#define CH+_BUTT 0
#define CH-_BUTT 1
#define VOL+_BUTT 2
#define VOL-_BUTT 3
#define SCAN<<_BUTT 50
#define SCAN>>_BUTT 51
#define SKIP<<_BUTT 53
#define SKIP>>_BUTT 52
#define PAUSE_BUTT 56
#define PLAY_BUTT 49
#define STOP_BUTT 57
#define DVD_MENU_BUTT 75
#define TITLE_BUTT 74
#define UP_BUTT1 71
#define LEFT_BUTT1 89
#define RIGHT_BUTT1 90
#define DOWN_BUTT1 72
#define ENTER_BUTT 88
#define DISPLAY_BUTT 58
#define RETURN_BUTT 69
#define AUDIO_BUTT 79
#define SUBTITLE_BUTT 80
#define ANGLE_BUTT 76
#define SETUP_BUTT 86
#define MARKER_BUTT 97
#define SEARCH_BUTT 98
#define PROGRAM_BUTT 87
#define ZOOM_BUTT 100
#define REPEAT_BUTT 83
#define A_B_BUTT 85
#define RANDOM_BUTT 81
#define STAR_BUTT 94
#define RESPONSE_TIME 10
#define ON 0
#define OFF 1
#define INCREASE_RATE 5



/*
Here is another declaration but for the RGI graphics.
i use seperately because it was a faste remote(simple radio or music player remote)
*/
#define rBUTT_1 59
#define rBUTT_2 60
#define rSCAN1BUTT 50
#define rSCAN2BUTT 51
#define rUP_BUTT1 71
#define rLEFT_BUTT1 89
#define rRIGHT_BUTT1 90
#define rDOWN_BUTT1 72
#define rENTER_BUTT1 88
#define rRETURN_BUTT1 69
#define rVOL1BUTT 2
#define rVOL2BUTT 3

/*
Here down below is declaration of right a left clicks for UNICA robotics app which is connected via 
bluetooth.
*/

#define LEFTCLICK 1
#define RIGHTCLICK 2

/*
Here down below is declaration of right a left clicks for MIT app inventor app which is 
connected via bluetooth.
*/

#define LEFTCLICK_MIT "Q"
#define RIGHTCLICK_MIT "I"
