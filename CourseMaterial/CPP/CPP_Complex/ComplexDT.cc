#include "ComplexDT.h"

ComplexDT::ComplexDT(double r, double i){
	// Each object has a  pointer 'this' which points to itself
	// Data member in this function implicitly refer to this->data
	real = r;   //real ==> this->real
	imag = i;   //imag ==> this->imag
}

ComplexDT::ComplexDT(double r){
	real = r;
	imag = 0.0;
}
void ComplexDT::setComplex(double r, double i){
	real = r;
	imag = i;
}
double ComplexDT::getReal(){
	return real;
}
double ComplexDT::getImag(){
	return imag;
}

