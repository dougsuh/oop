#include <iostream>
#include <fstream>
using namespace std;
class MyClass {
private:
    int* dynamicArray = NULL;
public:
    MyClass() {
        dynamicArray = new int[5]; // ���� �迭 �Ҵ�
        file.open("abc.txt");
    }
    ofstream file;
    ~MyClass() {
        if (dynamicArray != NULL) {
            delete[] dynamicArray; // ���� �迭 ����
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