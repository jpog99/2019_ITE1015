#include <iostream>
#include "my_vector.h"
using namespace std;

MyVector::MyVector(int length): length(length){
    a = new double[length];
}

MyVector::~MyVector(){delete[] a;}

MyVector& MyVector::operator=(const MyVector& b){
    delete[] a;
    a = new double[length];
    for(int i=0 ; i<length ; i++)
        a[i] = b.a[i];
    return *this;
}

MyVector MyVector::operator+(const MyVector& b){
    MyVector res(length);
    for(int i=0 ; i<length ; i++)
        res.a[i] = a[i] + b.a[i];
    return res;
}

MyVector MyVector::operator-(const MyVector& b){
    MyVector res(length);
    for(int i=0 ; i<length ; i++)
        res.a[i] = a[i] - b.a[i];
    return res;
}

MyVector MyVector::operator+(const int b){
    MyVector res(length);
    for(int i=0 ; i<length ; i++)
        res.a[i] = a[i] + b;
    return res;
}

MyVector MyVector::operator-(const int b){
    MyVector res(length);
    for(int i=0 ; i<length ; i++)
        res.a[i] = a[i] - b;
    return res;
}

ostream& operator<<(ostream& out, MyVector& b){
    for(int i=0 ; i<b.length ; i++)
        out<<b.a[i]<<" ";
    return out;
}

istream& operator>>(istream& in, MyVector& b){
    for(int i=0 ; i<b.length ; i++)
        in>>b.a[i];
    return in;
}

