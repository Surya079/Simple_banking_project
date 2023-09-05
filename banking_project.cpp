#include<iostream>
using namespace std;
class  bank
{
protected:
     int account_no;
     int pin;
public:
    string Name;
    void getdetails()
    {
        cout<<"Enter the Account Holder name :";
        cin>>Name;
        cout<<"Enter Account No :";
        cin>>account_no;
    }
    void setpin()
    {
            cout<<"Enter the pin ";
            cin>>pin;

    }


};
class account_balance:public bank
{
protected:
     double balance=0;
public:
    void getbal()
    {
        cout<<"Available Balance ="<<balance<<endl;
    }
};
class withdraw: public account_balance
{
protected:
    int withdraw_amt=0;
public:
    void getwith_amt()
    {
       cout<<"Enter the Withdraw amount :";
       cin>>withdraw_amt;
       balance=balance-withdraw_amt;
       cout<<"Available Balance :"<<balance;
    }

};
class deposite_amt:public withdraw
{
protected:
    int deposit=0;

public:
    void getdep()
    {
        cout<<"Enter the deposit amount :";
        cin>>deposit;
        balance=balance+deposit;
        cout<<"Available balance :"<<balance<<endl;
    }


};

int main()
{
    deposite_amt b;
    int choise;
    bool menu;

    cout<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~ W E L C O M E ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"\t\t~~~~~~~~~~~~~~~~~~~~~I HOPE YOU THANKS TO TRUST ME ~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"\t\t~~~~~~~~~~~~~DONT PANIC YOUR ACCOUNT BALANCE IS FULL SECURE~~~~~~~~~~~~~~~\n";
    cout<<"\t\t                                                                          \n";

    b.getdetails();
    b.setpin();

  while(menu=true)
  {
    cout<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"\t\t~~~~~~ CHOOSE ANY ONE YOU WANT ~~~~~\n";
    cout<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"                       \n";
    cout<<"\t\t 1.Account Balance\n";
    cout<<"                       \n";
    cout<<"\t\t 2.Withdraw Cash\n";
    cout<<"                       \n";
    cout<<"\t\t 3.Deposit Cash";
    cout<<"                       \n";
    cin>>choise;
    switch(choise)
    {
    case 1:
        b.getbal();
        break;
    case 2:
        b.getwith_amt();
        break;
    case 3:
        b.getdep();
        break;

    default:
        cout<<"choose valid one...";
    }
  }

}



