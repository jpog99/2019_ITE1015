#include <iostream>
#include <vector>
using namespace std;

class A{
    int* memberA;
    
    public:
        A(int arg){ 
            memberA = new int;
            *memberA = arg;
            cout<<"new memberA"<<endl;
        }

        virtual ~A(){
          delete memberA;
          cout<<"delete memberA"<<endl;
         }

        virtual void print(){cout<<"*memberA "<<*memberA<<endl;}
};

class B : public A{
    double* memberB;

    public:
        B(double arg) : A(1){
            memberB = new double;
            *memberB = arg;
            cout<<"new memberB"<<endl;
        }

        virtual ~B(){
          delete memberB;
          cout<<"delete memberB"<<endl;  
        }

        virtual void print(){
            A::print();
            cout<<"*memberB "<<*memberB<<endl;}
};

class C : public B{
    string* memberC;

    public:
        C(const string& arg) : B(1.1){
            memberC = new string;
            *memberC = arg;
            cout<<"new memberC"<<endl;
        }

        virtual ~C(){
          delete memberC;
          cout<<"delete memberC"<<endl;
        }

        virtual void print(){
            B::print();
            cout<<"*memberC "<<*memberC<<endl;}
};

int main(){
    int num;double db;string str;
    cin>>num>>db>>str;

    vector<A*> arr;
    A* a = new A(num);
    A* b = new B(db);
    A* c = new C(str);
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for(vector<A*>::iterator it=arr.begin() ; it!=arr.end() ; it++)
        (*it)->print();
    for(vector<A*>::iterator it=arr.begin() ; it!=arr.end() ; it++)
        delete *it;
    
    return 0;
}
