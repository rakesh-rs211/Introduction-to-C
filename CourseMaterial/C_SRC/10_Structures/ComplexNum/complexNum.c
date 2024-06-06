#include "complexNum.h"
complexDT addComplex(complexDT cnum1, complexDT cnum2){
	complexDT sum_cnum;
	sum_cnum.real = cnum1.real+cnum2.real;
	sum_cnum.imag = cnum1.imag+cnum2.imag;
	return sum_cnum;
}
complexDT subComplex(complexDT cnum1, complexDT cnum2){
        complexDT diff_cnum;
        diff_cnum.real = cnum1.real-cnum2.real;
        diff_cnum.imag = cnum1.imag-cnum2.imag;
        return diff_cnum;
}
