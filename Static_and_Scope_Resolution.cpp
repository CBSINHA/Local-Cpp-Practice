#include<iostream>
#include<vector>
using namespace std;
class Bank{
    private:
    int x=10;
    public:
    int accNumber;
    int balance=1000;
    static int numberofaccounts;
    Bank(){}
    Bank(int accNumber,int balance){
        this->accNumber=accNumber;
        this->balance=balance;
    }
    void Deposit(int amount);
    static int getnumberofaccounts();
};
int Bank::numberofaccounts=5;
void Bank::Deposit(int amount){//The :: is the scope resolution operator and here it is used to define the function outside of the class
    balance+=amount;
}
int Bank::getnumberofaccounts(){
    return numberofaccounts;
}
int main()
{
    Bank b1;
    cout<<Bank::getnumberofaccounts()<<endl;
    // cout<<b1.x; Can't access
    b1.Deposit(200);
    cout<<b1.balance;
 return 0;
}