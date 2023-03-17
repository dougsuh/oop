#pragma once
class CHealth {
public:
	// constructors
	CHealth(){ };
	CHealth(int a);
	// member data
	int age;
	float cel, faren;
	// member functions (methods)
	void cel2faren() {
		faren = cel*9.0 / 5.0 + 32.0;
	}
	void faren2cel(); 
	void measureCel();
};
