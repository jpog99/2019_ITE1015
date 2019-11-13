#include <iostream>
#include <vector>
using namespace std;

class B
{
public:
 virtual ~B() {}
};
class C : public B
{
public:
 void test_C() { std::cout << "C::test_C()" << std::endl; }
};
class D : public B
{
public:
 void test_D() { std::cout << "D::test_D()" << std::endl; }
};

int main()
{
    string type;
    vector<B*> arr;

    while (type != "0"){
        cin>>type;
        if (type == "B"){
           B* b = new B;
           arr.push_back(b);
        }
        if (type == "C"){ 
            B* c = new C;
            arr.push_back(c);
        }
        if (type == "D"){ 
            B* d = new D;
            arr.push_back(d);
        }
    }

    for(int i=0 ; i<arr.size() ; i++){
        C* c = dynamic_cast<C*> (arr[i]);
        D* d = dynamic_cast<D*> (arr[i]);
        if(c)
            c->test_C();
        if(d)
            d->test_D();
    }

    for(int i=0 ; i<arr.size() ; i++)
        delete arr[i];

    return 0;
}

