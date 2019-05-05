class Box {

  int r=0;
  int g=0;
  int b=0;
  int x=0;
  int y=0;
  int w;
  int h;
  int gap=20;

  Box(int x, int y, int w, int h, int r, int g, int b) {
    this.x =x;
    this.y =y;
    this.w=w;
    this.h=h;
    this.r=r;
    this.g=g;
    this.b=b;
  }
 void show() {
    fill(this.r, this.g, this.b);
    rect(this.x, this.y, this.w, this.h);
  }
}
