void properties() {
  if (xc <= 0 && xc > -250) {
    dir = "W";
  }
  if (xc <= -250) {
    dir = "E";
  }
  if (xc > 0) {
    xc = 0;
  }
  if (xc < -370) {
    xc = -370;
  }

}
void simpleos_homescreen() {

  switch (i) {

    case 1:
      display.clearDisplay();
      delay(1);
      display.setCursor(0, 15);
      display.setTextColor(WHITE);
      display.setTextSize(1);
      display.println("Welcome to ESPOS");
      display.setCursor(0, 30);
      display.setTextColor(WHITE);
      display.setTextSize(1);
      display.println("RIGHT click to see");
      display.setCursor(34, 45);
      display.setTextColor(WHITE);
      display.setTextSize(1);
      display.println("the apps");
      display.display();
      page = 1;
      break;

    case 2:
      display.clearDisplay();
      delay(1);
      display.setCursor(a, 0);
      display.setTextColor(WHITE);
      display.setTextSize(1);
      display.println("SYSTEM INFO");
      display.drawBitmap(32, 15, info, 50, 50, 1);
      display.display();
      delay(1);
      page = 2;
      break;


    case 3:
      display.clearDisplay();
      delay(1);
      display.setCursor(34, 0);
      display.setTextColor(WHITE);
      display.setTextSize(1);
      display.println("ESP CHAT");
      display.drawBitmap(a, 15, whatsapp, 40, 40, 1);
      display.display();
      delay(1);
      page = 3;
      break;

    case 4:
      responseTime = 100;
      display.clearDisplay();
      delay(1);
      display.setCursor(34, 0);
      display.setTextColor(WHITE);
      display.setTextSize(1);
      display.println("VOLT METER");
      display.drawBitmap(32, 15, volt, 50, 50, 1);
      display.display();
      delay(1);
      page = 4;
      break;

    case 8:
      display.clearDisplay();
      delay(1);
      display.setCursor(34, 0);
      display.setTextColor(WHITE);
      display.setTextSize(1);
      display.println("PAINT");
      display.drawBitmap(32, 15, paint, 50, 50, 1);
      display.display();
      delay(1);
      page = 5;
      break;

    //  IN PAGES
    case 5:
      display.clearDisplay();
      delay(1);
      display.setCursor(54, 0);
      display.setTextColor(WHITE);
      display.setTextSize(1);
      display.println("ESP32");
      display.setCursor(15, 15);
      display.println("4MB FLASH");
      display.setCursor(15, 30);
      display.println("500KB RAM");
      display.setCursor(15, 45);
      display.println("ESP-WROOM-32");
      display.display();
      delay(1);
      inpage = 1;
      break;


    case 6:
      display.clearDisplay();
      delay(1);
      display.setCursor(5, 0);
      display.setTextColor(WHITE);
      display.setTextSize(1);
      display.println("CHAT BOX: ");
      display.setCursor(10, 15);
      display.println("greatscott!");
      display.setCursor(10, 30);
      display.println("electroBOOM!");
      display.setCursor(10, 45);
      display.println("electronoobs");
      display.display();
      delay(1);
      inpage = 2;
      break;


    case 7:
      responseTime = 10;
      display.clearDisplay();
      delay(1);
      display.setCursor(0, 28);
      display.setTextColor(WHITE);
      display.setTextSize(2);
      display.println(analogRead(33));
      display.display();
      delay(1);
      inpage = 3;
      break;

    case 9:
      responseTime = 100;
      display.drawPixel(x, y, WHITE);
      display.display();
      delay(1);
      page = 8;
      break;

    case 10:
      display.clearDisplay();
      delay(1);
      responseTime = 300;
      display.setCursor(34, 0);
      display.setTextColor(WHITE);
      display.setTextSize(1);
      display.println("KEYBOARD");
      display.drawBitmap(32, 15, keyboard, 50, 50, 1);
      display.display();
      delay(1);
      page = 6;
      break;

    case 11:
      digitalWrite(2, sec);
      display.clearDisplay();
      delay(1);
      display.setCursor(ypos, xpos);
      display.setTextColor(WHITE);
      display.setTextSize(1);
      display.print(letter);
      display.drawBitmap(0, 0, letters, 128, 64, 1);
      display.drawRect(x1, z1, 15, 12, WHITE);
      display.setCursor(100, 51);
      display.setTextColor(BLACK);
      display.setTextSize(1);
      display.println("SPC");
      display.display();
      delay(1);
      page = 7;
      break;



    case 13:
      display.clearDisplay();
      delay(1);
      display.setCursor(2, 1);
      display.setTextColor(WHITE);
      display.setTextSize(1);
      display.print(letter);
      display.drawBitmap(0, 0, numpad, 128, 64, 1);
      display.drawRect(x1, z1, 10, 15, WHITE);
      display.display();
      delay(1);
      break;

    case 14:
      runcal();
      break;

    case 15:
      display.clearDisplay();
      delay(1);
      display.setCursor(a, 0);
      display.setTextColor(WHITE);
      display.setTextSize(1);
      display.println("calculator");
      display.drawBitmap(32, 15, imgcal, 50, 50, 1);
      display.display();
      delay(1);
      page = 90;
      break;

    case 16:
      sel = 1;
      Serial.println(xc);
      responseTime = 0;
      display.clearDisplay();
      delay(1);
      display.drawBitmap(xc, 0, land, siz, siz1, 1);
      display.drawBitmap(0, 0, manhands, 128, 64, 1);
      display.setCursor(0, 0);
      display.setTextColor(WHITE);
      display.setTextSize(1);
      display.println(dir);
      display.display();
      properties();
      page = 92;
      break;

    case 17:
      display.clearDisplay();
      delay(1);
      display.setCursor(0, 0);
      display.setTextColor(WHITE);
      display.setTextSize(2);
      display.println("EsP CrAfT");
      display.display();
      page = 91;
      break;

    case 19:
      cubeRGI();
      break;


    case 18:
      display.clearDisplay();
      delay(1);
      display.drawBitmap(0, 0, RGItheme, 128, 64, 1);
      display.display();
      page = 100;
      break;


  };
}

