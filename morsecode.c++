// C++ code
//
int LED_BULTIN1 =13;
int LED_BULTIN2 =12;
int LED_BULTIN3=11;
int LED_BULTIN4=10;
int LED_BULTIN5=9;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // L
  digitalWrite(LED_BULTIN1, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BULTIN1, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(LED_BULTIN1, HIGH);
  delay(3000); 
  digitalWrite(LED_BULTIN1, LOW);
  delay(1000); 
  
  digitalWrite(LED_BULTIN1, HIGH);
  delay(1000); 
  digitalWrite(LED_BULTIN1, LOW);
  delay(1000); 
  
   digitalWrite(LED_BULTIN1, HIGH);
  delay(1000); 
  digitalWrite(LED_BULTIN1, LOW);
  delay(2000); 
  //A
  
  digitalWrite(LED_BULTIN2, HIGH);
  delay(1000); 
  digitalWrite(LED_BULTIN2, LOW);
  delay(1000);
  
  digitalWrite(LED_BULTIN2, HIGH);
  delay(3000); 
  digitalWrite(LED_BULTIN2, LOW);
  delay(2000); 
 //U 
   
  digitalWrite(LED_BULTIN3, HIGH);
  delay(1000); 
  digitalWrite(LED_BULTIN3, LOW);
  delay(1000); 
    
  digitalWrite(LED_BULTIN3, HIGH);
  delay(1000); 
  digitalWrite(LED_BULTIN3, LOW);
  delay(1000); 
  
    digitalWrite(LED_BULTIN3, HIGH);
  delay(3000);
  digitalWrite(LED_BULTIN3, LOW);
  delay(2000); 
 //R
   digitalWrite(LED_BULTIN4, HIGH);
  delay(1000); 
  digitalWrite(LED_BULTIN4, LOW);
  delay(1000); 
  
  digitalWrite(LED_BULTIN4, HIGH);
  delay(3000); 
  digitalWrite(LED_BULTIN4, LOW);
  delay(2000);
  
  digitalWrite(LED_BULTIN4, HIGH);
  delay(1000); 
  digitalWrite(LED_BULTIN4, LOW);
  delay(1000); 
 //A
   digitalWrite(LED_BULTIN5, HIGH);
  delay(1000); 
  digitalWrite(LED_BULTIN5, LOW);
  delay(1000); 
  
  digitalWrite(LED_BULTIN5, HIGH);
  delay(3000);
  digitalWrite(LED_BULTIN5, LOW);
  delay(2000); 
 
 
}