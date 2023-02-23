float [] x,y;
void setup(){
  size(600,400);
  x = new float[2];
  y = new float[2];
  x[0] = 100;
  x[1] = 300;
  y[0] = 0;
  y[1] = 50;
}
void draw(){
  background(120);
  y[0] += 2;
  y[1]++;
  kyunghee(x[0],y[0]);
  kyunghee(x[1],y[1]);
}
