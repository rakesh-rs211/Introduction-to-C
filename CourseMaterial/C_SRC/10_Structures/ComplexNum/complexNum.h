#ifndef COMPLEXDT_H
#define COMPLEXDT_H
struct complex{
	double real; //Real part of complex number
	double imag; //Imaginary part of the complex number
};

typedef struct complex complexDT; // Rename the struct to complexDT

complexDT addComplex(complexDT, complexDT);
complexDT subComplex(complexDT, complexDT);
#endif
