#include <iostream> 
#include <string> 
int main() {
	std::string str{ "The quick brown fox jumps over the lazy dog." };
	str.replace(10, 5, "red"); // (5)   
	str.replace(str.begin(), str.begin() + 3, 1, 'A'); // (6)  
	std::cout << str << "\n\n";
	return 1;
}
/*#include <iostream>
#include <string>
using namespace std;
int main() {
	string A = " I am ";
	string B = " a boy ";
	string C = " a girl ";
	string D;
	D = A + B;
	cout << D << endl;
	D += C;
	cout << D << endl;
	return 123;
}*/