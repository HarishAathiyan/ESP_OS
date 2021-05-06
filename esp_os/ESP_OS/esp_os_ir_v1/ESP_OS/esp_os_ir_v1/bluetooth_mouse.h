char color=BLACK;
char color1=BLACK;
char colormin=BLACK;
char colormax=BLACK;
char colorclose=BLACK;
void nomovps2() {
  RIGHT_BUTTps2 = 1;
  LEFT_BUTTps2 = 1;
  UP_BUTTps2 = 1;
  DOWN_BUTTps2 = 1;
}
void bluetooth_mouse(){
  if (Serial2.available() > 0)
  {
    String value = Serial2.readStringUntil('#');
    if (value.length() == 7)
    {
      String value = Serial2.readStringUntil('#');
      String angle = value.substring(0, 3);
      String strength = value.substring(3, 6);
      String button = value.substring(6, 8);
      int spdd = strength.toInt() / mspeed;
      spd = spdd;
      if(button.toInt()==RIGHTCLICK && selps2==1){
        selps2=0;
        }
        if(button.toInt()== RIGHTCLICK && selps2==2  ){
fol=1; 
  }
   if(button.toInt()== 3 && fol==1  ){
fol=0; 
  }
     if( selps2!=2&& xps2>=0 && xps2<=16 && yps2>=0 && yps2<16  ){
color=WHITE;
if(button.toInt()==LEFTCLICK){
selps2=2;   
  }
     }
     
     else(color=BLACK);
     if( selps2!=2&& xps2>=0 && xps2<=16 && yps2>=22 && yps2<36  ){
color1=WHITE;
     }
     
     else(color1=BLACK);      
if(xps2>=xwin+29 && xps2<=xwin+40 && yps2>=ywin && yps2<=ywin+10 && selps2==2){
colormin=WHITE;  
  } 
  else(colormin=BLACK);
  if(xps2>=xwin+40 && xps2<=xwin+50 && yps2>=ywin && yps2<=ywin+10 && selps2==2){
colormax=WHITE;
if(button.toInt()==LEFTCLICK){
show1=1;
show=0;
selps2=3;


  } 
  
  }
    else(colormax=BLACK);
  if(xps2>=xwin+50 && xps2<=xwin+60 && yps2>=ywin && yps2<=ywin+10 && selps2==2){
colorclose=WHITE; 
if(button.toInt()==LEFTCLICK){
selps2=0; 
  } 
  }
    else(colorclose=BLACK);

      
     
  if(xps2>=108 && xps2<=128 && yps2<=10 && selps2==3){
colorclose=WHITE; 
if(button.toInt()==LEFTCLICK){
show=1;
show1=0;
selps2=0;
 
  }    
  }
  if(xps2>=98 && xps2<=108 && yps2<=10 && selps2==3){
colormax=WHITE;  
 
  }

  if(xps2>=88 && xps2<=98 && yps2<=10 && selps2==3){
colormin=WHITE;
if(button.toInt()==LEFTCLICK){
selps2=2;
show1=0;
show=1;  
  }   
  }
 

      if (strength.toInt() > 0) {
        if (angle.toInt() <= 45 && angle.toInt() <= 315) {
          RIGHT_BUTTps2 = 0;
        }
        else(RIGHT_BUTTps2 = 1);

        if (angle.toInt() >= 135 && angle.toInt() <= 225 ) {
          LEFT_BUTTps2 = 0;
        }
        else(LEFT_BUTTps2 = 1);

        if (angle.toInt() <= 315 && angle.toInt() >= 225) {
          DOWN_BUTTps2 = 0;
        }
        else(DOWN_BUTTps2 = 1);
        if (angle.toInt() <= 135 && angle.toInt() >= 45 ) {
          UP_BUTTps2 = 0;
        }
        else(UP_BUTTps2 = 1);
      }
      else(nomovps2());
      Serial.println("x= ");
      Serial.println(xps2);
      Serial.println("y= ");
      Serial.println(yps2);
      Serial.flush();
      value = "";
    }
  }  
  }
  
