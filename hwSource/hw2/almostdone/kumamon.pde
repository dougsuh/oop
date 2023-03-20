int d = 5;

void kumamon(float x,float y){
  float k = 8*d;
  fill(1,1,1);
  ellipse(x,y,40*d,30*d);  //얼굴
  circle(x+16*d,y-12*d,k);  //오른쪽귀
  circle(x-16*d,y-12*d,k);  //왼쪽귀
  fill(255,0,0);
  circle(x+16*d,y+5*d,k+d/2);  //오른쪽볼
  circle(x-16*d,y+5*d,k+d/2);  //왼쪽볼
  fill(255);
  circle(x-10*d,y-4*d,k);  //왼쪽눈
  circle(x+10*d,y-4*d,k);  //오른쪽눈
  ellipse(x,y+5.5*d,20*d,15*d);  //흰색입
  circle(x+16*d,y-12*d,k*0.5+0.5*d);  //안쪽귀(오른쪽)
  circle(x-16*d,y-12*d,k*0.5+0.5*d);  //안쪽귀(왼쪽)
  curve(x-15*d,y,x-13*d,y-10*d,x-8*d,y-10*d,x-6*d,y);  //왼쪽눈썹
  curve(x+6*d,y,x+8*d,y-10*d,x+13*d,y-10*d,x+15*d,y);  //오른쪽눈썹
  fill(1,1,1);
  ellipse(x,y+d,6*d,4.5*d);  //코
  ellipse(x-10*d,y-4*d,1.1*d,2.6*d);  //왼쪽눈동자
  ellipse(x+10*d,y-4*d,1.1*d,2.6*d);  //오른쪽눈동자
  ellipse(x,y+7.5*d,15*d,5*d);  //입
}
