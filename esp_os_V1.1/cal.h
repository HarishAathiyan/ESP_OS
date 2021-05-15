



char color = BLACK;
char color1 = BLACK;
char colormin = BLACK;
char colormax = BLACK;
char colorclose = BLACK;
//program:


#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET 4

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
//end of it
void discal() {
  disnum1 = number1;
  disnum2 = number2;
  display.setCursor(0, 0);
  display.setTextColor(WHITE);
  display.setTextSize(1);
  display.println(disnum1);
  display.println("with ");
  display.println(disnum2);
  display.display();
}


//num function,to print the numbers on the display by taking the IR signal
void num () {
  switch (z10) {
    case 1:
      numtime = 0;
      break;
    case 2:
      numtime = 10;
      break;
    case 3:
      numtime = 110;
      break;
    case 4:
      numtime = 1110;
      break;
  };
  switch (z2) {
    case 1:
      numtime = 0;
      break;
    case 2:
      numtime = 20;
      break;
    case 3:
      numtime = 220;
      break;
    case 4:
      numtime = 2220;
      break;
  };
  switch (z3) {
    case 1:
      numtime = 0;
      break;
    case 2:
      numtime = 30;
      break;
    case 3:
      numtime = 330;
      break;
    case 4:
      numtime = 3330;
      break;
  };

  Serial.println(IrReceiver.decodedIRData.command);
  if (IrReceiver.decodedIRData.command == BUTT_1) {

    display.clearDisplay();
    delay(1);
    discal();
    display.setCursor(xx, yy);
    display.setTextColor(WHITE);
    display.setTextSize(1);
    number = numtime + 1;
    z10 = z10 + 1;
    display.println(number);
    display.display();
  }
  if (IrReceiver.decodedIRData.command == BUTT_2) {
    display.clearDisplay();
    delay(1);
    discal();
    display.setCursor(xx, yy);
    display.setTextColor(WHITE);
    display.setTextSize(1);
    number = numtime + 2;
    z2 = z2 + 1;
    display.println(number);
    display.display();
  }
  if (IrReceiver.decodedIRData.command == BUTT_3) {
    display.clearDisplay();
    delay(1);
    discal();
    display.setCursor(xx, yy);
    display.setTextColor(WHITE);
    display.setTextSize(1);
    number = numtime + 3;
    z3 = z3 + 1;
    display.println(number);
    display.display();
  }
  if (IrReceiver.decodedIRData.command == BUTT_4) {
    display.clearDisplay();
    delay(1);
    discal();
    display.setCursor(xx, yy);
    display.setTextColor(WHITE);
    display.setTextSize(1);
    number = numtime + 4;
    z4 = z4 + 1;
    display.println(number);
    display.display();
  }
  if (IrReceiver.decodedIRData.command == BUTT_5) {
    display.clearDisplay();
    delay(1);
    discal();
    display.setCursor(xx, yy);
    display.setTextColor(WHITE);
    display.setTextSize(1);
    number = numtime + 5;
    z5 = z5 + 1;
    display.println(number);
    display.display();
  }
  if (IrReceiver.decodedIRData.command == BUTT_6) {
    display.clearDisplay();
    delay(1);
    discal();
    display.setCursor(xx, yy);
    display.setTextColor(WHITE);
    display.setTextSize(1);
    number = numtime + 6;
    z6 = z6 + 1;
    display.println(number);
    display.display();
  }
  if (IrReceiver.decodedIRData.command == BUTT_7) {
    display.clearDisplay();
    delay(1);
    discal();
    display.setCursor(xx, yy);
    display.setTextColor(WHITE);
    display.setTextSize(1);
    number = numtime + 7;
    z7 = z7 + 1;
    display.println(number);
    display.display();
  }
  if (IrReceiver.decodedIRData.command == BUTT_8) {
    display.clearDisplay();
    delay(1);
    discal();
    display.setCursor(xx, yy);
    display.setTextColor(WHITE);
    display.setTextSize(1);
    number = numtime + 8;
    z8 = z8 + 1;
    display.println(number);
    display.display();
  }
  if (IrReceiver.decodedIRData.command == BUTT_9) {
    display.clearDisplay();
    delay(1);
    discal();
    display.setCursor(xx, yy);
    display.setTextColor(WHITE);
    display.setTextSize(1);
    number = numtime + 9;
    z9 = z9 + 1;
    display.println(number);
    display.display();
  }
  if (IrReceiver.decodedIRData.command == BUTT_0) {
    display.clearDisplay();
    delay(1);
    discal();
    display.setCursor(xx, yy);
    display.setTextColor(WHITE);
    display.setTextSize(1);
    number = numtime + 0;
    z0 = z0 + 1;
    display.println(number);
    display.display();
  }
}
//end of num function

// runcal function,which contains the arithmetic functions to tell the alu what to perform by taking in the IR signal
void runcal() {
  if (IrReceiver.decode()) {

    num();
    if (IrReceiver.decodedIRData.command == PLAY_BUTT) {
      number1 = number;
      xx = 40;
      display.clearDisplay();
      delay(1);
      discal();
      display.setCursor(25, 30);
      display.setTextColor(WHITE);
      display.setTextSize(1);
      display.println(number1);
      display.setCursor(35, 30);
      display.setTextColor(WHITE);
      display.setTextSize(1);
      display.println("+");
      display.setCursor(60, 30);
      display.println(number2);
      display.display();
    }
    if (IrReceiver.decodedIRData.command == UP_BUTT1) {
      number2 = number;
      result = number1 + number2;
      display.clearDisplay();
      delay(1);
      discal();
      display.setCursor(0, 30);
      display.setTextColor(WHITE);
      display.setTextSize(1);
      display.println(result);
      display.setCursor(0, 50);
      display.println("addition");
      display.display();
    }

    if (IrReceiver.decodedIRData.command == DISPLAY_BUTT) {
      number1 = 0;
      number2 = 0;
      numtime = 0;
      number = 0;
      disnum1 = 0;
      disnum2 = 0;
    }
    if (IrReceiver.decodedIRData.command == LEFT_BUTT1) {
      number2 = number;
      result = number1 * number2;
      display.clearDisplay();
      delay(1);
      discal();
      display.setCursor(0, 30);
      display.setTextColor(WHITE);
      display.setTextSize(1);
      display.println(result);
      display.setCursor(0, 50);
      display.println("multiplicaion");
      display.display();
    }
    if (IrReceiver.decodedIRData.command == RIGHT_BUTT1) {
      number2 = number;
      result = number1 / number2;
      display.clearDisplay();
      delay(1);
      discal();
      display.setCursor(0, 30);
      display.setTextColor(WHITE);
      display.setTextSize(1);
      display.println(result);
      display.setCursor(0, 50);
      display.println("division");
      display.display();
    }
    if (IrReceiver.decodedIRData.command == DOWN_BUTT1) {
      number2 = number;
      result = number1 - number2;
      display.clearDisplay();
      delay(1);
      discal();
      display.setCursor(0, 30);
      display.setTextColor(WHITE);
      display.setTextSize(1);
      display.println(result);
      display.setCursor(0, 50);
      display.println("subraction");
      display.display();
    }

    if (IrReceiver.decodedIRData.command == ENTER_BUTT) {
      number2 = number;
      result = pow(number1, number2);
      display.clearDisplay();
      delay(1);
      discal();
      display.setCursor(0, 30);
      display.setTextColor(WHITE);
      display.setTextSize(1);
      display.println(result);
      display.setCursor(0, 50);
      display.println("power");
      display.display();
    }
    IrReceiver.resume();
    delay(responsetime);
  }
}
//end of run cal function
