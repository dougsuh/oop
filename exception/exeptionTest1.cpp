// simplest exception 
#include <iostream>
using namespace std;

int main()
{
    int i, j;
    try
    {
        i = 10; j = 4;
        if (j == 0) throw j;
        cout << i / j << "*" << j;
        cout << " + " << i % j << " = ";
        cout << i << endl;
    }
    catch (int e)
    {
        cout << "divided by " << e << endl;
        return 666;
    }
    return 123;
}
