#include <iostream>
#include "shapes2D.h"

Shape2D::Shape2D(){
	area = 0; perimeter = 0;
}

double Shape2D::get_area(){
	return area;
}
double Shape2D::get_perimeter(){
	return perimeter;
}

square2D::square2D() { 
	side=0; area = 0; perimeter = 0; 
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

void square2D::calc_area(){
	area = side*side;
}
void square2D::calc_perimeter(){
	perimeter = 4*side;
}


circle2D::circle2D() { 
	radius=0; area = 0; perimeter = 0; 
}

void circle2D::set_radius(double r)
{
	radius = r;
	calc_area();
	calc_perimeter();
}

double circle2D::get_radius(){
	return radius;
}

void circle2D::calc_area(){
	area = 3.141592*radius*radius;
}
void circle2D::calc_perimeter(){
	perimeter = 2*3.141592*radius;
}


