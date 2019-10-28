#include <iostream>
#include <set>
#include <algorithm>
#include <sstream>
#include "setfunc.h"
using namespace std;

set<int> parseSet(const string& str){
    set<int> st;
    stringstream ss(str),input;
    string token;


    while(getline(ss,token,' ')){
        if(token != "{"){
            int n;
            input<<token;
            input >> n;
            st.insert(n);
            input.str("");
            input.clear();
        }
    }


    ss.str("");
    ss.clear();
    return st;
}



void printSet(const set<int>& i){
    cout<<"{ ";
    for(set<int>::iterator it = i.begin(); it!=i.end(); ++it)
        cout<<*it<<" ";
    cout<<"}"<<endl;
}



set<int> getUnion(const set<int>& set0, const set<int>& set1){
    set<int> set3;
    for(set<int>::iterator it = set0.begin(); it!=set0.end(); ++it)
        set3.insert(*it);
    for(set<int>::iterator it = set1.begin(); it!=set1.end(); ++it)
        set3.insert(*it);
    return set3;
}



set<int> getDifference(const set<int>& set0, const set<int>& set1){
    set<int> set3;
    set_difference(set0.begin(),set0.end(),set1.begin(),set1.end(),inserter(set3, set3.end()));
    return set3;

}



set<int> getIntersection(const set<int>& set0, const set<int>& set1){
    set<int> set3;
    set_intersection(set0.begin(),set0.end(),set1.begin(),set1.end(),inserter(set3, set3.end()));
    return set3;

}
