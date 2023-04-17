#ifndef __COMPLEX
#define __COMPLEX
#include <math.h>
class complex{
public:
	// member data
	double re, im;
	// constructors
	complex(){ re = im = 0; };
	complex(double x,double y){ re = x; im = y; };
	complex(double theta){ re = cos(theta); im = sin(theta); };
	// member function
	double mag();                     // magnitude
	// operator overloading
	complex& operator=(const complex&);
	complex& operator+=(const complex&);
	complex operator+(const complex&);
	complex operator-(const complex&);
	complex operator*(const complex&);
	complex operator/(const double&);  // divided by double
	complex operator/(const complex&); // divided by complex
	complex operator*(const double&);  // post-multiplication double    
	//	complex operator*(const double&);  // pre-multiplication double   :  double * complex 
};  // suh 2011. 7. 15
#endif