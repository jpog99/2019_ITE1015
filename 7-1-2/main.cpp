#include<iostream>
#include<vector>
#include "intset.h"
using namespace std;

int main()
{
    IntegerSet inset;
    int num;
    string job;

    while(job != "quit"){
        cin>>job;

        if(job == "add"){
            cin>>num;
            inset.AddNumber(num);
        }

        else if(job == "del"){
            cin>>num;
            inset.DeleteNumber(num);
        }

        else if(job == "get"){
            cin>>num;
            cout << inset.GetItem(num)<< endl;
        }
    }
}

