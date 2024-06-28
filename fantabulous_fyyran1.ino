int led_pin=6;
int button_pin=4;
int buttonstate=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(led_pin,OUTPUT);
  pinMode(button_pin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonstate=digitalRead(button_pin);
  if(buttonstate==HIGH)
  {
    digitalWrite(led_pin,HIGH);
  }
  else{
    digitalWrite(led_pin,LOW);
  }

}