#include <iostream>
using namespace std;
void main() {
	int x0, x1, x2, x3, x4, x5;
	float y0, y1, y2, y3, y4, y5;
	x0 = 0;
	x1 = 10;
	x2 = 20;
	x3 = 30;
	x4 = 40;
	x5 = 50;
	y0 = sqrt(x0);
	y1 = sqrt(x1);
	y2 = sqrt(x2);
	y3 = sqrt(x3);
	y4 = sqrt(x4);
	y5 = sqrt(x5);
	cout << y0 << " " << y1 << " " << y2 << " " << y3 << " " << y4 << " " << y5 << "\n";
}
/*
#include <iostream>
using namespace std;
void main() {
   int x[6];
   float y[6];
   for(int i=0;i<6; i++){
      x[i] = i*10;
      y[i] = sqrt(x[i]);
      cout << y[i] << " ";
   }
   cout << endl;
}
*/