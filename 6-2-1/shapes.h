#pragma once
class Circle{
	double x,y;
	double rad;

	public:
	double CirArea(double x,double y,double rad);
	double CirPeri(double x,double y,double rad);
};

class Rectangle{
	double x_tl,y_tl;
	double x_br,y_br;

	public:
	double RecArea(double x_tl,double y_tl,double x_br,double y_br);
	double RecPeri(double x_tl,double y_tl,double x_br,double y_br);
};
