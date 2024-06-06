#include <iostream>
#include "ComplexDT.h"

int main(){
	ComplexDT objComplex01(2,3), objComplex02(3,4);
	ComplexDT objSum;
	objSum = objComplex01+objComplex02;
	std::cout<<objSum.getReal()<<"+"<<objSum.getImag()<<"i"<<std::endl;
	return 0;
}
