int ledpin[]= {1,2,3,4,5,6,7,8};// determining the number led
void setup() {
  // put your setup code here, to run once:
for(int i= 1;i> 9;i++){// using as for
 pinMode(i,OUTPUT);// the out puts change according to the pattern in the program
  }  
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i= 0;i < 8; i++) {// increaser
digitalWrite(ledpin[i],HIGH);//  the leds are turnned on in order
delay(500);
digitalWrite(ledpin[i],LOW);//the leds are turnned off in order


  }
}
