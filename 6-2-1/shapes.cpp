#include<iostream>
#include "shapes.h"
#define PI 3.14
using namespace std;


double Circle::CirArea(double x, double y,double rad){
	double area;
	area = PI*rad*rad;
	return area;
}

double Circle::CirPeri(double x,double y, double rad){
	double peri;
	peri = 2*PI*rad;
	return peri;
}

double Rectangle::RecArea(double x_tl,double y_tl,double x_br,double y_br){
	double width,height,area;
	width = x_br - x_tl;
	height = y_tl - y_br;
	area = width*height;
	return area;
}

double Rectangle::RecPeri(double x_tl,double y_tl,double x_br,double y_br){
        double width,height,peri;
        width = x_br - x_tl;
        height = y_tl - y_br;
        peri = (2*width)+(2*height);
        return peri;
}       


