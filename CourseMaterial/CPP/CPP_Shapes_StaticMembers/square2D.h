#ifndef SQUARE_H
#define SQUARE_H

class square2D{
	public:
		square2D();
		~square2D();
		double get_side();
		double get_area();
		double get_perimeter();
		void set_side(double);
		static int getSquares();
	private:
		double side;
		double area;
		double perimeter;
		void calc_area();
		void calc_perimeter();
		static int nSquares;
};

#endif
