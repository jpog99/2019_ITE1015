#pragma once
using namespace std;

class Animal{
protected:
    string _name;
    int _age;
public:
    Animal(string name,int age): _name(name),_age(age){}
    virtual void printInfo(){}

};

class Zebra : public Animal{
    int numStripes;
public:
    Zebra(string name,int age,int stripes): Animal(name,age) ,numStripes(stripes){}
    void printInfo();
};

class Cat : public Animal{
    string favouriteToy;
public:
    Cat(string name,int age,string toy): Animal(name,age) ,favouriteToy(toy){}
    void printInfo();
};

