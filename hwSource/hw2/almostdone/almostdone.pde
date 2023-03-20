float [] a, b, v;
//import processing.sound.*;
//SoundFile file;
//SoundFile file2;
//SoundFile file3;
void setup() {
  size(1000, 800);
  a = new float[6];  //캐릭터들의 x좌표
  b = new float[6];  //캐릭터들의 y좌표
  a[0] = 250;
  a[1] = 750;  //처음 등장하는 쿠마몬 2개의 위치를 최대한 벌리기 위해 x좌표를 직접 설정
  for (int i=2; i<6; i++) {  //나머지 x좌표 무작위 선정
    a[i] = random(100, 900);
  }
  for (int i=0; i<6; i++) {  //y좌표는 160으로 고정
    b[i] = 160;
  }
  v = new float[6];  //속도 v
  for ( int i=0; i<6; i++) {
    if (i%2==0) v[i] = 1;  //i가 짝수일 때 v=1
    else v[i] = 2;  //i가 홀수일 때 v=2
    //  file = new SoundFile(this,"background5min.mp3");
    //  file.play();
  }
  textSize(40);  // suh
}
int count = 0;  //시간이 지날수록 count가 커짐->타이머 역할
void draw() {
  background(120);  //배경 회색
  if (count<400) {  //1라운드: 쿠마몬 2개        fill(0);  //검정        textSize(40);  //글자크기
    for (int i=0; i<2; i++)     act(1,i);
  } else if (count>=400 && count<800) {  //2라운드: 쿠마몬 2개 + 심슨 2개
    for (int i=0; i<4; i++)     act(2,i);
  } else if (count>=800 && count<1200) {
    for (int i=0; i<6; i++)     act(3,i);
  } else {
    for (int i=0; i<6; i++)     act(4,i);
  }
  count++;
}
void act(int r,int i) {
  text(" Round "+r, 800, 50);  //라운드 표시       fill(0);
  b[i] += v[i];
  if (i<2) kumamon(a[i], b[i]);
  else if(i<4) simson(2, a[i], b[i]);
  else hobbang(a[i], b[i], 45);
  if (b[i]<100) v[i] = -v[i];  //캐릭터가 윗천장에 닿았을 때 방향을 바꾸도록
  text("Point: "+int(count), 800, 100);  //실시간 점수 표시
  choi(mouseX, 500);  //bar
  if(r != 4) collide();
  else collide2();
}
void collide() {
  for (int i=0; i<6; i++) {
    if (sqrt((mouseX-a[i])*(mouseX-a[i]))<=300 && b[i] > float(620)) {
      v[i] = -v[i];  //바의 x,y좌표와 캐릭터 x,y좌표 조건에 따라 튕기도록 설정
      //      file3 = new SoundFile(this,"bounce.wav");
      //      file3.play();
    } else if (sqrt((mouseX-a[i])*(mouseX-a[i]))>300 && b[i] > float(730)) {  //바와 캐릭터가 만나지 않을 경우
      fill(0, 200, 200);
      textSize(90);
      text("Result: "+int(count)+"points", 40, 100);  //최종 점수 표시
      stop();  //게임 오버
      //      file2 = new SoundFile(this, "gameover.wav");
      //      file2.play();
    }
    //d=5일 때, 720
  }
}
void collide2() {
  for (int i=0; i<6; i++) {
    if (sqrt((mouseX-a[i])*(mouseX-a[i]))<=150 && b[i] > float(620)) {
      v[i] = -v[i];  //바의 x,y좌표와 캐릭터 x,y좌표 조건에 따라 튕기도록 설정
      //      file3 = new SoundFile(this, "bounce.wav");
      //      file3.play();
    } else if (sqrt((mouseX-a[i])*(mouseX-a[i]))>150 && b[i] > float(730)) {  //바와 캐릭터가 만나지 않을 경우
      fill(0, 200, 200);
      textSize(90);
      text("Result: "+int(count)+"points", 40, 100);  //최종 점수 표시
      stop();  //게임 오버
      //      file2 = new SoundFile(this, "gameover.wav");
      //      file2.play();
    }
    //d=5일 때, 720
  }
}
