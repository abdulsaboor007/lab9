#include<iostream>
using namespace std;
class ATM
{
	public:
		int en;
		int a;
		int b;
		int c;
		int d;
		ATM();
};
ATM::ATM()
{
	cout<<"choose one of the following option\npress 1 for withdraw money\npress 2 for transfer\npress 3 for bill pay\npress 4 for balance enquiry:";
	cin>>en;
	if (en==1)
	{
		cout<<"\nenter the amount of money you want to with draw:";
		cin>>a;
		if(a>s.balance)
		{
			cout<<"\nyou cannont withdraw more money than you have";
			
			
		}
		if (a<=s.balance)
		{
		   	s.balance=s.balance-a;
		   	cout<<"\nyour new balance:"<<s.balance;
		}
	}
	if (en==2)
	{
		cout<<"\nenter the amount of money you want to transfer and the account number of receiver:";
		cin>>a>>b;
		if(a>s.balance)
		{
			cout<<"\nyou cannont tranfor more money than you have";
			break;
			
		}
		if (a<=s.balance)
		{
		   	cout<<"\nyou have transferred the money";
		   	s.balance=s.balance-b;
		   	cout<<"\nyour new balance:"<<s.balance;
		}
    }
    if(en==3)
    {
    	cout<<"\nenter the amount of bill amount:";
    	cin>>c;
    	if(c>s.balance)
    	{
    		cout<<"\nyour amount is greater is than your original amount";
    		break;
		}
		if(c<=s.balance)
		{
			s.balance=s.balance-c;
			cout<<"\nyour new amount:"<<s.balance;
		}
	}
	if(en==4)
	{
		cout<<"\nyour current balance:"<<s.balance;
	}
}

class user
{
	public:
		char name[100]="sam";
		int pincode=1234;
		int phonenum=99998888;
		user();
};
user::user()
{
	cout<<"your name:"<<name;
	cout<<"your pincode:"<<pincode;
	cout<<"your phonenumber:"<<phonenum;
};
class account
{
	public:
		char accounttype[50]="current";
		int balance=8000;
		account();
};
account::account()
{
	cout<<"\nAccount type:"<<accounttype;
	cout<<"\nbalance:"<<balance;
}
int main()
{   account s;
	user t;
	atm w;
	int pin;
	cout<<"\nenter the pin:";
	cin>>pin;
	if(pin==t.pincode)
	{
		cout<<t.name;
		cout<<t.phonenum;
		cout<<t.pincode;
		cout<<s.accounttype;
		cout<<s.balance;
	}
return 0;
}
