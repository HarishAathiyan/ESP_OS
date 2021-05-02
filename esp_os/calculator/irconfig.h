#define R 5
#define G 6
#define B 9
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
#define UP_BUTT 71
#define LEFT_BUTT 89
#define RIGHT_BUTT 90
#define DOWN_BUTT 72
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




//program:


//includes,defines and variables:
#include <IRremote.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define IR_RECEIVE_PIN 15
#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64
#define OLED_RESET 4
int number;
int number1;
int number2;
int disnum1;
int disnum2;
int x=25;
int y=30;
int numtime=0;
int z,z2,z3,z4,z5,z6,z7,z8,z9,z0=0;
int result=number1+number2;
int responseTime=200;
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
//end of it
void discal(){
disnum1=number1;
disnum2=number2;
display.setCursor(0,0);
display.setTextColor(WHITE);
display.setTextSize(1);
display.println(disnum1);
display.println("with ");
display.println(disnum2);
display.display();
  }


//num function,to print the numbers on the display by taking the IR signal
void num (){   
switch (z){
case 1:
numtime=0;
break;
case 2:
numtime=10;
break; 
case 3:
numtime=110;
break; 
case 4:
numtime=1110;
break;
};
switch (z2){
case 1:
numtime=0;
break;
case 2:
numtime=20;
break; 
case 3:
numtime=220;
break; 
case 4:
numtime=2220;
break;
};
switch (z3){
case 1:
numtime=0;
break;
case 2:
numtime=30;
break; 
case 3:
numtime=330;
break; 
case 4:
numtime=3330;
break;
  };
  
  Serial.println(IrReceiver.decodedIRData.command);
if (IrReceiver.decodedIRData.command == BUTT_1){
 
display.clearDisplay();
delay(1);
discal();
display.setCursor(x,y);
display.setTextColor(WHITE);
display.setTextSize(1);
number=numtime+1;
z=z+1;
display.println(number);
display.display();  
}
if (IrReceiver.decodedIRData.command == BUTT_2){ 
display.clearDisplay();
delay(1);
discal();
display.setCursor(x,y);
display.setTextColor(WHITE);
display.setTextSize(1);
number=numtime+2;
z2=z2+1;
display.println(number);
display.display();  
}
if (IrReceiver.decodedIRData.command == BUTT_3){ 
display.clearDisplay();
delay(1);
discal();
display.setCursor(x,y);
display.setTextColor(WHITE);
display.setTextSize(1);
number=numtime+3;
z3=z3+1;
display.println(number);
display.display();  
}
if (IrReceiver.decodedIRData.command == BUTT_4){ 
display.clearDisplay();
delay(1);
discal();
display.setCursor(x,y);
display.setTextColor(WHITE);
display.setTextSize(1);
number=numtime+4;
z4=z4+1;
display.println(number);
display.display();  
}
if (IrReceiver.decodedIRData.command == BUTT_5){ 
display.clearDisplay();
delay(1);
discal();
display.setCursor(x,y);
display.setTextColor(WHITE);
display.setTextSize(1);
number=numtime+5;
z5=z5+1;
display.println(number);
display.display();  
}
if (IrReceiver.decodedIRData.command == BUTT_6){ 
display.clearDisplay();
delay(1);
discal();
display.setCursor(x,y);
display.setTextColor(WHITE);
display.setTextSize(1);
number=numtime+6;
z6=z6+1;
display.println(number);
display.display();  
}
if (IrReceiver.decodedIRData.command == BUTT_7){ 
display.clearDisplay();
delay(1);
discal();
display.setCursor(x,y);
display.setTextColor(WHITE);
display.setTextSize(1);
number=numtime+7;
z7=z7+1;
display.println(number);
display.display();  
}
if (IrReceiver.decodedIRData.command == BUTT_8){ 
display.clearDisplay();
delay(1);
discal();
display.setCursor(x,y);
display.setTextColor(WHITE);
display.setTextSize(1);
number=numtime+8;
z8=z8+1;
display.println(number);
display.display();  
}
if (IrReceiver.decodedIRData.command == BUTT_9){ 
display.clearDisplay();
delay(1);
discal();
display.setCursor(x,y);
display.setTextColor(WHITE);
display.setTextSize(1);
number=numtime+9;
z9=z9+1;
display.println(number);
display.display();  
}
if (IrReceiver.decodedIRData.command == BUTT_0){ 
display.clearDisplay();
delay(1);
discal();
display.setCursor(x,y);
display.setTextColor(WHITE);
display.setTextSize(1);
number=numtime+0;
z0=z0+1;
display.println(number);
display.display();  
}  
  }
