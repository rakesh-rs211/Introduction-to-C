#include <iostream>
#include "shapes2D.h"

int main(){
	square2D objSq;
	circle2D objCir;
	objSq.set_side(3);
	objCir.set_radius(3);
	std::cout<<"Area of circle: "<<objCir.get_area()<<std::endl;	
	std::cout<<"Area of square: "<<objSq.get_area()<<std::endl;
	return 0;
}
