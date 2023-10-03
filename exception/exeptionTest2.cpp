// DougFO Play Jan. 21, 2022
// multi-exception 
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int Chk(string str) {
    string::iterator it;
    int num = 0,i,ii;
    if (str.size() != 0 && str[0] == '0') throw 0;
    i = (str.size() - 1);
    for (it = str.begin(); it != str.end(); it++,i--){
        char c = *it;
        ii = (int)(c - '0');
        cout << *it << " " << ii << " " << i<< endl;
        if(c <'0' || c >'9') throw c;
        num += (int)(pow(10.0,i)*ii);
    }
    return num;
} // end of Chk()
int main() {
    string str1, str2;
    while (1) {
        cout << " give 2 numbers : ";
        cin >> str1 >> str2;
        try
        {
            cout << " sum = " 
                 << Chk(str1) + Chk(str2) << endl;
            break;
        }
        catch (char ch) {
            cout << " wrong character\n";
        }
        catch (int e)
        {
            cout << " no 0 at first\n";
        }
    }
    return 123;
}

