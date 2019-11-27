#include <iostream>
#include "my_container.h"
using namespace std;

int main()
{
    int size,a,b;
    double c,d;
    string e,f;


    cin>>size;
    MyContainer<int> itg(size);
    cin>>itg;
    cout<<itg<<endl;


    cin>>size;
    MyContainer<double> db(size);
    cin>>db;
    cout<<db<<endl;

    cin>>size;
    MyContainer<string> str(size);
    cin>>str;
    cout<<str<<endl;

    return 0;
}
