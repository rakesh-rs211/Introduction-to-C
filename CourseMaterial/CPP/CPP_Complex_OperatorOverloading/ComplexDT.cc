#include "ComplexDT.h"

ComplexDT::ComplexDT(double r, double i){
	// Each object has a  pointer 'this' which points to itself
	// Data member in this function implicitly refer to this->data
	real = r;   //real ==> this->real
	imag = i;   //imag ==> this->imag
}

ComplexDT::ComplexDT(){
	real = 0.0;
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
ComplexDT ComplexDT::operator+(ComplexDT objCompB){
	ComplexDT sumComp(0,0);
	sumComp.real = real+objCompB.real;
	sumComp.imag = imag+objCompB.imag;
	return sumComp;
}
