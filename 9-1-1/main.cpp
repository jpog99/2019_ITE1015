#include <iostream>
#include <vector>
using namespace std;

class A{
    public:
        virtual string test(){return "A::test()";}
};

class B : public A{
    public:
        virtual string test(){return "B::test()";}
};

class C : public B{
    public:
        string test(){return "C::test()";}
};

int main(){
    A* a = new A;
    A* b = new B;
    A* c = new C;
    vector<A*> arr;
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for(vector<A*>::iterator it=arr.begin() ; it!=arr.end() ; it++){
         cout<<(*it)->test()<<endl;
         delete *it;
    }

    return 0;
}