//end of num function
  
//startcal function,to initialize the calculator. use it only one time in the program(in setup)
void startcal(){
display.begin(SSD1306_SWITCHCAPVCC, 0x3D);
 Serial.begin(115200);   // Status message will be sent to PC at 9600 baud
#if defined(__AVR_ATmega32U4__) || defined(SERIAL_USB) || defined(SERIAL_PORT_USBVIRTUAL)  || defined(ARDUINO_attiny3217)
    delay(2000); // To be able to connect Serial monitor after reset or power up and before first printout
#endif
    // Just to know which program is running on my Arduino
    Serial.println(F("START " __FILE__ " from " __DATE__ "\r\nUsing library version " VERSION_IRREMOTE));

    IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK); // Start the receiver, enable feedback LED, take LED feedback pin from the internal boards definition

    Serial.print(F("Ready to receive IR signals at pin "));
    Serial.println(IR_RECEIVE_PIN);  
  }
//end of startcal function

// runcal function,which contains the arithmetic functions to tell the alu what to perform by taking in the IR signal 
void runcal(){
if (IrReceiver.decode()) { 

num();
if(IrReceiver.decodedIRData.command == PLAY_BUTT){
number1=number;
x=40;
display.clearDisplay();
delay(1);
discal();
display.setCursor(25,30);
display.setTextColor(WHITE);
display.setTextSize(1);
display.println(number1);
display.setCursor(35,30);
display.setTextColor(WHITE);
display.setTextSize(1);
display.println("+");
display.setCursor(60,30);
display.println(number2);
display.display();  
  }
if(IrReceiver.decodedIRData.command == UP_BUTT){
number2=number;
result=number1+number2;
display.clearDisplay();
delay(1);
discal();
display.setCursor(0,30);
display.setTextColor(WHITE);
display.setTextSize(1);
display.println(result);
display.setCursor(0,50);
display.println("addition");
display.display();    
  } 

if(IrReceiver.decodedIRData.command == DISPLAY_BUTT){
number1=0;
number2=0;
numtime=0;
number=0;
disnum1=0;
disnum2=0;   
  }  
 if(IrReceiver.decodedIRData.command == LEFT_BUTT){
number2=number;
result=number1*number2;
display.clearDisplay();
delay(1);
discal();
display.setCursor(0,30);
display.setTextColor(WHITE); 
display.setTextSize(1);
display.println(result);
display.setCursor(0,50);
display.println("multiplicaion");
display.display();    
  }
  if(IrReceiver.decodedIRData.command == RIGHT_BUTT){
number2=number;
result=number1/number2;
display.clearDisplay();
delay(1);
discal();
display.setCursor(0,30);
display.setTextColor(WHITE);
display.setTextSize(1);
display.println(result);
display.setCursor(0,50);
display.println("division");
display.display();    
  }
   if(IrReceiver.decodedIRData.command == DOWN_BUTT){
number2=number;
result=number1-number2;
display.clearDisplay();
delay(1);
discal();
display.setCursor(0,30);
display.setTextColor(WHITE);
display.setTextSize(1);
display.println(result);
display.setCursor(0,50);
display.println("subraction");
display.display();    
  }

 if(IrReceiver.decodedIRData.command == ENTER_BUTT){
number2=number;
result=pow(number1,number2);
display.clearDisplay();
delay(1);
discal();
display.setCursor(0,30);
display.setTextColor(WHITE); 
display.setTextSize(1);
display.println(result);
display.setCursor(0,50);
display.println("power");
display.display();    
  }         
      IrReceiver.resume();                             
   delay(responseTime);            
  } 
}
//end of run cal function
