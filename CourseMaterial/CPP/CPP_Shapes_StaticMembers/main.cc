#include <iostream>
#include "square2D.h"
void create2Squares(){
	square2D sq1,sq2;
	std::cout<<"Number of squares from functions: "<<square2D::getSquares()<<std::endl;	
	return;
}
int main(){
	square2D objSq;
	objSq.set_side(2);
	std::cout<<"Number of squares before function call: "<<square2D::getSquares()<<std::endl;	
	create2Squares();
	std::cout<<"Number of squares after function call: "<<square2D::getSquares()<<std::endl;	
	return 0;
}
