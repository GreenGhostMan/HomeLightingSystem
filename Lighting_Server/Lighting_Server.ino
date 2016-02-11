
/* Home Lighting System
 *  ==========================================
 *  ! Use Arduino Nano (lighting pins = 14 )
 *  ==========================================
 *    BuddhaRoom    pin 2
 *    LivingRoom    pin 3//
 *    MasterBedRoom pin 4//
 *    BedRoom       pin 5//
 *    Kitchen       pin 6//
 *    WaterPump     pin 7
 *    LivingRoom2   pin 8
 *    LivingRoom3   pin 9
 *    MasterBedR2   pin A0
 *    BedRoom2      pin A1
 *    BedRoom3      pin A2
 *    DinningR      pin A3
 *    Tv            pin A4
 *    Toilet1       pin A5
 *    Toilet2       reserve
 *    Door          reserve
 *    Other1        reserve
 *    Other2        reserve
 *    Other3        reserve 
 *  ==========================================
 *  ! if Arduino Mega Add this pins
 *  ==========================================
 *    LivingRoom2   pin 20
 *    LivingRoom3   pin 21
 *    MasterBedR2   pin 22
 *    BedRoom2      pin 23
 *    BedRoom3      pin 24
 *    DinningR      pin 25
 *    Tv            pin 26
 *    Toilet1       pin 27
 *    Toilet2       pin 28
 *    Door          pin 29
 *    Other1        pin 30
 *    Other2        pin 31
 *    Other3        pin 32
 *    left these pin
 *    pin 13, A6,A7(Nano)
 *    ****************************************
 *    bt address 20:16:06:12:93:04
 *    create vairable cameraData,dimLight
 *    Written by GhostMan 
 *    ****************************************
 */
 #include <SoftwareSerial.h>
 #include <dht.h>
 #define DHT_pin 12
SoftwareSerial bt(11,10);   //(rx,tx)-> bluetooth(tx,rx)
dht myDHT;
unsigned long previousTime = 0;
int temp,humidity;
char buffer[10];

void toggleOnOff();
void dhtReader();
void outPins();
void setup() {
  outPins();
  Serial.begin(9600);
  bt.begin(9600);
}
void loop() {
  toggleOnOff();
  delay(50);
}


