#include<iostream>
#include<vector>
#include<sstream>
#include "sorted.h"
using namespace std;

int main(){
    SortedArray v;
    vector<int> vec;
    int n;
    string job,str;

    getline(cin,str);
    stringstream ss(str);
    while(! ss.eof()){
        ss>>n;
        v.AddNumber(n);
    }

    while(job != "quit"){

        cin>>job;
        if(job == "ascend"){
            vec = v.GetSortedAscending();
            for (int i=0 ;i<vec.size() ; i++)
                cout<<vec[i]<<" ";
            cout<<endl;

        }

        else if(job == "descend"){
            vec = v.GetSortedDescending();
            for (int i=0 ;i<vec.size() ; i++)
                cout<<vec[i]<<" ";
            cout<<endl;
        }

        else if(job == "max"){
            cout<<v.GetMax()<<endl;
        }

        else if(job == "min"){
            cout<<v.GetMin()<<endl;
        }
        else if(job == "add"){
            cin >> n;
            v.AddNumber(n);
        }

    }

    return 0;
}

