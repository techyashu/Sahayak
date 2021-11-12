#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include <Mouse.h>

RF24 radio(7, 8); // CE, CSN

int vx, vy;

char val='R';
int flag=0;
int buttonState1;
const byte address[6] = "00001";

struct package
{
  int a;
  int b;
  int c;
}pac;

void setup() {
  Serial.begin(9600);
  radio.begin();
  radio.openReadingPipe(0, address);
  radio.setPALevel(RF24_PA_MIN);
  radio.startListening();
  Mouse.begin();
  
}

int x(int y)
{
  return 1-y;
}

void loop() {
  if (radio.available()) {
    radio.read(&pac, sizeof(pac));

      vx= -(pac.a - 200) / 200;  
      vy= -(pac.b - 200) / 200 -2 ;
       
    

    buttonState1=pac.c;

  if(val == 'R')
 {
  if (buttonState1 >= 500) {
    Mouse.press(MOUSE_LEFT);
    delay(100);
    Mouse.release(MOUSE_LEFT);
    delay(50);
  }
 }

 if (val == 'G')
 {
   if (buttonState1 >= 500) {
    Mouse.press(MOUSE_RIGHT);
    delay(100);
    Mouse.release(MOUSE_RIGHT);
    delay(50);
  }
 }
 
  if(val == 'B')
 {

  if (buttonState1 >= 500) {
    flag=x(flag);
    if(x(flag)==1)
    Mouse.press(MOUSE_LEFT);
    if(x(flag)==0)
    Mouse.release(MOUSE_LEFT);
    
  }

  if((val != 'R')&&(val != 'G')&&(val != 'B')) //default
  {
    val ='R';
  }
  
 }


  Mouse.move(vx, vy);
  delay(20);
  
  if (Serial.available()) {
     val = Serial.read();
  }
  Serial.println(val);

    

  }
}
