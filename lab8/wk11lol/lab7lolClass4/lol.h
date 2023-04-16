#pragma once
#include <iostream>
class LoL {
public:
	LoL() {};
	LoL(int n1, int n2, float aa, float bb, float x0, float dxx, int mm);
	LoL(int n1, int n2, float aa, float bb, float x0, float dxx, int mm, char*);
	~LoL() {
		std::cout << " LoL died\n";
		delete fn;
		delete fx;
	};
private:
	int N1, N2;
	float a, b, xo, dx;
	int m;
	int *fn;
	float *fx;
	void calculate_fn() {
		for (int i = N1; i <= N2; i++)
			fn[i - N1] = i * (i + 1) / 2;
	}
	void calculate_fx() {
		float x = xo;
		for (int i = 0; i < m; i++, x += dx) fx[i] = a * x + b;
	}
	void init(int n1, int n2, float aa, float bb, float x0, float dxx, int mm);
	void out(char *filename);
};