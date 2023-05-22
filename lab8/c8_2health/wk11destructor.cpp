#include <iostream>
#include <fstream>
using namespace std;
class MyClass {
private:
    int* dynamicArray = NULL;
public:
    MyClass() {
        dynamicArray = new int[5]; // 동적 배열 할당
        file.open("abc.txt");
    }
    ofstream file;
    ~MyClass() {
        if (dynamicArray != NULL) {
            delete[] dynamicArray; // 동적 배열 삭제
            dynamicArray = NULL; 
            cout << " delete allocated\n";
        }   else { cout << " not allocated\n"; }
        if (file.is_open()) {
            cout << " file close \n";
            file.close();
        }  else { " already close\n"; }
    }
};
int main() {
    MyClass myObject;
    myObject.file << "test\n";
    // myObject.~MyClass(); not working, yet
    return 123;
}