// double catch exception 
#include <iostream>
using namespace std;
int dd(int n, int m) {
    int num;
    try {
        if (m == 0) throw 0;
        num = n / m;
        return num;
    }
    catch (int e) {
        cout << " in dd \n";
        throw;
    }
} // end of Chk()
int main() {
    try {
        dd(3, 0);
    }
    catch (int f) {
        cout << f << " in main \n";
    }
    return 123;
}

