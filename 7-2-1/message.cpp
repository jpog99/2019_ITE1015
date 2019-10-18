#include<vector>
#include<map>
#include<iostream>
#include "message.h"
using namespace std;

MessageBook::MessageBook(){}
MessageBook::~MessageBook(){}

void MessageBook::AddMessage(int number,const string& message){
    messages_.insert(make_pair(number,message));
}

void MessageBook::DeleteMessage(int number){
    messages_.erase(number);
}

const string& MessageBook::GetMessage(int number){
    return messages_.find(number)->second;
}

vector<int> MessageBook::GetNumbers(){
    vector<int> vec;
    map<int,string>::iterator it;
    for(it = messages_.begin(); it != messages_.end() ; ++it)
        vec.push_back(it->first);
    return vec;

}
