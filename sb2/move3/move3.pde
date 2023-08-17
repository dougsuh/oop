float ax,ay,ad,avx;
float bx,by,bd,bvx;
float cx,cy,cd,cvx;
void setup(){
  size(600,300);
  ax = 100;
  ay = 100;
  ad = 10;
  avx = 2;
  bx = 100;
  by = 150;
  bd = 15;
  bvx = 1;
  cx = 100;
  cy = 200;
  cd = 5;
  cvx = 3;
}
void draw(){
  background(120);
  ax += avx;                                   
  Life(ax,ay,ad);
  bx += bvx;                                
  Life(bx,by,bd);
  cx += cvx;                                     
  Life(cx,cy,cd);
}
void Life(float x,float y, float d){
  ellipse(x,y,d*10,d*6);
  circle(x-d*2,y-d*1.5,d*2);
  arc(x+d*2,y-d*1.5,d*2,d*2,PI,2*PI);
  arc(x,y,d*6,d*2,0,PI);  
}
