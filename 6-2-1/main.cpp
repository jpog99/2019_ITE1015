#include<iostream>
#include <string>
#include "shapes.h"
using namespace std;

int main(){
	while(1){
	cout << endl << "shape?" << endl;
	char shape;
	double w,x,y,z,area,peri;
	cin >> shape;
        
	if(shape == 'C'){
		Circle c;
		cin>>w>>x>>y;
		area = c.CirArea(w,x,y);
		peri = c.CirPeri(w,x,y);
		cout << "area: "<< area << " " << "perimeter:" << peri << endl;
	}

	else if(shape == 'R'){
		Rectangle r;
		cin>>w>>x>>y>>z;
		area = r.RecArea(w,x,y,z);
		peri = r.RecPeri(w,x,y,z);
		cout << "area: "<< area << " " << "perimeter:" << peri << endl;
    }

    else if(shape == 'Q')
		break;
	
	}
	return 0;
}	
