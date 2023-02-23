float [] x,y;
void setup(){
  size(600,400);
  x = new float[10];
  y = new float[10];
  for(int i=0;i<10;i++){
    x[i] = random(0,600);
    y[i] = random(400);
    if((i%2) == 0){
      kyunghee(x[i],y[i]);
    } else {
      kyung2(x[i],y[i]);
    }    
  }
}
