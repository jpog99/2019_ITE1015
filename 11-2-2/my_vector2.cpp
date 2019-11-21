#include <iostream>
#include "my_vector2.h"
using namespace std;

MyVector2::MyVector2(){}

MyVector2::MyVector2(int length): length(length){
    a = new double[length];
}

MyVector2::MyVector2(const MyVector2& mv){
    length = mv.length;
    a = mv.a;
}

MyVector2::~MyVector2(){delete[] a;}

MyVector2 MyVector2::operator+(const MyVector2& b){
    MyVector2 res(length);
    for(int i=0 ; i<length ; i++)
        res.a[i] = a[i] + b.a[i];
    return res;
}

MyVector2 MyVector2::operator-(const MyVector2& b){
    MyVector2 res(length);
    for(int i=0 ; i<length ; i++)
        res.a[i] = a[i] - b.a[i];
    return res;
}

MyVector2 MyVector2::operator+(const int b){
    MyVector2 res(length);
    for(int i=0 ; i<length ; i++)
        res.a[i] = a[i] + b;
    return res;
}

MyVector2 MyVector2::operator-(const int b){
    MyVector2 res(length);
    for(int i=0 ; i<length ; i++)
        res.a[i] = a[i] - b;
    return res;
}

ostream& operator<<(ostream& out, MyVector2& b){
    for(int i=0 ; i<b.length ; i++)
        out<<b.a[i]<<" ";
    return out;
}

istream& operator>>(istream& in, MyVector2& b){
    for(int i=0 ; i<b.length ; i++)
        in>>b.a[i];
    return in;
}
