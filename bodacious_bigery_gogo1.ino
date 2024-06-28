int buttonpin1=1;
int buttonpin2=2;
int buttonpin3=3;
int buttonpin4=4;
int ledpin=5;

int bs1=0;
int bs2=0;
int bs3=0;
int bs4=0;
void setup() {
 pinMode(buttonpin1,INPUT);
 pinMode(buttonpin2,INPUT);
 pinMode(buttonpin3,INPUT);
 pinMode(buttonpin4,INPUT);
 pinMode(ledpin,OUTPUT);

}

void loop() {
 bs1=digitalRead(buttonpin1);
 bs2=digitalRead(buttonpin2);
  bs3=digitalRead(buttonpin3);
   bs4=digitalRead(buttonpin4);
if(bs1&&bs3==1&&bs2==0&&bs4==0)
{
  digitalWrite(ledpin,HIGH);
  
}else{digitalWrite(ledpin,LOW);
}
}