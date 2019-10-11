#include<iostream>
#include"accounts.h"
using namespace std;

int main(){
    AccountManager acc;
    while(1){
        cout<<endl;
        cout << endl << "Job?" << endl;
        char job;int id,id2,amount;

        cin >> job;

        Account a;

        if(job == 'N')
            acc.NewAcc(&acc,&a);
        else if(job == 'D'){
            cin>>id>>amount;
            acc.Deposit(id,amount,&acc);
        }else if(job == 'W'){
            cin>>id>>amount;
            acc.Withdraw(id,amount,&acc);
        }else if(job == 'T'){
            cin>>id>>id2>>amount;
            acc.Transfer(id,id2,amount,&acc);
        }else if(job == 'Q')
            break;
    }
    return 0;
}
