

import processing.serial.*;

// The serial port:
Serial myPort;   


int r=0;
int g=0;
int b=0;
int rx1=10;
int ry1=30;
int sizeW=80;
int  sizeH=360;
int gap=20;
Box[] boxes ={
  new Box(rx1, ry1, sizeW, sizeH, 0, 0, 0), 
  new Box(rx1+sizeW+gap, ry1, sizeW, sizeH, 0, 0, 0), 
  new Box((sizeW+gap)*2, ry1, sizeW, sizeH, 0, 0, 0), 
  new Box(rx1+(sizeW+gap)*3, ry1, sizeW, sizeH, 0, 0, 0)
};

void setup() {
  // List all the available serial ports:
printArray(Serial.list());
  myPort = new Serial(this, "/dev/cu.Bluetooth-Incoming-Port", 9600);
  size(400, 400);

 
  background (255);
}
void draw() {
  //rect(rx1, ry1, sizeW, sizeH, 7);
  //fill(r,g,b)  ;
  //rect(rx1+sizeW+gap, ry1, sizeW, sizeH, 7);
  // rect(rx1+(sizeW+gap)*2, ry1, sizeW, sizeH, 7);
  //  rect(rx1+(sizeW+gap)*3, ry1, sizeW, sizeH, 7);
  for( int i=0; i<4; i++){
  boxes[i].show();
  };
}

void mousePressed() {
 
    if (boxes[0].x <= mouseX && mouseX <= boxes[0].x + boxes[0].w && boxes[0].y <= mouseY && mouseY <= boxes[0].y + boxes[0].h) {
      boxes[0].r = 255;
      boxes[0].g = 0;
      boxes[0].b =0;
      // Send a capital A out the serial port:
      println("Sending a");
      myPort.write("a");

    }
    
     if (boxes[1].x <= mouseX && mouseX <= boxes[1].x + boxes[1].w && boxes[1].y <= mouseY && mouseY <= boxes[1].y + boxes[1].h) {
      boxes[1].r = 0;
      boxes[1].g = 0;
      boxes[1].b =255;
       println("Sending b");
      myPort.write("b");
    }
     
       if (boxes[2].x <= mouseX && mouseX <= boxes[2].x + boxes[2].w && boxes[2].y <= mouseY && mouseY <= boxes[2].y + boxes[2].h) {
      boxes[2].r = 0;
      boxes[2].g = 255;
      boxes[2].b =0;
       println("Sending c");
      myPort.write("c");
      
    }
    
      if (boxes[3].x <= mouseX && mouseX <= boxes[3].x + boxes[3].w && boxes[3].y <= mouseY && mouseY <= boxes[3].y + boxes[3].h) {
      boxes[3].r = 255;
      boxes[3].g = 220;
      boxes[3].b =0;
      println("Sending d");
      myPort.write("d");
      
    }
    
    
    
    
      

}
