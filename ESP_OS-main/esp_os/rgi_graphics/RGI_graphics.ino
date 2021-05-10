//declaration of libraries:
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <IRremote.h>
#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64 
#define OLED_RESET     4 
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
//variables declare
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
int rSELECT_BUTT=1;
int rBACK_BUTT=1;
int rUP_BUTT=1;
int rDOWN_BUTT=1;
int rLEFT_BUTT=1;
int rRIGHT_BUTT=1;
int rP_BUTT=1;
int rL_BUTT=1;
int cubeselect=0;
char rcolor=WHITE;
int IR_RECEIVE_PIN = 15;
int rxpos,rypos,rWidth,rLength,rxpos2,rypos2,rxlimit,rylimit,rx2limit,ry2limit,ri;
int nxpos,nypos,nWidth,nLength,nxpos2,nypos2;
//x4=xpos y4=ypos x2=Width y2=Length x5=xpos2 y5=ypos2
void setup() {
setdefaultRGI();   
display.begin(SSD1306_SWITCHCAPVCC, 0x3D);
display.clearDisplay();
Serial.begin(115200);
IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK); 
Serial.println(IR_RECEIVE_PIN); 
}

void loop() {
IRremoteRGI();   
cubeRGI();
 
   

}
void setdefaultRGI(){ 
ri=0;
rxpos=10;
rypos=10;
rypos2=30;
rxpos2=30;
rLength=10;
rWidth=10;   
  }

void cubeRGI(){
display.clearDisplay();
display.drawRect(rxpos, rypos, rWidth, rLength, WHITE);
display.drawRect(rxpos2, rypos2, rWidth, rLength, WHITE);
display.drawLine(rxpos, rypos, rxpos2, rypos2, WHITE);
display.drawLine(rxpos+rWidth, rypos+rLength, rxpos2+rWidth, rypos2+rLength, WHITE);
display.drawLine(rxpos, rypos+rLength, rxpos2, rypos2+rLength, WHITE);
display.drawLine(rxpos+rWidth, rypos, rxpos2+rWidth, rypos2, WHITE);
display.display();
rxlimit=rxpos2+rWidth;
rylimit=rypos2+rLength;  
  }  

void IRremoteRGI(){
if (IrReceiver.decode()) {
Serial.println(IrReceiver.decodedIRData.command);   
if(IrReceiver.decodedIRData.command == rUP_BUTT1 ){
rUP_BUTT=0;

  }
  else(rUP_BUTT=1);

if(IrReceiver.decodedIRData.command == rDOWN_BUTT1 ){
rDOWN_BUTT=0;
  }
  else(rDOWN_BUTT=1);
  
   if(IrReceiver.decodedIRData.command == rENTER_BUTT1 ){
rSELECT_BUTT=0;
 
  }
   else(rSELECT_BUTT=1);
    if(IrReceiver.decodedIRData.command == rRETURN_BUTT1 ){
rBACK_BUTT=0;
  
  } 
   else(rBACK_BUTT=1);
   
if(IrReceiver.decodedIRData.command == rRIGHT_BUTT1){
rRIGHT_BUTT=0;
  
  }
else(rRIGHT_BUTT=1); 

if(IrReceiver.decodedIRData.command == rLEFT_BUTT1 ){
rLEFT_BUTT=0;
  
  }
  else(rLEFT_BUTT=1); 

if(IrReceiver.decodedIRData.command == rVOL1BUTT ){
rP_BUTT=0;
  
  }
  else(rP_BUTT=1);  
if(IrReceiver.decodedIRData.command == rVOL2BUTT){
rL_BUTT=0;
  
  }
else(rL_BUTT=1);   
}
    
if(IrReceiver.decodedIRData.command == rENTER_BUTT1 && cubeselect==0){
rxpos=rxpos+1;
rypos=rypos+1;




}

if(IrReceiver.decodedIRData.command == rRETURN_BUTT1 && cubeselect==0){
rxpos=rxpos-1;
rypos=rypos-1;
  



  }
if(IrReceiver.decodedIRData.command == rDOWN_BUTT1 && cubeselect==0){
rxpos2=rxpos2+1;
rypos2+rypos2+1;

} 

if(IrReceiver.decodedIRData.command == rUP_BUTT1 && cubeselect==0){
rxpos=rxpos+1;
rypos+rypos+1;

} 
if(rxpos==138 || rypos==74|| rWidth==120 || rLength==70){
rxpos=10;
rypos=10;
rypos2=30;
rxpos2=30;
rLength=10;
rWidth=10; 
nxpos=10;
nypos=30;
nypos2=30;
nxpos2=30;
nLength=10;
nWidth=10;  
  }
if(IrReceiver.decodedIRData.command == rUP_BUTT1 && cubeselect==0){
rxpos=10;
rypos=10;
rypos2=30;
rxpos2=30;
rLength=10;
rWidth=10;
nxpos=10;
nypos=30;
nypos2=30;
nxpos2=30;
nLength=10;
nWidth=10;  
  } 
if(IrReceiver.decodedIRData.command == rLEFT_BUTT1 && cubeselect==0){
rLength=rLength+1; 

  } 
if(IrReceiver.decodedIRData.command == rRIGHT_BUTT1 && cubeselect==0){
rWidth=rWidth+1;

  }
if(IrReceiver.decodedIRData.command == rVOL1BUTT && cubeselect==0){
rLength=rLength-1;
  
  } 
if(IrReceiver.decodedIRData.command == rVOL2BUTT && cubeselect==0){
rWidth=rWidth-1; 
rWidth=rWidth-1; 

  }





    
if(IrReceiver.decodedIRData.command == rSCAN1BUTT){
display.invertDisplay(true);  
  } 
if(IrReceiver.decodedIRData.command == rSCAN2BUTT ){
display.invertDisplay(false);  
  }         
IrReceiver.resume();
}  
