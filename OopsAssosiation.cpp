#include <iostream>
using namespace std;
class Account{
    public:
    Account(int id,int balance): id(id),balance(balance){}
    int getId(){
        return id;
    }
    int getBalance(){
        return balance;
    }
    bool withdraw(int amount){
        if(amount<= balance){
            balance -= amount;
            return true;
        }
        return false;
    }
    void deposit(int amount){
        balance += amount;
    }
    private:
    int id,balance;
};
class Bank{
    public:
    void transfer(Account * from,Account * to,int amount){
        if(from->withdraw(amount)){
            to->deposit(amount);
            cout<<"Amount "<<amount<<" transfered from "<<from->getId()<<" to "<<to->getId()<<endl;
        }else{
            cout<<"Insufficient balance in account "<<from->getId()<<endl;
        }
    }
};
int main(){
    int id1,balance1,id2,balance2;
    cout<<"Enter id and balance for first account: "<<endl;
    cin>>id1>>balance1;
    cout<<"Enter id and balance for second account: "<<endl;
    cin>>id2>>balance2;
    Account *Acc1  = new Account(id1,balance1);
    Account * Acc2 = new Account(id2,balance2);
    Bank bank;
    bank.transfer(Acc1,Acc2,200000);
    cout<<"Account "<<Acc1->getId()<<" balance: "<<Acc1->getBalance()<<endl;
    cout<<"Account "<<Acc2->getId()<<" balance: "<<Acc2->getBalance()<<endl;
    
    return 0;
}