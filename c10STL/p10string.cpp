#include <iostream>
#include <string>
using namespace std;
int main() {
string a = "0123456789", b = "abcdefghij", c;
c = a;
cout << c << endl;
cout << " size/capacity " << c.size() << "/" << c.capacity() << endl;
c += a + b;
cout << c << endl;
cout << " size/capacity " << c.size() << "/" << c.capacity() << endl;
c = b.substr(5);
cout << c << endl;
cout << " size/capacity " << c.size() << "/" << c.capacity() << endl;
return 123;
}
