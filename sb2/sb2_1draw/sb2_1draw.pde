float x,y=0;
void setup(){
  size(600,400);
  x = 150;
  kyunghee();
}
void draw(){
  background(120);
  y++;
  kyunghee();
}
void kyunghee(){
  circle(x,y,150);
  circle(x-30,y-20,50);
  circle(x+30,y-20,50);
}
