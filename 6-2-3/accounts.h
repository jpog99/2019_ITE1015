#pragma once
class Account{
    public:
    int id,balance;

    Account(){balance=0;}
};

class AccountManager{
    public:
    Account acArr[10];
    int accOpen=-1;

    void Deposit(int id, int amount,AccountManager* acc);
    void Withdraw(int id, int amount,AccountManager* acc);
    void Transfer(int id, int id2, int amount,AccountManager* acc);
    void NewAcc(AccountManager* acc,Account* a);
    int checkBalance(int id);
};
