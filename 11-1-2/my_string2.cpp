#include <iostream>
#include "my_string2.h"
using namespace std;

MyString2::MyString2(const MyString2& s){
    str = s.str;
}

MyString2 MyString2::operator+(const MyString2& b){
    MyString2 res;
    res.str = str + b.str;
    return res;
}

MyString2 MyString2::operator*(const int b) {
    MyString2 res;
    for(int i=0 ; i<b ; i++)
        res.str+=str;
    return res;
}

ostream& operator<<(ostream& out, MyString2& my_string){
    out<<my_string.str<<endl;
    return out;
}

istream& operator>>(istream& in, MyString2& my_string){
    in>>my_string.str;
    return in;
}


