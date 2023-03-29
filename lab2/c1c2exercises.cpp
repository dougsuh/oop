#include <iostream>      // for cout
#include <fstream>      // ofstream
#include <math.h>      // ofstream
using namespace std;    // for the names used by C++ (include, main, cout, endl�) 
void main() {
    // c1 page 15
    short xxx = 0xf001;
    cout << " 0xf001 " << xxx << endl;
    int minInt = 0x80000000;
    int maxInt = 0x7fffffff;
    cout << minInt << " int " << maxInt << endl;
    unsigned int uminInt = 0x0;
    unsigned int umaxInt = 0xffffffff;
    cout << uminInt << " uint " << umaxInt << endl;
    cout << "\n\n\n";
    // c1 page 22
    double x = 0.1;
    float y = 0.1;
    double dx;
    dx = x - y;
    cout << " 1. roundoff error " << dx << endl;
    x = 0.125; y = 0.125;  // 2^-3
    dx = x - y;
    cout << " 2. roundoff error " << dx << endl;
    cout << "\n\n\n";
    // c2 Page 6
    short si = 0x1234;
    char* cc = (char*)&si;
    cout << hex << "Ox" << (int)*cc << "  " << "Ox" << (int)cc[1] << endl;
    // c2 Page 19
    float t = 0.0, f = 440; // 440 Hz
    float PI = 3.141592;
    float T = 1. / f;  // one period
    float dt = T / 20;  // sampling period
    ofstream doug("young.txt");
    for (t = 0.0; t < T; t += dt) {
        doug << cos(2. * PI * f * t) << "    " << sin(2. * PI * f * t) << endl;
    }
    doug.close();
}