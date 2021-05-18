/*
Here you will find all important functions related to the esp command sets.

List of commands:
 * GPIO Num ON/OFF
 * 
 * 
 * 
*/
int PinGPIO;
int PinState;


void runespcommand(){
pinMode(PinGPIO,OUTPUT);
digitalWrite(PinGPIO,PinState);
if(total=="GPIO 2 ON"){
PinGPIO=2;
PinState=1;
total="";
  }
  if(total=="GPIO 2 OFF"){
PinState=0;
PinGPIO=2;
total="";
  }
if(total=="GPIO 4 ON"){
  PinGPIO=4;
PinState=1;
total="";
  }
  if(total=="GPIO 4 OFF"){
PinState=0;
PinGPIO=4;
total="";
  }  
      
}
