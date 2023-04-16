#pragma once
class LoL {
public:
	LoL() {};
	LoL(int,int,float,float,float,float,int);
	~LoL();
	void out(char*);
private:
	int N1, N2;
	float a, b, xo, dx;
	int m;
	int *fn;
	float *fx;

	void calculate_fn();
	void calculate_fx();
};