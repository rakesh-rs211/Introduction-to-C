#ifndef COMPLEXDT_H
#define COMPLEXDT_H

class ComplexDT{
	public:
		ComplexDT(double = 0, double = 0);
		ComplexDT(double = 0); //When only one double is pass it should initialize the real part
		double getReal();
		double getImag();
		void setComplex(double,double);
	private:
		double real;
		double imag;
};
#endif
