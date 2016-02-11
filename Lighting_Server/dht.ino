
/*start dht */
void dhtReader() {  
  if( (millis() - previousTime) > 1000 ){
    
    myDHT.read11(DHT_pin);
    temp = (int)myDHT.temperature;
    humidity = (int)myDHT.humidity;
    previousTime = millis(); 
    Serial.println(temp);
    Serial.println(humidity);   
  }
}
