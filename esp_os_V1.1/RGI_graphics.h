

// declaration of the variable which totally change the colour of the shown image(invert colour)
char rcolor = WHITE;

//set the default values for the RGI graphics as it in default(first condtition)
void setdefaultRGI() {
  ri = 0;
  rxpos = 10;
  rypos = 10;
  rypos2 = 30;
  rxpos2 = 30;
  rLength = 10;
  rWidth = 10;
}

//the function which sets the cube 
void cubeRGI() {
  display.clearDisplay();
  display.drawRect(rxpos, rypos, rWidth, rLength, WHITE);
  display.drawRect(rxpos2, rypos2, rWidth, rLength, WHITE);
  display.drawLine(rxpos, rypos, rxpos2, rypos2, WHITE);
  display.drawLine(rxpos + rWidth, rypos + rLength, rxpos2 + rWidth, rypos2 + rLength, WHITE);
  display.drawLine(rxpos, rypos + rLength, rxpos2, rypos2 + rLength, WHITE);
  display.drawLine(rxpos + rWidth, rypos, rxpos2 + rWidth, rypos2, WHITE);
  display.display();
  rxlimit = rxpos2 + rWidth;
  rylimit = rypos2 + rLength;
}

//the IR remote commands.
void IRremoteRGI() {
  if (IrReceiver.decode()) {
    Serial.println(IrReceiver.decodedIRData.command);
    if (IrReceiver.decodedIRData.command == rUP_BUTT1 ) {
      rUP_BUTT = 0;

    }
    else(rUP_BUTT = 1);

    if (IrReceiver.decodedIRData.command == rDOWN_BUTT1 ) {
      rDOWN_BUTT = 0;
    }
    else(rDOWN_BUTT = 1);

    if (IrReceiver.decodedIRData.command == rENTER_BUTT1 ) {
      rSELECT_BUTT = 0;

    }
    else(rSELECT_BUTT = 1);
    if (IrReceiver.decodedIRData.command == rRETURN_BUTT1 ) {
      rBACK_BUTT = 0;

    }
    else(rBACK_BUTT = 1);

    if (IrReceiver.decodedIRData.command == rRIGHT_BUTT1) {
      rRIGHT_BUTT = 0;

    }
    else(rRIGHT_BUTT = 1);

    if (IrReceiver.decodedIRData.command == rLEFT_BUTT1 ) {
      rLEFT_BUTT = 0;

    }
    else(rLEFT_BUTT = 1);

    if (IrReceiver.decodedIRData.command == rVOL1BUTT ) {
      rP_BUTT = 0;

    }
    else(rP_BUTT = 1);
    if (IrReceiver.decodedIRData.command == rVOL2BUTT) {
      rL_BUTT = 0;

    }
    else(rL_BUTT = 1);
  }

  if (IrReceiver.decodedIRData.command == rENTER_BUTT1 && cubeselect == 0) {
    rxpos = rxpos + 1;
    rypos = rypos + 1;




  }

  if (IrReceiver.decodedIRData.command == rRETURN_BUTT1 && cubeselect == 0) {
    rxpos = rxpos - 1;
    rypos = rypos - 1;




  }
  if (IrReceiver.decodedIRData.command == rDOWN_BUTT1 && cubeselect == 0) {
    rxpos2 = rxpos2 + 1;
    rypos2 + rypos2 + 1;

  }

  if (IrReceiver.decodedIRData.command == rUP_BUTT1 && cubeselect == 0) {
    rxpos = rxpos + 1;
    rypos + rypos + 1;

  }
  if (rxpos == 138 || rypos == 74 || rWidth == 120 || rLength == 70) {
    rxpos = 10;
    rypos = 10;
    rypos2 = 30;
    rxpos2 = 30;
    rLength = 10;
    rWidth = 10;
    nxpos = 10;
    nypos = 30;
    nypos2 = 30;
    nxpos2 = 30;
    nLength = 10;
    nWidth = 10;
  }
  if (IrReceiver.decodedIRData.command == rUP_BUTT1 && cubeselect == 0) {
    rxpos = 10;
    rypos = 10;
    rypos2 = 30;
    rxpos2 = 30;
    rLength = 10;
    rWidth = 10;
    nxpos = 10;
    nypos = 30;
    nypos2 = 30;
    nxpos2 = 30;
    nLength = 10;
    nWidth = 10;
  }
  if (IrReceiver.decodedIRData.command == rLEFT_BUTT1 && cubeselect == 0) {
    rLength = rLength + 1;

  }
  if (IrReceiver.decodedIRData.command == rRIGHT_BUTT1 && cubeselect == 0) {
    rWidth = rWidth + 1;

  }
  if (IrReceiver.decodedIRData.command == rVOL1BUTT && cubeselect == 0) {
    rLength = rLength - 1;

  }
  if (IrReceiver.decodedIRData.command == rVOL2BUTT && cubeselect == 0) {
    rWidth = rWidth - 1;
    rWidth = rWidth - 1;

  }






  if (IrReceiver.decodedIRData.command == rSCAN1BUTT) {
    display.invertDisplay(true);
  }
  if (IrReceiver.decodedIRData.command == rSCAN2BUTT ) {
    display.invertDisplay(false);
  }
  IrReceiver.resume();
}
