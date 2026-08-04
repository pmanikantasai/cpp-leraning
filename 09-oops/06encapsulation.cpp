#include <iostream>
#include <string>
using namespace std;

class Bankaccount{
    private:
        string account_holder;
        string account_no;
        double account_balance;
    public:
    // constructor 
        Bankaccount(string name,string acno,double amount){
            account_holder = name;
            account_no = acno;
            account_balance = amount;
        }
        //getter on account_holder
        string getAccountholder(){return account_holder;}

        //getter on account_no
        string getAccNo(){return account_no;}

        //getter on account_balance
        double getBalance(){return account_balance;}

        //setter on account_holder
        void setAccountholder(string name){account_holder=name;}

        //deposit the money
        void deposit(double money){
            if (money > 0){
                account_balance += money;
                cout <<"your amount is deposited "<< money << endl;
                cout<<"Total Balance : "<<getBalance()<<endl;
            }else{
                cout << "make sure valid money to deposit";
            }
        }
        // withdrawl the money
        void withdrawl(double money){
            if (money > 0 && money <= account_balance){
                account_balance -= money;
                cout<<"withdrawl successful"<<endl;
                cout<<"Total Balance : "<<getBalance()<<endl;
            }else{
                cout<<"invalid amount"<< endl;
                getBalance();
            }
        }
        void displayAccount(){
            cout<<"\n...Account details ..."<<endl;
            cout<<"Account Holder :"<<account_holder<<endl;
            cout<<"Account no : "<< account_no<< endl;
            cout<<"balance : "<<account_balance<<endl;
        }
        
};
int main(){
    Bankaccount myacc("manikanta","12345678",5000);
    // myacc.displayAccount();
    //myacc.deposit(600);
    myacc.withdrawl(700);
    myacc.displayAccount();
    return 0;
}