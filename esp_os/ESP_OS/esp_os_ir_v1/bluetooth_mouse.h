
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
      int spdd = strength.toInt() / 10;
      spd = spdd;
      if(button.toInt()==LEFTCLICK && xps2==0 && yps2==54){
        selps2=1;
        }
      if(button.toInt()==RIGHTCLICK && selps2==1){
        selps2=0;
        }
       if(button.toInt()== RIGHTCLICK){
        selps2=2;
        }
        if(button.toInt()== RIGHTCLICK && selps2==2  ){
fol=1; 
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
  