void start_espos() {
  letter = "";
  setdefaultRGI();
  page = 1;
  pinMode(2, OUTPUT);
  pinMode(33, INPUT_PULLUP);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3D);
  display.clearDisplay();
  delay(1);
  display.drawBitmap(0, 0, OSlogo, 128, 64, 1);
  display.display();
  delay(2000);
  display.clearDisplay();
  delay(1);

}








void espos_buttonsettings() {
  /* i declaration:
    cases:
    icon cases:
    1. esp os version window
    2. system info icon
    3. espchat icon
    4. voltmeter icon
    8. paint

    inpage cases
    5. voltmeter inpage
    6. system info inpage
    7. espchat inpage

    page declaration:

    pages:
    1.esp os version
    2.system info
    3.espchat
    4.voltmeter
    5. paint

    inpages:
    1.system info
    2. espchat
    3. voltmeter
    4.paint

  */

  // if right clicked on esp os version
  // Grab an IR codev

  if (IrReceiver.decode()) {
    Serial.println(IrReceiver.decodedIRData.command);
    if (IrReceiver.decodedIRData.command == UP_BUTT1 ) {
      UP_BUTT = 0;

    }
    else(UP_BUTT = 1);

    if (IrReceiver.decodedIRData.command == DOWN_BUTT1 ) {
      DOWN_BUTT = 0;
    }
    else(DOWN_BUTT = 1);

    if (IrReceiver.decodedIRData.command == ENTER_BUTT ) {
      SELECT_BUTT = 0;

    }
    else(SELECT_BUTT = 1);
    if (IrReceiver.decodedIRData.command == DISPLAY_BUTT ) {
      BACK_BUTT = 0;

    }
    else(BACK_BUTT = 1);

    if (IrReceiver.decodedIRData.command == RIGHT_BUTT1 ) {
      RIGHT_BUTT = 0;

    }
    else(RIGHT_BUTT = 1);

    if (IrReceiver.decodedIRData.command == LEFT_BUTT1 ) {
      LEFT_BUTT = 0;

    }

    else(LEFT_BUTT = 1);
    if (RIGHT_BUTT == 0 && page == 1) {
      i = 2;
    }

    // if left clicked on system info
    if (LEFT_BUTT == 0 && page == 2) {
      i = 1;
    }
    // if right clicked on system info
    if (RIGHT_BUTT == 0 && page == 2) {
      i = 3;

    }
    // if right clicked on system info
    // if right clicked on espchat
    if (RIGHT_BUTT == 0 && page == 3) {
      i = 4;
    }

    // if left clicked on espchat
    if (LEFT_BUTT == 0 && page == 3) {
      i = 2;
    }

    // if left clicked on voltmeter
    if (LEFT_BUTT == 0 && page == 4) {
      i = 3;
    }
    if (LEFT_BUTT == 0 && page == 90) {
      i = 10;
    }
    // if select clicked on voltmeter
    if (SELECT_BUTT == 0 && page == 4) {
      i = 7;
    }

    // if select clicked on system info
    if (SELECT_BUTT == 0 && page == 2) {
      i = 5;
    }

    // if right clicked on voltmeter
    if (RIGHT_BUTT == 0 && page == 4) {
      i = 8;
    }
    if (RIGHT_BUTT == 0 && page == 6) {
      i = 15;
    }
    if (RIGHT_BUTT == 0 && page == 90) {
      i = 17;
    }
    if (RIGHT_BUTT == 0 && page == 91) {
      i = 18;

    }
    if (SELECT_BUTT == 0 && page == 100) {
      i = 19;
      sel = 3;
    }
    if (LEFT_BUTT == 0 && page == 100) {
      i = 17;
    }
    if (SELECT_BUTT == 0 && page == 91) {
      i = 16;
    }
    if (LEFT_BUTT == 0 && page == 91) {
      i = 15;
    }
    // if left clicked on paint
    if (LEFT_BUTT == 0 && page == 5 && inpage != Not) {
      i = 4;
    }


    if (RIGHT_BUTT == 0 && page == 8) {
      x = x + z;
    }

    if (LEFT_BUTT == 0 && page == 8) {
      x = x - z;
    }

    if (UP_BUTT == 0 && page == 8) {
      y = y - z;
    }
    if (DOWN_BUTT == 0 && page == 8) {
      y = y + z;
    }
    if (BACK_BUTT == 0 && page == 8) {
      i = 8;
      responseTime = 300;
    }
    if (SELECT_BUTT == 0 && page == 8 ) {
      display.clearDisplay();
      delay(1);
      i = 9;
    }
    if (SELECT_BUTT == 0 && page == 5 ) {
      display.clearDisplay();
      delay(1);
      responseTime = 10;
      i = 9;

    }
    if (RIGHT_BUTT == 0 && page == 5) {
      i = 10;
    }

    if (LEFT_BUTT == 0 && page == 6) {
      i = 8;
    }
    if (SELECT_BUTT == 0 && page == 6) {
      delay(100);
      i = 11;
    }
    if (letter == letter + "CLR" ) {
      letter = "";
    }
    if ( letter == "ON" ) {
      letter = "GPIO 2 ON";
      sec = 1;
    }
    if ( letter == "OFF" ) {
      letter = "GPIO 2 OFF";
      sec = 0;
    }
    if ( letter == "WEB" ) {
      wlsel = 1;
    }
    if (letter == "BACK") {
      i = 10;
    }
    if ( letter == "NUMPAD" ) {
      letter = "";
      i = 13;
      page = 9;
    }

    if (BACK_BUTT == 0 && page == 9 ) {
      letter = "";
      decl = 0;
    }

    if (BACK_BUTT == 0 && page == 7 ) {
      letter = "";
    }
    if (BACK_BUTT == 0 && page == 10 ) {
      i = 10;
    }
    if (RIGHT_BUTT == 0 && page == 9) {
      x1 = x1 + 12;
    }
    if (LEFT_BUTT == 0 && page == 9) {
      x1 = x1 - 12;
    }
    if (DOWN_BUTT == 0 && page == 9) {
      z1 = z1 + 12;
    }
    if (UP_BUTT == 0 && page == 9) {
      z1 = z1 - 12;
    }


    if (RIGHT_BUTT == 0 && page == 7) {
      x1 = x1 + 12;
    }
    if (LEFT_BUTT == 0 && page == 7) {
      x1 = x1 - 12;
    }
    if (DOWN_BUTT == 0 && page == 7) {
      z1 = z1 + 12;
    }
    if (UP_BUTT == 0 && page == 7) {
      z1 = z1 - 12;
    }
    if (z1 > 49 || z1 < 25 || x1 < 6 || x1 > 114) {
      z1 = 25;
      x1 = 6;
    }
    if (SELECT_BUTT == 0 && page == 7 && x1 == 6 && z1 == 25) {
      letter = letter + "Q";
    }
    if (SELECT_BUTT == 0 && page == 7 && x1 == 18 && z1 == 25) {
      letter = letter + "W";
    }
    if (SELECT_BUTT == 0 && page == 7 && x1 == 30 && z1 == 25) {
      letter = letter + "E";
    }
    if (SELECT_BUTT == 0 && page == 7 && x1 == 42 && z1 == 25) {
      letter = letter + "R";
    }
    if (SELECT_BUTT == 0 && page == 7 && x1 == 54 && z1 == 25) {
      letter = letter + "T";
    }
    if (SELECT_BUTT == 0 && page == 7 && x1 == 66 && z1 == 25) {
      letter = letter + "Y";
    }
    if (SELECT_BUTT == 0 && page == 7 && x1 == 78 && z1 == 25) {
      letter = letter + "I";
    }
    if (SELECT_BUTT == 0 && page == 7 && x1 == 90 && z1 == 25) {
      letter = letter + "O";
    }
    if (SELECT_BUTT == 0 && page == 7 && x1 == 102 && z1 == 25) {
      letter = letter + "P";
    }
    if (SELECT_BUTT == 0 && page == 7 && x1 == 114 && z1 == 25) {
      letter = letter + "U";
    }

    //hahaha
    if (SELECT_BUTT == 0 && page == 7 && x1 == 6 && z1 == 37) {
      letter = letter + "A";
    }
    if (SELECT_BUTT == 0 && page == 7 && x1 == 18 && z1 == 37) {
      letter = letter + "S";
    }
    if (SELECT_BUTT == 0 && page == 7 && x1 == 30 && z1 == 37) {
      letter = letter + "D";
    }
    if (SELECT_BUTT == 0 && page == 7 && x1 == 42 && z1 == 37) {
      letter = letter + "F";
    }
    if (SELECT_BUTT == 0 && page == 7 && x1 == 54 && z1 == 37) {
      letter = letter + "G";
    }
    if (SELECT_BUTT == 0 && page == 7 && x1 == 66 && z1 == 37) {
      letter = letter + "H";
    }
    if (SELECT_BUTT == 0 && page == 7 && x1 == 78 && z1 == 37) {
      letter = letter + "J";
    }
    if (SELECT_BUTT == 0 && page == 7 && x1 == 90 && z1 == 37) {
      letter = letter + "K";
    }
    if (SELECT_BUTT == 0 && page == 7 && x1 == 102 && z1 == 37) {
      letter = letter + "L";
    }


    if (SELECT_BUTT == 0 && page == 7 && x1 == 6 && z1 == 49) {
      letter = letter + "Z";
    }
    if (SELECT_BUTT == 0 && page == 7 && x1 == 18 && z1 == 49) {
      letter = letter + "X";
    }
    if (SELECT_BUTT == 0 && page == 7 && x1 == 30 && z1 == 49) {
      letter = letter + "C";
    }
    if (SELECT_BUTT == 0 && page == 7 && x1 == 42 && z1 == 49) {
      letter = letter + "V";
    }
    if (SELECT_BUTT == 0 && page == 7 && x1 == 54 && z1 == 49) {
      letter = letter + "B";
    }
    if (SELECT_BUTT == 0 && page == 7 && x1 == 66 && z1 == 49) {
      letter = letter + "N";
    }
    if (SELECT_BUTT == 0 && page == 7 && x1 == 78 && z1 == 49) {
      letter = letter + "M";
    }
    if (SELECT_BUTT == 0 && page == 7 && x1 == 90 && z1 == 49) {
      letter = letter + " ";
    }
    if (SELECT_BUTT == 0 && page == 90) {
      i = 14;

    }
    if (IrReceiver.decodedIRData.command == RIGHT_BUTT && i == 16 ) {
      xc = xc - 10;
    }
    if (IrReceiver.decodedIRData.command == LEFT_BUTT && i == 16 ) {
      xc = xc + 10;

    }
    if (IrReceiver.decodedIRData.command == DOWN_BUTT && i == 16) {

      siz1 = siz1 + 1;
    }
    if (IrReceiver.decodedIRData.command == UP_BUTT && i == 16) {

      siz1 = siz1 - 1;
    }




  }
  IrReceiver.resume();
  delay(100);

}

void ircontrolespcraft() {
  if (IrReceiver.decode()) {
    if (IrReceiver.decodedIRData.command == RIGHT_BUTT1 ) {
      xc = xc - 10;
    }
    if (IrReceiver.decodedIRData.command == LEFT_BUTT1 ) {
      xc = xc + 10;

    }
    if (IrReceiver.decodedIRData.command == DOWN_BUTT1 ) {

      siz1 = siz1 + 1;
    }
    if (IrReceiver.decodedIRData.command == UP_BUTT1) {

      siz1 = siz1 - 1;
    }
  }
  IrReceiver.resume();
  delay(100);
}




void NOir() {

}
void simpleosIRselect() {
  if (sel == 0) {
    espos_buttonsettings(); // button control properties
  }
  if (sel == 1) {
    ircontrolespcraft();
  }
  if (sel == 3) {
    IRremoteRGI();
  }
  if (sel == 4) {
    NOir();
  }
}
