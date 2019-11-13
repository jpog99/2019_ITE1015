#include <iostream>
#include <vector>
#include "shape.h"
using namespace std;

int main()
{
    double width,height;
    char shape;
    vector<Shape*> arr;

    while(shape != '0'){
        cin>>shape;
        if (shape == 'r'){
            cin>>width>>height;
            Shape* r = new Rectangle(width,height);
            arr.push_back(r);
        }
        if (shape == 't'){
            cin>>width>>height;
            Shape* t = new Triangle(width,height);
            arr.push_back(t);
        }
    }

    for(int i=0 ; i<arr.size() ; i++){
        cout<<arr[i]->getArea()<<endl;
    }

    for(int i=0 ; i<arr.size() ; i++){
        delete arr[i];
    }
    return 0;
}
