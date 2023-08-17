float ax,ay,ad;
void setup(){
  size(600,300);
  ax = 100;
  ay = 100;
  ad = 10;
}
void draw(){
  background(120);
  ay++;                                   
  Life(ax,ay,ad);
}
void Life(float x,float y, float d){
  ellipse(x,y,d*10,d*6);
  circle(x-d*2,y-d*1.5,d*2);
  arc(x+d*2,y-d*1.5,d*2,d*2,PI,2*PI);
  arc(x,y,d*6,d*2,0,PI);  
}
