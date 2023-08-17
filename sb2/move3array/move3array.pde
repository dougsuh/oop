float [] xx,yy,dd,vx;
void setup(){
  size(600,300);
  xx = new float[3];
  yy = new float[3];
  dd = new float[3];
  vx = new float[3];
  for(int i=0;i<3;i++){
    xx[i] = 100;
    yy[i] = 100 + i*50;
    dd[i] = 5 + i*5;
    vx[i] = 1 + i;
  }
}
void draw(){
  background(0,255,255);  
  for(int i=0;i<3;i++){
    xx[i] += vx[i];                                   
    Life(xx[i],yy[i],dd[i]);
    if(xx[i] > width) xx[i] = 0;
  }
}
void Life(float x,float y, float d){
  ellipse(x,y,d*10,d*6);
  circle(x-d*2,y-d*1.5,d*2);
  arc(x+d*2,y-d*1.5,d*2,d*2,PI,2*PI);
  arc(x,y,d*6,d*2,0,PI);  
}
