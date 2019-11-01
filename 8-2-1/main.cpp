#include <iostream>
#include "shape.h"
using namespace std;

int main()
{
    int canvas_w,canvas_h;
    string shape;
    cout<<"Input canvas size [width]x[height]"<<endl;
    cin>>canvas_w>>canvas_h;

    while(shape != "quit"){
        int x,y;
        char brush;
        cin>>shape;

        if(shape == "rect"){
            int r_width,r_height;
            cin>>x>>y>>r_width>>r_height>>brush;

            Rectangle rect(x,y,r_width,r_height,brush);
            cout<<endl<<"Area: "<<rect.GetArea()<<endl;
            cout<<"Perimeter: "<<rect.GetPerimeter()<<endl<<endl;
            rect.Draw(canvas_w,canvas_h);
        }

        if(shape == "square"){
            int side;
            cin>>x>>y>>side>>brush;

            Square sq(x,y,side,brush);
            cout<<endl<<"Area: "<<sq.GetArea()<<endl;
            cout<<"Perimeter: "<<sq.GetPerimeter()<<endl<<endl;
            sq.Draw(canvas_w,canvas_h);
        }

        if(shape == "diamond"){
            int distance;
            cin>>x>>y>>distance>>brush;

            Diamond dm(x,y,distance,brush);
            cout<<endl<<"Area: "<<dm.GetArea()<<endl;
            cout<<"Perimeter: "<<dm.GetPerimeter()<<endl<<endl;
            dm.Draw(canvas_w,canvas_h);
        }
    }
    return 0;
}

