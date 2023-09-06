#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class Account
{
public:
    string accountNumber;
    string accountHolder;
    double Balance;

    Account(string number,string holder, double initialBalance)
    {
        accountNumber = number;
        accountHolder = holder;
        Balance = initialBalance;
    }
    void deposit(double amount)
    {
        Balance=Balance+amount;
        cout<<"Deposited : $ "<<amount<<endl;
    }
    void withdraw(double amount)
    {
        if(Balance>=amount)
        {
            Balance=Balance-amount;
            cout<<"Withdrawn: $ "<<amount<<endl;
        }
        else
        {
            cout<<"Insufficient balance!"<<endl;
        }
    }
    void display()
    {
        cout<<"Account Number : "<<accountNumber<<endl;
        cout<<"Account Holder : "<<accountHolder<<endl;
        cout<<"Balance: $ "<<Balance<<endl;
    }
};
vector<Account>accounts;
int main()
{
    while(true)
    {
    cout<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~ W E L C O M E ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"\t\t~~~~~~~~~~~~~~~~~~~~     BANK MANAGEMENT SYSTEM    ~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"\t\t~~~~~~~~~~~~~DONT PANIC YOUR ACCOUNT BALANCE IS FULL SECURE~~~~~~~~~~~~~~~\n";
    cout<<"\t\t                                                                          \n";
    cout<<"\t\t 1.  Create Account"<<endl;
    cout<<"\t\t 2.  Deposit"<<endl;
    cout<<"\t\t 3.  Withdraw"<<endl;
    cout<<"\t\t 4.  Display Account Details"<<endl;
    cout<<"\t\t 5.  Exit"<<endl;

    int choise;
    cin>>choise;

    switch(choise)
    {
    case 1:
        {
        string accNum,accHolder;
        double initialBalance;
        cout<<"Enter Account Number: ";
        cin>>accNum;
        cout<<"Enter Account Holder Name: ";
        cin.ignore();
        getline(cin,accHolder);
        cout<<"Enter Initial Balance: ";
        cin>>initialBalance;
        Account newAccount(accNum,accHolder,initialBalance);
        accounts.push_back(newAccount);
        cout<<"Account created successfully!"<<endl;
        break;
    }
    case 2:
        {
        string accNum;
        double amount;
        cout<<"Enter Account Number: ";
        cin>>accNum;
        cout<<"Enter Deposit Amount: ";
        cin>>amount;
        for(Account &acc: accounts)
        {
            if(acc.accountNumber == accNum)
            {
                acc.deposit(amount);
                break;
            }
        }
        break;
    }
    case 3:
        {
        string accNum;
        double amount;
        cout<<"Enter Account Number: ";
        cin>>accNum;
        cout<<"Enter withdraw Amount: ";
        cin>>amount;
        for(Account &acc:accounts)
        {
            if(acc.accountNumber==accNum)
            {
                acc.withdraw(amount);
                break;
            }
        }
        break;
       }
    case 4:
        {
        string accNum;
        cout<<"Enter Account Number: ";
        cin>>accNum;
        for(Account &acc : accounts)
        {
            if(acc.accountNumber == accNum)
            {
                acc.display();
                break;
            }
        }
        break;
        }
    case 5:
        cout<<"Exiting Program. Goodbye!"<<endl;
        return 0;

    default:
        cout<<"Invalid choice. Please try again."<<endl;

    }
  }
  return 0;
}


