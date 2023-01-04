#include <iostream>      // for cout, cin
using namespace std;    // for the names used by C++ (include, main, cout, endl…) 
void main() {
    short c = 0, d = 5, e = 7, f = 11, g = 15;
    cout << dec << c << " " << d << " " << e << " " << f << " " << g << endl;
    cout << hex << c << " " << d << " " << e << " " << f << " " << g << endl;
    cout << oct << c << " " << d << " " << e << " " << f << " " << g << endl;
}
