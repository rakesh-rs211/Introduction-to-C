#include <iostream>
#include "ComplexDT.h"

int main(){
	ComplexDT objComplex01(2,3);
	//std::cout<<"The complex number is:"<<objComplex01.getReal()<<"+"<<objComplex01.imag<<"i"<<std::endl;
	std::cout<<"The complex number is: "<<objComplex01.getReal()<<"+"<<objComplex01.getImag()<<"i"<<std::endl;
	return 0;
}
