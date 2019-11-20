#include <iostream>
#include <sstream>
#include "my_string2.h"
using namespace std;

int main()
{
    string obj1,obj2;
    char oper;

    string start;
    cin>>start;


    if(start=="new"){
        cout<<"enter a:"<<endl;
        MyString2 a;
        cin>>a;
        cout<<"enter b:"<<endl;
        MyString2 b;
        cin>>b;
        while(1){
            cout<<"enter operation seperated with spaces"<<endl;
            cin>>obj1;
            if(obj1=="quit") break;
            cin>>oper>>obj2;

            if(oper=='+'){
                if(obj1=="a"&&obj2=="b"){
                    MyString2 res = a+b;
                    cout<<res<<endl;
                }
                else if(obj1=="b"&&obj2=="a"){
                    MyString2 res = b+a;
                    cout<<res<<endl;
                }
            }

            if(oper=='*'){
                stringstream ss; int n;
                ss<<obj2 ; ss>>n;
                if(obj1=="a"){
                    MyString2 res = a*n;
                    cout<<res<<endl;
                }
                else if(obj1=="b"){
                    MyString2 res = b*n;
                    cout<<res<<endl;
                }
            }
        }
    }

    return 0;
}

