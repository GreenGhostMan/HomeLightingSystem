/** Start toggle **/
void toggleOnOff(){
  String str = "";
  char c;
  if(bt.available() > 0) {
      while(bt.available() ) {
        c = bt.read();
        str.concat(c);
      }
      delay(15);
        String str_pin = str.substring(6,8);
        int pin = str_pin.toInt();
        if((pin > 1 && pin < 8) || (pin > 19 && pin < 33) || (pin == 99)  ) {
          if(pin== 99){
            for(int i=2;i<8;i++) {
              pinMode(i, OUTPUT);
              digitalWrite(i, LOW);
            }
          }
          else{
            pinMode(pin, OUTPUT);
            if(digitalRead(pin) == 1){
              digitalWrite(pin, LOW);
            } 
            else {
            digitalWrite(pin, HIGH);
            }
          }          
        }        
        if(str == "getDHT") {
          dhtReader();
          sprintf(buffer,"%d,%d,",temp,humidity);
          bt.write(buffer);
        }
  }
}
