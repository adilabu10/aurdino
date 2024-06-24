int buttonpin=4;
int ledpin=5;
int buttonstate=0;

void setup(){
 pinMode(ledpin,OUTPUT);
 pinMode(buttonpin,INPUT);
  }
  void loop(){
    buttonstate=digitalRead(buttonpin);
    if(buttonstate==HIGH)
    {
     digitalWrite(ledpin,HIGH);
     delay(1000);
      }
      else
      {
        digitalWrite(ledpin,LOW);
        delay(1000);
        
      }
     }
  