void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  Serial.begin(9600); 
}
 void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    switch(Serial.read())
    {
      case 'i':
      intermitente();
      break;
      case 'f': 
      frenar();
      break;
    }
    delay(100);
  }
 }

 void intermitente(){
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
 }
 void frenar(){
 }
