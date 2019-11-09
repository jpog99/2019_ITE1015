#include <iostream>
#include "canvas.h"
using namespace std;

Canvas::Canvas(size_t row, size_t col): _row(col),_col(row){ //width==col, height==row
    _cvs = new char*[_row];
    for(int i=0 ; i<_row ; i++)
        _cvs[i] = new char[_col];

    for(int i=0 ; i<_row ; i++){
        for(int j=0 ; j<_col ; j++)
            _cvs[i][j]='.';
    }
}
Canvas::~Canvas(){
    for (int i = 0; i < _row; ++i)
        delete[] _cvs[i];
	delete[] _cvs;

}

void Canvas::Print(){
	cout << " ";
	for (int i = 0; i < _col; ++i) cout << i % 10;
	cout << endl;
	for (int i = 0; i < _row; ++i) {
		cout << i % 10;
		for (int j = 0; j < _col; ++j) cout << _cvs[i][j];
		cout << endl;
	}
}

bool Canvas::DrawPixel(int x, int y, char brush){
    if(x<_col || y<_row || x>=0 || y>=0){
        _cvs[y][x]=brush;
        return true;
    }
    else return false;
}

void Canvas::Resize(size_t row, size_t col){
    for (int i = 0; i < _row; ++i)
        delete[] _cvs[i];
	delete[] _cvs;

	_row=col;_col=row;

	_cvs = new char*[_row];
    for(int i=0 ; i<_row ; i++)
        _cvs[i] = new char[_col];

    for(int i=0 ; i<_row ; i++){
        for(int j=0 ; j<_col ; j++)
            _cvs[i][j]='.';
    }
}
void Canvas::Clear(){
    for(int i=0 ; i<_row ; i++){
        for(int j=0 ; j<_col ; j++)
            _cvs[i][j]='.';
    }
}


void Rectangle::Draw(Canvas* canvas){
    for(int i=y_pos ; i<y_pos+_height ; i++){
        for(int j=x_pos ; j<x_pos+_width ; j++)
            canvas->DrawPixel(j,i,_brush);
    }
}
void Rectangle::printInfo(){
    cout<<"rect "<<x_pos<<" "<<y_pos<<" "<<_width<<" "<<_height<<" "<<_brush;
}

void UpTriangle::Draw(Canvas* canvas){
    int lvl=0;
    for (int i = y_pos; i <y_pos+_UTheight; i++,lvl++) {
        for (int j = x_pos-lvl; j <= x_pos+lvl; j++) {
            canvas->DrawPixel(j,i,_brush);
        }
    }
}
void UpTriangle::printInfo(){
    cout<<"tri_up "<<x_pos<<" "<<y_pos<<" "<<_UTheight<<" "<<_brush;
}

void DownTriangle::Draw(Canvas* canvas){
    int lvl=0;
    for (int i = y_pos; i >y_pos-_DTheight; i--,lvl++) {
        for (int j = x_pos-lvl; j <= x_pos+lvl; j++) {
            canvas->DrawPixel(j,i,_brush);
        }
    }
}
void DownTriangle::printInfo(){
    cout<<"tri_down "<<x_pos<<" "<<y_pos<<" "<<_DTheight<<" "<<_brush;
}

void Diamond::Draw(Canvas* canvas){
    int lvl=0;
    for (int i = y_pos; i <y_pos+_dist; i++) {
        for (int j = x_pos-lvl; j <= x_pos+lvl; j++) {
            canvas->DrawPixel(j,i,_brush);
        }
        ++lvl;
    }

    for (int i = y_pos+lvl; lvl>=0 ; i++,lvl--) {
        for (int j = x_pos-lvl; j <= x_pos+lvl; j++) {
            canvas->DrawPixel(j,i,_brush);
        }
    }

}
void Diamond::printInfo(){
    cout<<"diamond "<<x_pos<<" "<<y_pos<<" "<<_dist<<" "<<_brush;
}
