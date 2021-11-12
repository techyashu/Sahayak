
import controlP5.*;                              
import processing.serial.*;

Serial port;

ControlP5 cp5;                                   
PFont font;

void setup() {

  size(240, 360);                               
  String portName = Serial.list()[0]; 
  port = new Serial(this, portName, 9600);

  cp5 = new ControlP5(this);
  font = createFont("calibri light bold", 20);   

  cp5.addButton("left_click")                        
    .setPosition(40, 60)                         
    .setSize(180, 60)                            
    .setFont(font)
    .setColorBackground(color(255, 0, 0))
    ;   
  cp5.addButton("right_click")                      
    .setPosition(40, 160)                        
    .setSize(180, 60)                            
    .setFont(font)
    .setColorBackground(color(0, 255, 0))
    ;
 cp5.addButton("left_hold")
    .setPosition(40, 260)                        
    .setSize(180, 60)                            
    .setFont(font)
    .setColorBackground(color(0, 0, 255))
    ;
}

void draw() {

  background(50, 50, 50);                       
  fill(255, 255, 255);                           
  textFont(font);
  text("Sahayak", 90, 30);           
}

void left_click() {
  port.write('R');
}

void right_click() {
  port.write('G');
}

void left_hold() {
  port.write('B');
}
