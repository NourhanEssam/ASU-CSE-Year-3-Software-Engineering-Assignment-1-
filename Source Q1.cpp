#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
	string name;
	string accountNumber;
	double balance;
public:
	//default constructor
	BankAccount(){
		name="None";
		accountNumber="None";
		balance=0;
	}
	//constructor
	BankAccount(string n,string accN,double bal){
		name=n;
		accountNumber=accN;
		balance=bal;
	}
	//Dispalying Name,account,and balance
	void display(){
		cout<<"Name: "<<name<<endl<<"Account Number: "<<accountNumber<<endl<<"Balance: "<<balance<<endl;
	}
	//setters and getters
	void SetName(string n){name=n;}
	string GetName(){return name;}
	void SetAccountNumber(string n){accountNumber=n;}
	string GetAccountNumber(){return accountNumber;}
	void SetBalance(double b){balance=b;}
	double GetBalance(){return balance;}
	//Deposite money
	void deposit(double amt){
		balance=balance+amt;
	}
	//Withdraw money
	void withdraw(double amt){
		if(amt>balance)
		{cout<<"Amount more than balance"<<endl<<"Can't withdraw"<<endl;}
		else
		{balance=balance-amt;}
	}

};
