
void startScreen(){
 
display.fillRect(0, 19, 50, 45, WHITE);
display.drawLine(0, 50, 50, 45, WHITE);
display.setCursor(0,50);
display.setTextColor(BLACK);
display.setTextSize(1);
display.println("settings"); 
 
  }
void settingswindows(){
windows=1;

if(show==1){
display.fillRect(xwin+29,ywin, 11, 10, colormin);
display.fillRect(xwin+40,ywin, 10, 10, colormax);
display.fillRect(xwin+50,ywin, 10, 10, colorclose);
display.drawBitmap(xwin, ywin, blankscreen, 60, 50,1);
}
if(show1==1){
display.fillRect(98, 0, 10, 10, colormin);
display.fillRect(108, 0, 10, 10, colormax);
display.fillRect(118,0, 10, 10, colorclose);
display.drawBitmap(0, 0, screenmax, 128, 64,1);

}

display.setTextColor(WHITE);
display.setTextSize(1);
display.setCursor(xwin,ywin+10); 
display.println("mouse Speed: ");
display.setCursor(xwin,ywin+20); 
 display.println(mspeed);
 }  
void desktop_os_start() {
  Serial.begin(115200);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3D);
  display.drawBitmap(0, 0, OSlogo, 128, 64, 1);
  Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);
  Serial.println("Serial Txd is on pin: " + String(TX));
  Serial.println("Serial Rxd is on pin: " + String(RX));
}

void elements(){
 if(selps2!=2 && selps2!=3){ 
display.setCursor(0,16);
display.setTextColor(WHITE);
display.setTextSize(1);
display.drawRect(0, 0, 17, 17, color);
display.drawRect(0, 22, 17, 17, color1);
display.println("my computer");
display.setCursor(0,39);
display.println("folders");
 }  
  }
  
void ir() {
  if ( RIGHT_BUTTps2 == 0  ) {
    xps2 = xps2 + spd;

  }
  if (LEFT_BUTTps2 == 0) {
    xps2 = xps2 - spd;


  }
  if (  UP_BUTTps2 == 0  ) {
    yps2 = yps2 - spd;

  }
  if (DOWN_BUTTps2 == 0) {
    yps2 = yps2 + spd;

  }
  if (xps2 > 118) {
    xps2 = 118;
  }
  if (yps2 > 54) {
    yps2 = 54;
  }
  if (xps2 < 0) {
    xps2 = 0;
  }
  if (yps2 < 0) {
    yps2 = 0;
  }
}



void run_desktop_os() { 
  if(selps2==1 ){
 startScreen();   
    }
    if(selps2==2 || selps2==3){
   settingswindows();   
      }

      if(fol==1){
xwin=xps2;
ywin=yps2; 
        }
 ir();
 elements();

  display.drawBitmap(xps2, yps2, mouse, 10, 10, 1);
    if(selps2!=2 && selps2!=3){
  display.drawBitmap(0,0,desktopic,128,64,1); 
    }
  display.display();
  display.clearDisplay();
bluetooth_mouse();

}
