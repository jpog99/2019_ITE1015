#include <iostream>
#include <vector>
using namespace std;

class A{
    public:
        virtual string getTypeInfo(){return "This is an instance of class A";}
};

class B : public A{
    public:
        string getTypeInfo(){return "This is an instance of class B";}
};

class C : public B{
    public:
        string getTypeInfo(){return "This is an instance of class C";}
};

void printObjectTypeInfo1(A* object){
    cout<<object->getTypeInfo()<<endl;
}
void printObjectTypeInfo2(A& object){
    cout<<object.getTypeInfo()<<endl;
}

int main(){
    A* a = new A;
    A* b = new B;
    A* c = new C;
    vector<A*> arr;
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for(vector<A*>::iterator it=arr.begin() ; it!=arr.end() ; it++){
       printObjectTypeInfo1(*it);
       A& rf = *(*it);
       printObjectTypeInfo2(rf);
       delete *it;
    }

    return 0;

}

