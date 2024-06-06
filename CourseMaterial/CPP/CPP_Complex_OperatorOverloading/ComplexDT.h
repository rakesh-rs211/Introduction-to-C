#ifndef COMPLEXDT_H
#define COMPLEXDT_H

class ComplexDT{
	public:
		ComplexDT(double, double);
		ComplexDT(); //When only one double is pass it should initialize the real part
		double getReal();
		double getImag();
		void setComplex(double,double);
		ComplexDT operator+(ComplexDT);
	private:
		double real;
		double imag;
};
#endif
