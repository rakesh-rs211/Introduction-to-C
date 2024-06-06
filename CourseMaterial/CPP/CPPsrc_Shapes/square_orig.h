#ifndef SQUARE_H
#define SQUARE_H

class sh_square{
	public:
		sh_square();
		double get_side();
		double get_area();
		double get_perimeter();
		void set_side(double);
	private:
		double side;
		double area;
		double perimeter;
		void calc_area();
		void calc_perimeter();
};

#endif
