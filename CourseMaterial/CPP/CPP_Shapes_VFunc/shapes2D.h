#ifndef SHAPES2D_H
#define SHAPES2D_H
class Shape2D{
	public:
		Shape2D();
		double get_area() const;
		double get_perimeter() const;
		void printAttr() const;
	protected:
		double area;
		double perimeter;
		virtual void calc_area()=0;
		virtual void calc_perimeter()=0;
};

class square2D: public Shape2D{
	public:
		square2D();
		double get_side() const;
		void set_side(double);
		void printAttr() const;
	private:
		double side;
		void calc_area();
		void calc_perimeter();
};

class circle2D: public Shape2D{
	public:
		circle2D();
		double get_radius() const;
		void set_radius(double);
		void printAttr() const;
	private:
		double radius;
		void calc_area();
		void calc_perimeter();
};
#endif
