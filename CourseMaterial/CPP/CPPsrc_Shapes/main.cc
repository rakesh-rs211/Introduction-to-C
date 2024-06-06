#include <iostream>
#include "square_orig.h"

int main(){
	sh_square objSq;
	std::cout<<"Before:: Side: "<<objSq.get_side()<<";  Area: "<<objSq.get_area()<<";  Perimeter: "<<objSq.get_perimeter()<<std::endl;
	objSq.set_side(2);
	
	std::cout<<"After:: Side: "<<objSq.get_side()<<";  Area: "<<objSq.get_area()<<";  Perimeter: "<<objSq.get_perimeter()<<std::endl;
	
	return 0;
}
