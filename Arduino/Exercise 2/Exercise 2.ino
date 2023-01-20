void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); //makes pin 13 an OUTPUT. 
  pinMode(12,OUTPUT); //mmakes pin 12 an OUTPUT
  

}

void loop() {
  // put your main code here, to run repeatedly:
  //where conditionals and if happen 

  //turns pin 12(LED1) on 
  digitalWrite(12, HIGH);
  delay(500); //delays ms 
  //turns LED1 off 
  digitalWrite(12, LOW);
  delay(500); //delays 

  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);

}
