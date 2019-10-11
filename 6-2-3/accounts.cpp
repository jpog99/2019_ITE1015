#include<iostream>
#include"accounts.h"
using namespace std;

void AccountManager::NewAcc(AccountManager* acc,Account* a){
    acc->accOpen++;
    if(acc->accOpen>=10)
      cout<<"Limit reached! You can only create 10 accounts!"<<endl;
    else{
      a->id = acc->accOpen;
      acc->acArr[acc->accOpen] = *a;
      cout<<"Account for user "<<acc->accOpen<<" registered!"<<endl;
      cout<<"Balance of user "<<acc->accOpen<<" : "<<a->balance<<" won."<<endl;
    }
}

void AccountManager::Deposit(int id, int amount,AccountManager* acc){
    if(acc->acArr[id].id != id)
      cout<<"Error: Account does not exist!"<<endl;
    else if(amount + acc->checkBalance(id) > 1000000){
        cout<<"Failure: Maximum balance of account must not exceed 1,000,000 won!"<<endl;
        cout<<"Balance of user "<<id<<" : "<<acc->checkBalance(id)<<" won."<<endl;
    }else{
        acc->acArr[id].balance += amount;
        cout<<"Success! "<<amount<<" won deposited to user "<<id<<endl;
        cout<<"Balance of user "<<id<<" : "<<acc->checkBalance(id)<<" won."<<endl;
    }
}

void AccountManager::Withdraw(int id, int amount,AccountManager* acc){
    if(acc->acArr[id].id != id)
        cout<<"Error: Account does not exist!"<<endl;
    else if(amount > acc->checkBalance(id)){
        cout<<"Failure: Insufficient balance!"<<endl;
        cout<<"Balance of user "<<id<<" : "<<acc->checkBalance(id)<<" won."<<endl;
    }else{
        acc->acArr[id].balance -= amount;
        cout<<"Success! "<<amount<<" won withdrawed from user "<<id<<endl;
        cout<<"Balance of user "<<id<<" : "<<acc->checkBalance(id)<<" won."<<endl;
    }
}

void AccountManager::Transfer(int id, int id2, int amount,AccountManager* acc){
    if(acc->acArr[id].id != id || acc->acArr[id2].id != id2 )
        cout<<"Error: Account does not exist!"<<endl;
    else if(amount > acc->checkBalance(id)){
        cout<<"Failure! Insufficient balance to transfer from user "<<id<<" to user "<<id2<<" "<<amount<<endl;
        cout<<"Balance of user "<<id<<" : "<<acc->checkBalance(id)<<" won."<<endl;
        cout<<"Balance of user "<<id2<<" : "<<acc->checkBalance(id2)<<" won."<<endl;
    }
    else{
        acc->acArr[id].balance -= amount;
        acc->acArr[id2].balance += amount;
        cout<<"Success! Transfer from user "<<id<<" to user "<<id2<<" "<<amount<<endl;
        cout<<"Balance of user "<<id<<" : "<<acc->checkBalance(id)<<" won."<<endl;
        cout<<"Balance of user "<<id2<<" : "<<acc->checkBalance(id2)<<" won."<<endl;
    }
}

int AccountManager::checkBalance(int id){
    return acArr[id].balance;
}

