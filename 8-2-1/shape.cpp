#include <iostream>
#include "shape.h"
using namespace std;

void Rectangle::Draw(int canvas_width, int canvas_height){
    cout<<" ";
    for(int i=0 ; i<canvas_width ; i++)
        cout<<i;
    cout<<endl;
    for(int i=0 ; i<canvas_height ; i++){
            cout<<i;
        for(int j=0 ; j<canvas_width; j++){
            if ( (j>=_xPoint&&j<_xPoint+rect_width) && (i>=_yPoint&&i<_yPoint+rect_height))
            cout<<_brush;
            else cout<<".";
        }
        cout<<endl;
    }
}

void Square::Draw(int canvas_width, int canvas_height){
    cout<<" ";
    for(int i=0 ; i<canvas_width ; i++)
        cout<<i;
    cout<<endl;
    for(int i=0 ; i<canvas_height ; i++){
        cout<<i;
        for(int j=0 ; j<canvas_width ; j++){
            if ( (j>=_xPoint&&j<_xPoint+_side) && (i>=_yPoint&&i<_yPoint+_side))
            cout<<_brush;
            else cout<<".";
        }
        cout<<endl;
    }
}

void Diamond::Draw(int canvas_width, int canvas_height){
    //2d dynamic array initialization
    int** _canvas = new int*[canvas_height];
    for (int i=0 ; i<canvas_height ; i++)
        _canvas[i] = new int[canvas_width];

    //setting value of array to 1 if in diamond shape
    for (int i = 0; i <= _dist; i++) {
        for (int j = -i; j <= +i; j++) {
            if ( _xPoint + i < canvas_width && _yPoint + j < canvas_height) {
                _canvas[_xPoint + j][_yPoint + i] = 1;
            }
        }
    }
    for (int i = _dist - 1; i >= 0; i--) {
		for (int j = -i; j <= +i; j++) {
			if (_xPoint + i < canvas_width && _yPoint + j < canvas_height) {
				_canvas[_xPoint + j][_yPoint + _dist + (_dist - i)] = 1;
			}
		}
	}

    //print . if array=0, brush if array=1
    cout<<" ";
    for(int i=0 ; i<canvas_width ; i++)
        cout<<i;
    cout<<endl;
    for(int i=0 ; i<canvas_height ; i++){
        cout<<i;
        for(int j=0 ; j<canvas_width ; j++){
            if (_canvas[j][i] == 1)
                cout<<_brush;
            else cout<<".";
        }
        cout<<endl;
    }

    //deleting array
    for (int i=0 ; i<canvas_height ; i++)
        delete[] _canvas[i];
    delete[] _canvas;

}

double Rectangle::GetArea(){return _area;}
int Rectangle::GetPerimeter() {return _perimeter;}
double Square::GetArea(){return _area;}
int Square::GetPerimeter() {return _perimeter;}
double Diamond::GetArea(){return _area;}
int Diamond::GetPerimeter() {return _perimeter;}


