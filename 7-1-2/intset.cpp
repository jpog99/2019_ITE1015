#include<iostream>
#include<vector>
#include<algorithm>
#include"intset.h"
using namespace std;

IntegerSet::IntegerSet(){}
IntegerSet::~IntegerSet(){}

void IntegerSet::AddNumber(int num){
    vector<int>::iterator it;
    it = find(numbers_.begin(),numbers_.end(),num);

    if(it != numbers_.end())
        cout<<"";
    else
        numbers_.push_back(num);

    sort(numbers_.begin(),numbers_.end());
    for(int i=0;i<numbers_.size();++i)
        cout<<numbers_[i]<<" ";
    cout<<endl;
}

void IntegerSet::DeleteNumber(int num){
    vector<int>::iterator it;
    it = find(numbers_.begin(),numbers_.end(),num);

    if(it == numbers_.end())
        cout<<"";
    else
        numbers_.erase(it);

    sort(numbers_.begin(),numbers_.end());
    for(int i=0;i<numbers_.size();++i)
        cout<<numbers_[i]<<" ";
    cout<<endl;
}

int IntegerSet::GetItem(int pos){
    if (pos<numbers_.size())
        return numbers_.at(pos);
    else
        return -1;
}
