#define XPIN_1 2
#define XPIN_2 3
#define YPIN_1 4
#define YPIN_2 5
#define SERVO_PIN 9
#define IR_PIN 11
#include <Servo.h>
#include <IRremote.h>
Servo myservo;
int x;
void setup() {
printer();
x=0;
}

void loop(){ 
ir();
}

void printer(){
IrReceiver.begin(IR_PIN);
myservo.attach(SERVO_PIN);
myservo.write(0);
Serial.begin(9600);
pinMode(XPIN_1,OUTPUT); 
pinMode(XPIN_2,OUTPUT);  
pinMode(YPIN_1,OUTPUT); 
pinMode(YPIN_2,OUTPUT);
delay(15);
  }

void ir (){
if (IrReceiver.decode()) { 
  Serial.println(IrReceiver.decodedIRData.command);      

if(IrReceiver.decodedIRData.command == 2 ){
digitalWrite(XPIN_1,1);
digitalWrite(XPIN_2,0);
digitalWrite(YPIN_1,0);
digitalWrite(YPIN_2,0); 
  }
  else(digitalWrite(XPIN_1,0));
  
  if(IrReceiver.decodedIRData.command == 8){
digitalWrite(XPIN_1,0);
digitalWrite(XPIN_2,1);
digitalWrite(YPIN_1,0);
digitalWrite(YPIN_2,0); 
  }
  else(digitalWrite(XPIN_2,0));
  
   if(IrReceiver.decodedIRData.command == 18 ){
x=x+2;
  }
   else(x=x);
    if(IrReceiver.decodedIRData.command == 30 ){
x=x-2;
  
  } 
   else(x=x);
   
if(IrReceiver.decodedIRData.command == 6 ){
digitalWrite(XPIN_1,0);
digitalWrite(XPIN_2,0);
digitalWrite(YPIN_1,1);
digitalWrite(YPIN_2,0);   
  }
else(digitalWrite(YPIN_1,0)); 

if(IrReceiver.decodedIRData.command == 4 ){
digitalWrite(XPIN_1,0);
digitalWrite(XPIN_2,0);
digitalWrite(YPIN_1,0);
digitalWrite(YPIN_2,1);  
  }
   else(digitalWrite(YPIN_2,0));
  
    IrReceiver.resume();                             
myservo.write(x);
}
delay(15);    
}
  
