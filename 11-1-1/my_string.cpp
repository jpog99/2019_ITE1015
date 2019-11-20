#include <iostream>
#include "my_string.h"
using namespace std;

MyString& MyString::operator=(const MyString& b){
    str = b.str;
    return *this;
}

MyString MyString::operator+(const MyString& b){
    MyString res;
    res.str = str + b.str;
    return res;
}

MyString MyString::operator*(const int b) {
    MyString res;
    for(int i=0 ; i<b ; i++)
        res.str+=str;
    return res;
}

ostream& operator<<(ostream& out, MyString& my_string){
    out<<my_string.str<<endl;
    return out;
}

istream& operator>>(istream& in, MyString& my_string){
    in>>my_string.str;
    return in;
}
