#include <iostream>
#include <vector>
#include "clock_time.h"
#include "clocks.h"
using namespace std;

int main(){
    int seconds;
    cin>>seconds;

    vector<Clock*> arr;
    arr.push_back(new SundialClock(0,0,0));
    arr.push_back(new CuckooClock(0,0,0));
    arr.push_back(new GrandFatherClock(0,0,0));
    arr.push_back(new WristClock(0,0,0));
    arr.push_back(new AtomicClock(0,0,0));

    cout<<"Reporting clock times after resetting...."<<endl;
    for (int i=0 ; i<arr.size() ; i++){
        arr[i]->reset();
        arr[i]->displayTime();
    }

    cout<<endl<<"Running the clocks..."<<endl;
    cout<<endl;

    for (int i=0 ; i<arr.size() ; i++){
        for(int j=0 ; j<seconds ; j++)
            arr[i]->tick();
    }

    for(int i=0 ; i<arr.size() ; i++){
        arr[i]->displayTime();
    }

    for(int i=0 ; i<arr.size() ; i++)
        delete arr[i];

    return 0;
}
