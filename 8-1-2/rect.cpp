#include <iostream>
#include "rect.h"
using namespace std;

Rectangle::Rectangle(int width,int height){
    _width = width; _height = height;
}

int Rectangle::getArea(){
    return _width*_height;
}

int Rectangle::getPerimeter(){
    return 2*(_width + _height);
}

NonSquare::NonSquare(int width,int height) : Rectangle(width,height){
    _width = width; _height = height;
}

void NonSquare::print(){
    cout<<_width<<"x"<<_height<<" NonSquare"<<endl;
}

Square::Square(int width) : Rectangle(width,width){
    _width = width; _height = width;
}

void Square::print(){
    cout<<_width<<"x"<<_height<<" Square"<<endl;
}
