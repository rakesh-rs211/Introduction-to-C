
#include <iostream>
#include "square_orig.h"
sh_square::sh_square() { 
	side=0; area = 0; perimeter = 0; 
}

void sh_square::set_side(double s)
{
	side = s;
	calc_area();
	calc_perimeter();
}

double sh_square::get_side(){
	return side;
}

double sh_square::get_area(){
	return area;
}

double sh_square::get_perimeter(){
	return perimeter;
}

void sh_square::calc_area(){
	area = side*side;
}
void sh_square::calc_perimeter(){
	perimeter = 4*side;
}

