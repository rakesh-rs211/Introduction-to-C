#include <iostream>
#include "shapes2D.h"

int main(){
	square2D objSq;
	circle2D objCir;
	Shape2D *ptrShape;
	objSq.set_side(3);
	objCir.set_radius(3);
	
	/* Calling 'square2D' member function as 'Shape2D' */
	ptrShape = &objSq;
	ptrShape->printAttr();
	
	objSq.printAttr();
	return 0;
}
