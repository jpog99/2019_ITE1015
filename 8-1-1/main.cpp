#include <iostream>
#include "number.h"
using namespace std;

int main()
{
    string func;
    while(1){
        cin>>func;
        if(func == "quit")
            break;
        int n; cin>>n;
        Number num;
        Square sq;
        Cube cb;

        if(func == "number"){
            num.setNumber(n);
            cout<<"getNumber(): "<< num.getNumber()<<endl;
        }

        if(func == "square"){
            sq.setNumber(n);
            cout<<"getNumber(): "<< sq.getNumber()<<endl;
            cout<<"getSquare(): "<< sq.getSquare()<<endl;
        }

        if (func == "cube"){
            cb.setNumber(n);
            cout<<"getNumber(): "<< cb.getNumber()<<endl;
            cout<<"getSquare(): "<< cb.getSquare()<<endl;
            cout<<"getCube(): "<< cb.getCube()<<endl;
        }


    }
    return 0;
}

