String voice;
int
led1 = 8, //Connect 1ST TRANSISTOR COLLECTOR To Pin #2
led2 = 9, //Connect 2ND TRANSISTOR COLLECTOR To Pin #3
led3 = 10, //Connect 3RD TRANSISTOR COLLECTOR To Pin #4
led4 = 11,//Connect 4TH TRANSISTOR COLLECTOR To Pin #5
led5 = 12,
led6 = 13;

 
void allon(){
     digitalWrite(led1, HIGH);
     digitalWrite(led2, HIGH);
     digitalWrite(led3, HIGH);
     digitalWrite(led4, HIGH);
     digitalWrite(led5,HIGH);
     digitalWrite(led6, HIGH); 
}
void alloff(){
     digitalWrite(led1, LOW);
     digitalWrite(led2, LOW);
     digitalWrite(led3, LOW);
     digitalWrite(led4, LOW);
     digitalWrite(led5,LOW);
     digitalWrite(led6,LOW);
     
}
 
void setup() {

  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6, OUTPUT);
}
 
void loop() {
  while (Serial.available()){  
  delay(10); 
  char c = Serial.read();
  
  if (c == '#') {break;}
  voice += c; 
  } 
  if (voice.length() > 0) {
    Serial.println(voice);
   
   
       if(voice == "*deactivate") {allon();}  
  else if(voice == "*all on"){alloff();} 
 
  
  else if(voice == "*fan off") {digitalWrite(led1, HIGH);}
  else if(voice == "*lights off.")digitalWrite(led2, HIGH);}
  else if(voice == "*TV off") {digitalWrite(led3, HIGH);}
  else if(voice == "*LED off") {digitalWrite(led4, HIGH);}
  else if(voice== "*garage lights off") {digitalWrite (led5, HIGH);}
  else if(voice== "*Garden lights off") {digitalWrite (led6, HIGH);}
  
 
 
  else if(voice == "*fan on") {digitalWrite(led1, LOW);}
  else if(voice == "*lights on.") {digitalWrite(led2, LOW);}
  else if(voice == "*TV on") {digitalWrite(led3, LOW);}
  else if(voice == "*LED on") {digitalWrite(led4, LOW);}
  else if(voice== "*garage lights on") {digitalWrite (led5, LOW);}
  else if(voice== "*Garden lights on") {digitalWrite (led6, LOW);}
  
  
   
voice="";}
