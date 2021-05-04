void startScreen(){
 
display.fillRect(0, 19, 50, 45, WHITE);
display.setCursor(0,50);
display.setTextColor(BLACK);
display.setTextSize(1);
display.println("settings"); 
 
  }
void settingswindows(){
windows=1;
display.drawBitmap(xwin, ywin, blankscreen, 50, 45, 1);
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
display.setCursor(0,16);
display.setTextColor(WHITE);
display.setTextSize(1);
display.println("my computer");
display.setCursor(0,39);
display.println("folders");  
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
    if(selps2==2){
   settingswindows();   
      }
      if(fol==1){
xwin=xps2;
ywin=yps2; 
        }
 ir();
 elements();
  display.drawBitmap(xps2, yps2, mouse, 10, 10, 1);
  display.drawBitmap(0,0,desktopic,128,64,1); 
  display.display();
  display.clearDisplay();
bluetooth_mouse();

}
