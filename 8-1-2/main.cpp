#include <iostream>
#include "rect.h"
using namespace std;

int main()
{
    string shape;
    while(shape != "quit"){
        cin>>shape;
        int height,width;

        if (shape == "nonsquare"){
            cin>>width>>height;
            NonSquare ns(width,height);
            ns.print();
            cout<<"Area: "<<ns.getArea()<<endl;
            cout<<"Perimeter :"<<ns.getPerimeter()<<endl;
        }

        if (shape == "square"){
            cin>>width;
            Square sq(width);
            sq.print();
            cout<<"Area: "<<sq.getArea()<<endl;
            cout<<"Perimeter :"<<sq.getPerimeter()<<endl;
        }


    }
    return 0;
}

