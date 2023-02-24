float [] x, y;
void setup() {
  size(1000, 800);
  x = new float[10];
  y = new float[10];
  for (int i=0; i<10; i++) {
    x[i] = random(width);
    y[i] = random(height);
  }
}
int count = 0;
void draw() {
  background(120);
  fill(250,0,0);
  square(100,150,30);
  fill(255);
  for (int i=0; i<9; i++) {
    if(count<90) { y[i]++;}
    else if(count<150){ x[i]++;}
    else count = 0;
    kyunghee(x[i],y[i]);
    if(y[i]>height) y[i] = 0;
    if(x[i]>width) x[i] = 0;
  }
  x[9] = mouseX;
  y[9] = mouseY;
  kyunghee(x[9],y[9]);
  if(x[9]>100 && x[9]<130 && y[9]>150 && y[9]<180){
    fill(250,0,0);
    textSize(90);
    text("Boom!!",40,120);
  }
  count++;
}
