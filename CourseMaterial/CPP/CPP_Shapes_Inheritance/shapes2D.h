#ifndef SHAPES2D_H
#define SHAPES2D_H
class Shape2D{
	public:
		Shape2D();
		double get_area();
		double get_perimeter();
	protected:
		double area;
		double perimeter;
};

class square2D: public Shape2D{
	public:
		square2D();
		double get_side();
		void set_side(double);
	private:
		double side;
		void calc_area();
		void calc_perimeter();
};

class circle2D: public Shape2D{
	public:
		circle2D();
		double get_radius();
		void set_radius(double);
	private:
		double radius;
		void calc_area();
		void calc_perimeter();
};
#endif
