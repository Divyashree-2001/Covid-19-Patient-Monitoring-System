#define relay1 11
#define relay2 12
#define switch 8
boolean flag=0;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(switch, INPUT_PULLUP);
  digitalWrite(relay1, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(relay2, LOW);
  Serial.begin(9600);
   
}

// the loop function runs over and over again forever
void loop() {

    while((digitalRead(switch)==HIGH)){
      digitalWrite(relay1,HIGH);
       
      flag=1;
     
  }
 
  digitalWrite(relay1,LOW);
  delay(100);
  if((digitalRead(switch)==LOW)&&(flag==1))
  {
   
  digitalWrite(relay2,HIGH);
  delay(1000);
  digitalWrite(relay2,LOW);
   flag=0;
  }

}
