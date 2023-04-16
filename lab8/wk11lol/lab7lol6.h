#pragma once
#include <fstream>

class LoL {
public:
	LoL() {};
	LoL(int,int,float,float,float,float,int, char*);
	~LoL();
	
private:
	int N1, N2;
	float a, b, xo, dx;
	int m;
	int *fn;
	float *fx;
	//std::ofstream myout;

	void headerout(std::ofstream &);
	void calculate_fn(std::ofstream &);
	void calculate_fx(std::ofstream &);
};