#include <iostream>
#include <vector>
#include "animal.h"
using namespace std;

int main()
{
    char animal;
    int age,stripe;
    string name,toy;
    vector<Animal*> vec;

    while(animal != '0'){
        cin>>animal;
        if(animal == 'z'){
            cin>>name>>age>>stripe;
            Animal* z = new Zebra(name,age,stripe);
            vec.push_back(z);
        }

        if(animal == 'c'){
            cin>>name>>age>>toy;
            Animal* c = new Cat(name,age,toy);
            vec.push_back(c);
        }
    }

    for(int i=0 ; i<vec.size() ; i++)
        vec[i]->printInfo();

    for(int i=0 ; i<vec.size() ; i++)
        delete vec[i];

    return 0;
}
