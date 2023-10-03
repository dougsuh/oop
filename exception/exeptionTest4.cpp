// overflow_error.cpp
// compile with: /EHsc
// to_ulong() generate an exception.
#include <bitset>
#include <exception>
#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
    try
    {
        bitset<33> b;
        b[32] = 1;
        b[0] = 1;
        cout << b << " " << sizeof(b) << endl;
        unsigned long x = b.to_ulong();
    }
    catch (const exception& e)
    {
        cerr << "Caught: " << e.what() << endl;
        cerr << "Type: " << typeid(e).name() << endl;
    }
    return 123;
}
