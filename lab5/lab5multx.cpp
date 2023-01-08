#include <iostream> 
using namespace std; 
void multx(int n, int* ii, int x) {
    for (int i = 0; i < n; i++) ii[i] = i * x;
    return;
}
int main() {
    int a[10];
    multx(6, a, 5);   // 0 5 10 15 20 25
    multx(4, a + 6, 10);   // 0 10 20 30
    for (int i = 0; i < 10; i++) cout << " i " << a[i] << endl;
}