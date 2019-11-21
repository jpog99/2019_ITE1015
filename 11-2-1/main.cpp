#include <iostream>
#include <sstream>
#include "my_vector.h"
using namespace std;

int main()
{
    string start;
    cin>>start;
    if(start=="new"){
        int num;
        cin>>num;

        MyVector a(num);
        cout<<"enter a"<<endl;
        cin>>a;

        MyVector b(num);
        cout<<"enter b"<<endl;
        cin>>b;

        cout<<"enter operations:"<<endl;

        string obj1,obj2; char oper;

        while(1){
            cin>>obj1;
            if(obj1=="quit") break;
            cin>>oper>>obj2;
            if(oper=='+'){
                if(obj1=="a"&&obj2=="b" || obj1=="b"&&obj2=="a"){
                    MyVector res = a+b;
                    cout<<res<<endl;
                }
                else if(obj1=="a"){
                    stringstream ss; int n;
                    ss<<obj2 ; ss>>n;
                    MyVector res = a + n;
                    cout<<res<<endl;
                }
                else if(obj1=="b"){
                    stringstream ss; int n;
                    ss<<obj2 ; ss>>n;
                    MyVector res = b + n;
                    cout<<res<<endl;
                }

            }
            if(oper=='-'){
                if(obj1=="a" && obj2=="b"){
                    MyVector res = a-b;
                    cout<<res<<endl;
                }
                else if(obj1=="b" && obj2=="a"){
                    MyVector res = b-a;
                    cout<<res<<endl;
                }
                else if(obj1=="a"){
                    stringstream ss; int n;
                    ss<<obj2 ; ss>>n;
                    MyVector res = a - n;
                    cout<<res<<endl;
                }
                else if(obj1=="b"){
                    stringstream ss; int n;
                    ss<<obj2 ; ss>>n;
                    MyVector res = b - n;
                    cout<<res<<endl;
                }

            }
        }
    }


    return 0;
}

