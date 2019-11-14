#include <iostream>
#include "clocks.h"
#include "clock_time.h"
using namespace std;

Clock::Clock(int hour, int minute, int second, double driftPerSecond) : _driftPerSecond(driftPerSecond){
    _clockTime = ClockTime(hour,minute,second,1);
    _totalDrift = 0;
}

void Clock::reset(){
    _clockTime.reset();
}

void Clock::tick(){
    _clockTime.increment();
    _totalDrift += _driftPerSecond;
}

void SundialClock::displayTime(){
    cout<<"Sundial clock: ";
    _clockTime.display();
    cout<<"\ttotal drift: "<<_totalDrift<<endl;
}

void CuckooClock::displayTime(){
    cout<<"Cuckoo clock: ";
    _clockTime.display();
    cout<<"\ttotal drift: "<<_totalDrift<<endl;
}

void GrandFatherClock::displayTime(){
    cout<<"Grandfather clock: ";
    _clockTime.display();
    cout<<"\ttotal drift: "<<_totalDrift<<endl;
}

void WristClock::displayTime(){
    cout<<"Wrist clock: ";
    _clockTime.display();
    cout<<"\ttotal drift: "<<_totalDrift<<endl;
}

void AtomicClock::displayTime(){
    cout<<"Atomic clock: ";
    _clockTime.display();
    cout<<"\ttotal drift: "<<_totalDrift<<endl;
}
