#include <iostream>      // for cout, cin
using namespace std;   
void main() {
  short x,y;
  unsigned short z, w;
  x= 0x8000;  y = 0x7fff;
  z = 0x0;   w= 0xffff;
  
  cout << x << " <short< " << y <<< endl;
  cout << z << " <short< " << w <<< endl;
}
  
