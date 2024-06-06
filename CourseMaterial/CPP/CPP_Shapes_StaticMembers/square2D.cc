
#include <iostream>
#include "square2D.h"

int square2D::nSquares = 0;

int square2D::getSquares(){
	return nSquares;
}

square2D::square2D() { 
	side=0; area = 0; perimeter = 0;
	nSquares++; 
}
square2D::~square2D(){
	nSquares--;
}
void square2D::set_side(double s)
{
	side = s;
	calc_area();
	calc_perimeter();
}

double square2D::get_side(){
	return side;
}

double square2D::get_area(){
	return area;
}

double square2D::get_perimeter(){
	return perimeter;
}

void square2D::calc_area(){
	area = side*side;
}
void square2D::calc_perimeter(){
	perimeter = 4*side;
}

