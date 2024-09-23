#include<iostream>
#include<vector>
using namespace std;
class BankAccount{
    private:
    int balance=0;
    public:
    void deposit(int amount){
        if(amount>0)
        balance+=amount;
    }
    void withdraw(int amount){
        if(amount>0 &&amount<=balance)
        balance-=amount;
    }
    int getBalance(){
        return balance;
    }
};
int main()
{
    BankAccount b1;
    b1.deposit(1000);
    b1.withdraw(750);
    cout<<b1.getBalance();
 return 0;
}