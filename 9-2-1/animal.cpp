#include <iostream>
#include "animal.h"
using namespace std;

void Zebra::printInfo(){
    cout<<"Zebra,"<<"\tName: "<<_name<<"\tAge: "<<_age<<"\tNumber Of Stripes: "<<numStripes<<endl;
}

void Cat::printInfo(){
    cout<<"Cat,"<<"\tName: "<<_name<<"\tAge: "<<_age<<"\tFavourite Toy: "<<favouriteToy<<endl;
}

