#include <stdio.h>
#include "complexNum.h"

int main(){
	complexDT num1,num2;
	complexDT sumNum,diffNum;
	num1.real = 2; num1.imag = 3; // num1 is '2+3i'
	num2.real = 4; num2.imag = 2.5;
	sumNum = addComplex(num1, num2);
	diffNum = subComplex(num1,num2);
	printf("Sum of two numbers is %3.2f+%3.2fi \n", sumNum.real,sumNum.imag);
	return 0;
}
