#include<iostream>
#include "minimal_fighter.h"
using namespace std;

MinimalFighter::MinimalFighter(int _hp, int _power){
    mHp = _hp;
    mPower = _power;
    if (_hp > 0)
        mStatus = Alive;
    else if(_hp<=0)
        mStatus = Dead;
}

int MinimalFighter::hp(){
  return mHp;
}

int MinimalFighter::power(){
    return mPower;
}

FighterStatus MinimalFighter::status(){
    return mStatus;
}

void MinimalFighter::setHp(int _hp){
    mHp = _hp;
}

void MinimalFighter::hit(MinimalFighter* _enemy){
    mHp -= _enemy->mPower;
    _enemy->mHp -= mPower;
    if (mHp <= 0) mStatus = Dead;
    else if (_enemy->mHp <= 0 ) _enemy->mStatus = Dead;
}

void MinimalFighter::attack(MinimalFighter* _enemy){
    _enemy->mHp -= mPower;
    mPower = 0;
    if (mHp <= 0) mStatus = Dead;
    else if (_enemy->mHp <= 0 ) _enemy->mStatus = Dead;
}

void MinimalFighter::fight(MinimalFighter* _enemy){
    while (mHp!=0 && _enemy->mHp!=0){
        mHp -= _enemy->mPower;
        _enemy->mHp -= mPower;
    }
    if (mHp <= 0) mStatus = Dead;
    else if (_enemy->mHp <= 0 ) _enemy->mStatus = Dead;
}
