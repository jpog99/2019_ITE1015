#include<vector>
#include<algorithm>
#include "sorted.h"
using namespace std;

SortedArray::SortedArray(){}
SortedArray::~SortedArray(){}

void SortedArray::AddNumber(int num){
    numbers_.push_back(num);
}

vector<int> SortedArray::GetSortedAscending(){
    sort(numbers_.begin(),numbers_.end());
    return numbers_;
}

vector<int> SortedArray::GetSortedDescending(){
    sort(numbers_.begin(),numbers_.end());
    reverse(numbers_.begin(),numbers_.end());
    return numbers_;
}

int SortedArray::GetMax(){
    vector<int>::iterator it;
    it = max_element(numbers_.begin(),numbers_.end());
    return *it;
}

int SortedArray::GetMin(){
    vector<int>::iterator it;
    it = min_element(numbers_.begin(),numbers_.end());
    return *it;
}


