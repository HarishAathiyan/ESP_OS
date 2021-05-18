String total;
String totalcopy;
String total1;
int iMIT;

// The no movement contition where the program does not move the cursor even another task is
// running to move the cursor.

void nomovMIT()
{

  xps2 = xps2;
  yps2 = yps2;
}

// different properties of the MIT keyboard applicable to the desktop OS
void properties_MIT()
{
  if (totalcopy == RIGHTCLICK_MIT && selps2 == 1)
  {
    selps2 = 0;
  }
  if (totalcopy == "S")
  {
    xwin=xps2;
    ywin=yps2;
  }
  if (totalcopy == RIGHTCLICK_MIT && selps2 == 2)
  {
    totalcopy = "";
    fol = 1;
  }
  if (totalcopy == "Q" && fol == 1)
  {
    fol = 0;
  }
  if (selps2 != 2 && xps2 >= 0 && xps2 <= 16 && yps2 >= 0 && yps2 < 16)
  {
    color = WHITE;
    if (totalcopy == LEFTCLICK_MIT)
    {
      totalcopy = "";
      selps2 = 2;
    }
  }

  else
    (color = BLACK);
  if (selps2 != 2 && xps2 >= 0 && xps2 <= 16 && yps2 >= 22 && yps2 < 36)
  {
    color1 = WHITE;
    if (totalcopy == LEFTCLICK_MIT)
    {
      totalcopy = "";
      selps2 = 4;
    }
  }

  else
    (color1 = BLACK);
  if (xps2 >= xwin + 29 && xps2 <= xwin + 40 && yps2 >= ywin && yps2 <= ywin + 10 && selps2 == 2)
  {
    colormin = WHITE;
  }
  else
    (colormin = BLACK);
  if (xps2 >= xwin + 40 && xps2 <= xwin + 50 && yps2 >= ywin && yps2 <= ywin + 10 && selps2 == 2)
  {
    colormax = WHITE;
    if (totalcopy == LEFTCLICK_MIT)
    {
      totalcopy = "";
      show1 = 1;
      show = 0;
      selps2 = 3;
    }
  }
  else
    (colormax = BLACK);
  if (xps2 >= xwin + 50 && xps2 <= xwin + 60 && yps2 >= ywin && yps2 <= ywin + 10 && selps2 == 2)
  {
    colorclose = WHITE;
    if (totalcopy == LEFTCLICK_MIT)
    {
      totalcopy = "";
      selps2 = 0;
    }
  }
  else
    (colorclose = BLACK);

  if (xps2 >= 108 && xps2 <= 128 && yps2 <= 10 && selps2 == 3)
  {
    colorclose = WHITE;
    if (totalcopy == LEFTCLICK_MIT)
    {
      totalcopy = "";
      show = 1;
      show1 = 0;
      selps2 = 0;
    }
  }
  if (xps2 >= 98 && xps2 <= 108 && yps2 <= 10 && selps2 == 3)
  {
    colormax = WHITE;
  }

  if (xps2 >= 88 && xps2 <= 98 && yps2 <= 10 && selps2 == 3)
  {
    colormin = WHITE;
    if (totalcopy == LEFTCLICK_MIT)
    {
      totalcopy = "";
      selps2 = 2;
      show1 = 0;
      show = 1;
    }
  }
  if (xps2 >= xwin + 50 && yps2 >= ywin + 20 && yps2 >= ywin && selps2 == 2)
  {
    pagewin = 4;
  }
  if (xps2 >= xwin + 50 && yps2 >= ywin + 10 && yps2 >= ywin && selps2 == 2)
  {
    pagewin = 0;
  }
  if (xps2 >= xwin + 50 && yps2 >= ywin + 30 && yps2 >= ywin && selps2 == 2)
  {
    pagewin = 2;
  }
  if (xps2 >= xwin + 50 && yps2 >= ywin + 40 && yps2 >= ywin && selps2 == 2)
  {
    pagewin = 3;
  }
}

// the function which should be used in desktop mode in order to run the MIT keyboard application with the OS
void bluetooth_mouse_MIT()
{
  properties_MIT();
  if (Serial2.available() > 0)
  {
    totalcopy = Serial2.readStringUntil('#');
  
    if (totalcopy == "c")
    {
      totalcopy = "";
      total = "";
    }
    if (totalcopy == "s")
    {
      totalcopy = "";
      total = total + " ";
    }
    if (totalcopy == "l")
    {
      totalcopy = "";
      iMIT = 1;
        LEFT_BUTTps2=0;
    }
    else(LEFT_BUTTps2=1);

    if (totalcopy == "g")
    {
      totalcopy = "";
      iMIT = 2;
          RIGHT_BUTTps2=0;
    }
    else(RIGHT_BUTTps2=1);

    if (totalcopy == "d")
    {
      totalcopy = "";
      iMIT = 4;
          DOWN_BUTTps2=0;
    }
    else(DOWN_BUTTps2=1);

    if (totalcopy == "u")
    {
      totalcopy = "";
      iMIT = 3;
         UP_BUTTps2=0;
    }
    else(UP_BUTTps2=1);

    total = total + totalcopy;
    total1 = total1 + total;
  }
  else(UP_BUTTps2=1);
  switch (iMIT)
  {
  case 0:

    break;
  case 1:
    xps2 = xps2 - 1;
    break;
  case 2:
    xps2 = xps2 + 1;
    break;
  case 3:
    yps2 = yps2 - 1;
    break;
  case 4:
    yps2 = yps2 + 1;
    break;
  };

}
