#include <iostream>
#include "shapes2D.h"

/* Members of the Base class: Shape2D */
Shape2D::Shape2D(){
	area = 0; perimeter = 0;
}

double Shape2D::get_area() const{
	return area;
}
double Shape2D::get_perimeter() const{
	return perimeter;
}
void Shape2D::printAttr() const{
	std::cout<<"------------------------"<<std::endl;
	std::cout<<"Area:\t\t"<<area<<std::endl;
	std::cout<<"Perimeter:\t"<<perimeter<<std::endl;
	std::cout<<"------------------------"<<std::endl;
}

/*    Members of square2D class */
square2D::square2D() {
	side=0; area = 0; perimeter = 0;
}

void square2D::set_side(double s)
{
	side = s;
	calc_area();
	calc_perimeter();
}

double square2D::get_side() const{
	return side;
}

void square2D::calc_area(){
	area = side*side;
}
void square2D::calc_perimeter(){
	perimeter = 4*side;
}

void square2D::printAttr() const{
	std::cout<<"-------- Square --------"<<std::endl;
	std::cout<<"Side:\t\t"<<side<<std::endl;
        std::cout<<"Area:\t\t"<<area<<std::endl;
        std::cout<<"Perimeter:\t"<<perimeter<<std::endl;
	std::cout<<"------------------------"<<std::endl;
}

/* Member of Circle 2D class */
circle2D::circle2D() {
	radius=0; area = 0; perimeter = 0;
}

void circle2D::set_radius(double r)
{
	radius = r;
	calc_area();
	calc_perimeter();
}

double circle2D::get_radius() const{
	return radius;
}

void circle2D::calc_area(){
	area = 3.141592*radius*radius;
}
void circle2D::calc_perimeter(){
	perimeter = 2*3.141592*radius;
}

void circle2D::printAttr() const{
	std::cout<<"-------- Circle ----------"<<std::endl;
	std::cout<<"Radius:\t\t"<<radius<<std::endl;
        std::cout<<"Area:\t\t"<<area<<std::endl;
        std::cout<<"Perimeter:\t"<<perimeter<<std::endl;wq
	std::cout<<"--------------------------"<<std::endl;
}

