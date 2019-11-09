#include <iostream>
#include <vector>
#include "canvas.h"
using namespace std;

int main()
{
    size_t canv_w,canv_h;
    string job;
    vector<Shape*> obj;
    cin>>canv_w>>canv_h;
    Canvas cvs(canv_w,canv_h);
    cvs.Print();

    while(job!="quit"){
        cin>>job;
        if(job=="draw")
            cvs.Print();
        if(job=="delete"){
            int del_pos;
            cin>>del_pos;
            if(del_pos < obj.size())
                obj.erase(obj.begin()+del_pos);
            cvs.Resize(canv_w,canv_h);
            for(int i=0 ; i<obj.size() ; i++)
                obj[i]->Draw(&cvs);
        }
        if(job=="resize"){
            cin>>canv_w>>canv_h;
            cvs.Resize(canv_w,canv_h);
            for(int i=0 ; i<obj.size() ; i++)
                obj[i]->Draw(&cvs);
        }
        if(job=="dump"){
            for(int i=0 ; i<obj.size() ; i++){
                cout<<i<<" ";
                obj[i]->printInfo();
                cout<<endl;
            }
        }
        if(job=="clear"){
            cvs.Clear();
            obj.clear();
        }
        if(job=="add"){
            string shape;
            int xpos,ypos;
            char brush;
            cin>>shape;
            if(shape=="rect"){
                int width,height;
                cin>>xpos>>ypos>>width>>height>>brush;
                Shape* rect = new Rectangle(xpos,ypos,width,height,brush);
                obj.push_back(rect);
                rect->Draw(&cvs);
            }
            if(shape=="tri_up"){
                int ut_height;
                cin>>xpos>>ypos>>ut_height>>brush;
                Shape* upTri = new UpTriangle(xpos,ypos,ut_height,brush);
                obj.push_back(upTri);
                upTri->Draw(&cvs);
            }
            if(shape=="tri_down"){
                int dt_height;
                cin>>xpos>>ypos>>dt_height>>brush;
                Shape* dwTri = new DownTriangle(xpos,ypos,dt_height,brush);
                obj.push_back(dwTri);
                dwTri->Draw(&cvs);
            }
            if(shape=="diamond"){
                int distance;
                cin>>xpos>>ypos>>distance>>brush;
                Shape* diamond = new Diamond(xpos,ypos,distance,brush);
                obj.push_back(diamond);
                diamond->Draw(&cvs);
            }
        }
    }

    for(int i=0 ; i<obj.size() ; i++)
        delete obj[i];

    return 0;
}

