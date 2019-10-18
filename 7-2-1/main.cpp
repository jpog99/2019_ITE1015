#include <iostream>
#include <vector>
#include <map>
#include "message.h"
using namespace std;

int main()
{
    MessageBook mb;
    string msg,job;
    int num;

    while(job != "quit"){
        cin>>job;

        if(job == "add"){
            cin>>num;
            getline(cin,msg);
            mb.AddMessage(num,msg);
        }
        if(job == "delete"){
            cin>>num;
            mb.DeleteMessage(num);
        }
        if(job == "print"){
            cin>>num;
            cout<<mb.GetMessage(num)<<endl;
        }
        if(job == "list"){
            vector<int> v = mb.GetNumbers();
            for(int i=0; i<v.size(); i++){
                cout<<v[i]<<" : "<<mb.GetMessage(v[i])<<endl;
            }
        }

    }
    return 0;
}

