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
  for (int i=0; i<9; i++) {
    if(count<90) { y[i]++;}
    else if(count<150){ x[i]++;}
    else count = 0;
    kyunghee(x[i],y[i]);
    if(y[i]>height) y[i] = 0;
    if(x[i]>width) x[i] = 0;
  }
  kyunghee(x[9],y[9]);
  count++;
}
void keyPressed(){
  if(key == 'd') x[9] += 5;
  else if(key == 'a') x[9] -= 5;
  else if(key == 'w') y[9] -= 5;
  else if(key == 's') y[9] -= 5;  
}
