#pragma once
using namespace std;

class Shape{
public:
    Shape(double width, double height) : _width(width) , _height(height){};
    virtual double getArea() = 0;
protected:
    double _width,_height;
};

class Triangle : public Shape{
    public:
    Triangle(double width, double height) : Shape(width,height){};
    double getArea();
};

class Rectangle : public Shape{
    public:
    Rectangle(double width, double height) : Shape(width,height){};
    double getArea();
};
