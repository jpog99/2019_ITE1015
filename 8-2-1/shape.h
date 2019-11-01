#pragma once
#include <math.h>

class Shape {
    public:
        Shape();
        Shape(int x, int y, char br) : _xPoint(x) , _yPoint(y) , _brush(br){}
        double GetArea() {return _area;}
        int GetPerimeter() {return _perimeter;}
        void Draw(int canvas_width, int canvas_height) ;

    protected:
        int _xPoint,_yPoint;
        char _brush;
        int _perimeter;
        double _area;
};

class Rectangle : public Shape{
public:
    Rectangle(int x, int y, int width, int height, char br): Shape(x,y,br) , rect_width(width) , rect_height(height){
        _area = rect_width*rect_height;
        _perimeter = 2*(rect_height+rect_width);
    }
    void Draw(int canvas_width, int canvas_height);
    int GetPerimeter();
    double GetArea();

private:
        int rect_width,rect_height;
};

class Square : public Shape{
public:
    Square(int x, int y, int side, char br) : Shape(x,y,br), _side(side){
        _area = _side*_side;
        _perimeter = 4*_side;
    }
    void Draw(int canvas_width, int canvas_height);
    int GetPerimeter();
    double GetArea();
private:
    int _side;
};

class Diamond : public Shape{
public:
    Diamond(int x, int y, int dist, char br) : Shape(x,y,br) , _dist(dist){
        _area = _dist*_dist*2;
        _perimeter = 4*_dist*sqrt(2);
    }

    void Draw(int canvas_width, int canvas_height);
    int GetPerimeter();
    double GetArea();
private:
    int _dist;
};
