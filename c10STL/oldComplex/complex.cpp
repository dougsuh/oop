#include <iostream>
#include <math.h>
#include "complex.h"

using namespace std;

// complex suh 2011. 7. 15
double complex::mag() {
	return sqrt(re*re + im*im);
}
complex complex::operator/(const complex& y)
{
	complex c;
	c = complex(y.re, -y.im);
	//double xx = c++;
	if (re == 0.0 && im == 0.0) { cout << " complex: divided by 0\n"; return c; }
	c = (*this * c) / sqrt(y.re*y.re + y.im * y.im);
	return c;
}
complex& complex::operator=(const complex& x)
{
	re = x.re;
	im = x.im;
	return *this;
}
complex& complex::operator+=(const complex& y)
{
	re += y.re;
	im += y.im;
	return *this;
} // left가 바뀌는 것이 문제이다.
complex complex::operator+(const complex& y)
{
	complex c;
	c.re = re + y.re;
	c.im = im + y.im;
	return c;
} // left가 바뀌지 않는다.
complex complex::operator-(const complex& y)
{
	complex c;
	c.re = re - y.re;
	c.im = im - y.im;
	return c;
} // left가 바뀌지 않는다.
complex complex::operator*(const complex& y)
{
	complex c;
	c.re = re * y.re - im * y.im;
	c.im = re * y.im + im * y.re;
	return c;
} 
complex complex::operator/(const double& y)
{
	complex c;
	c.re = re / y;
	c.im = im / y;
	return c;
} 
complex complex::operator*(const double& y)
{
	complex c;
	c.re = re * y;
	c.im = im * y;
	return c;
} 
// magnitude 
/*double complex::operator++()
{
	return re*re + im * im;
}*/

/*complex& complex::operator--()
{
im = -im;
return *this;
}*/