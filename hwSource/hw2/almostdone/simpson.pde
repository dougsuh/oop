void simson(float s,float x,float y){ 
  fill(250,200,30);         //얼굴
  quad( x-s*32,y-s*20, x-s*16,y+s*20, x+s*20,y+s*16, x+s*8,y-s*32);
  quad( x-s*16,y+s*20, x-s*20,y+s*28, x+s*4,y+s*32,  x+s*20,y+s*16);
  triangle(x-s*32,y-s*20,  x-s*32.5,y-s*24.5, x-s*27,y-s*21.5);      //머리
  triangle(x-s*27,y-s*21.5, x-s*27,y-s*27, x-s*23,y-s*22.7);
  triangle(x-s*23,y-s*22.7, x-s*21.5,y-s*29, x-s*17,y-s*24.5);
  triangle(x-s*17,y-s*24.5, x-s*14,y-s*30, x-s*11,y-s*26.3);
  triangle(x-s*11,y-s*26.3, x-s*10,y-s*31.5, x-s*7,y-s*27.5);
  triangle(x-s*7,y-s*27.5, x-s*4,y-s*32.5, x,y-s*29.6);
  triangle(x,y-s*29.6, x+s,y-s*34, x+s*3,y-s*30.5);
  triangle(x+s*3,y-s*30.5, x+s*7,y-s*35.5, x+s*8,y-s*32);
  arc(x-s*18,y+s*15,8*s,8*s, PI/4, PI*7/4 );     //귀
  arc(x+s*8,y+s*8,28*s,8*s, PI*6/4, PI*10/4 );//코
  
  fill(250,250,250);          //눈
  circle(x+s*10,y-s*2 , 18.4*s);
  circle(x,y ,18.4*s);
  
  fill(0,0,0);          //눈동자
  circle(x+s*3,y+s ,2.2*s);
  circle(x+s*14,y-s ,2.2*s);
  
  fill(250,90,50);      //입
  triangle( x-s*8,y+s*19.1, x+s*12,y+s*24,  x+s*20,y+s*16);
  
  fill(250,100,0);           //옷
  arc(x+s*3, y+s*40, 13*s, 16*s, PI, PI*2 );  //우 팔
  quad(x-s*20,y+s*28, x-s*24,y+s*40, x+s*7,y+s*40,  x+s*4,y+s*32); //몸통
  arc(x-s*21, y+s*40, 13*s,20*s, PI, PI*2 ); //좌 팔
}
