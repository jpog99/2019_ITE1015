#pragma once
#include "clock_time.h"

class Clock{
protected:
    ClockTime _clockTime;
    double _driftPerSecond;
    double _totalDrift;
public:
    Clock(int hour, int minute, int second, double driftPerSecond);
    void reset();
    void tick();
    virtual void displayTime() = 0;
};

class NaturalClock : public Clock{
public:
    NaturalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour,minute,second,driftPerSecond){}
    void displayTime()=0;
};

class MechanicalClock: public Clock{
public:
    MechanicalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour,minute,second,driftPerSecond){}
    void displayTime()=0;
};

class DigitalClock : public Clock{
public:
    DigitalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour,minute,second,driftPerSecond){}
    void displayTime()=0;
};

class QuantumClock : public Clock{
public:
    QuantumClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour,minute,second,driftPerSecond){}
    void displayTime()=0;
};

class SundialClock : public NaturalClock{
public:
    SundialClock(int hours, int minute, int seconds) : NaturalClock(hours,minute,seconds, 0.0) {}
    void displayTime();
};

class CuckooClock : public MechanicalClock{
public:
    CuckooClock(int hours, int minute, int seconds) : MechanicalClock(hours,minute,seconds, 0.000694444) {}
    void displayTime();
};

class GrandFatherClock : public MechanicalClock{
public:
    GrandFatherClock(int hours, int minute, int seconds) : MechanicalClock(hours,minute,seconds, 0.000347222) {}
    void displayTime();
};

class WristClock : public DigitalClock{
public:
    WristClock(int hours, int minute, int seconds) : DigitalClock(hours,minute,seconds, 0.000034722) {}
    void displayTime();
};

class AtomicClock : public QuantumClock{
public:
    AtomicClock(int hours, int minute, int seconds) : QuantumClock(hours,minute,seconds, 0.0) {}
    void displayTime();
};
