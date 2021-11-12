#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

#include <Wire.h>
#include <I2Cdev.h>
#include <MPU6050.h>


RF24 radio(7, 8); // CE, CSN
const byte address[6] = "00001";

MPU6050 mpu;
int16_t ax, ay, az, gx, gy, gz;
int vx, vy;

struct package
{
  int a;
  int b;
  int c;
}pac;

void setup() {
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
  
  pinMode(A0, INPUT);

  Wire.begin();
  mpu.initialize();
  
        if (!mpu.testConnection()) 
        {
          while (1);
        }
        
}
void loop() {
  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

  pac.a= gx;  
  
  pac.b= gz; 

  int buttonState1 = analogRead(A0);
  
  pac.c=buttonState1;
 
  radio.write(&pac, sizeof(pac));
  delay(10);
}
