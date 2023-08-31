// MQ Telemetry TransportS
//https://www.hivemq.com/demos/websocket-client/

#define led 13 
void setup() 
{
  dht.begin();
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}
void loop() 
{ 
  float temp = dht.readTemperature();
  float umi = dht.readHumidity();
  json["temperature"] = temp;
  json["humidity"] = umi;
  serializeJson(json, Serial);
  Serial.println();
  delay(500);
}
