Name: Nourhan Essam Ahmed Shiba El-Hamd  
Section: 3  
ID: 33851

*Questions:

1. What is a class? 
Answer:
A class is a definition of a user-defined type. 
A class declaration specifies how data is to be stored, and it specifies the methods (class member functions) that can be used to access and manipulate that data. 
A class is a programming construct that defines the common state and behaviour of a group of similar objects.
It has a name, and it describes the state (member data) and services (member functions) provided by objects that are instances of the class.
Classes are the fundamental packaging unit of OO technology, They are a way to localize all the states and services associated with a cohesive concept.


2. How does a class accomplish abstraction, encapsulation, and data hiding? 
Answer:
Abstraction is the simplest interface to an object that provides all the features and services the intended user experts, The user uses the class through a public interface of class methods, and can not access private data. 
Data hiding is that the private data in the class can only be accessed through the public methods of this class, hence hiding these private data from being directly accessed from outside the class. 
Encapsulation is the details of implementation itself, such as data representation and methods. 


3. What is the relationship between an object and a class? 
Answer: 
The relationship between class and object is the same as the relationship between primitive data types and variables or instances of it.
Hence, the class defines the type and its interface and how it can be used,
while the object is the instance of the class itself, 
objects will be used according to the definition of the class.
It can also be seen as,
A class is a programming construct that defines the common state and behaviour of a group of similar objects.
It has a name, and it describes the state (member data) and services (member functions) provided by objects that are instances of the class.
Classes are the fundamental packaging unit of OO technology, They are a way to localize all the states and services associated with a cohesive concept.
While an object is a software entity that combines state and behaviour.


4. In what way, aside from being functions, are class function members different from class data members?
Answer:
Data members are private most of the time while Methods are declared as public.
Also data members are reserved in the memory once the object is instanciated while methods are only used once being called by this object (except for the default constructor).
Also each instanciated object has its own data members while all objects share the same functions of the class.


5. Define a class to represent a bank account. Data members should include the
depositor’s name, the account number (use a string), and the balance. Member functions
should allow the following:
* Creating an object and initializing it.
* Displaying the depositor’s name, account number, and balance
* Depositing an amount of money given by an argument
* Withdrawing an amount of money given by an argument
Just show the class declaration, not the method implementations. (Programming
Exercise 1 provides you with an opportunity to write the implementation.) 
Answer: 

*without method implementation: 

class BankAccount {
private:
	string name;
	string accountNumber;
	double balance;
public:
	//default constructor
	BankAccount();
	//constructor
	BankAccount(string n,string accN,double bal);
	//Dispalying Name,account,and balance
	void display();
	//setters and getters
	void SetName(string n);
	string GetName();
	void SetAccountNumber(string n);
	string GetAccountNumber();
	void SetBalance(double b);
	double GetBalance();
	//Deposite money
	void deposit(double amt);
	//Withdraw money
	void withdraw;

};

*With method implementation: 

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

6. When are class constructors called? When are class destructors called?
Answer: 
constructor is called when you create an instance or object of the class in case of default constructor, or is called when you call the constructor for this object.
destructor is caleed when  object expires, It is a "prepare to die" member function.

7. Provide code for a constructor for the bank account class from
Chapter Review
Question 5.
Answer:
//constructor
	BankAccount(string n,string accN,double bal){
		name=n;
		accountNumber=accN;
		balance=bal;
	}

8. What is a default constructor? What is the advantage of having one?
Answer:
Default constructor may have no arguments or initial ones, It is called automatically once the object is created, It allows you to create objects and initialize them directly without having to call a constructor.

9. Modify the Stock class definition (the version in stock20.h) so that
it has member
functions that return the values of the individual data members. Note:A
member
that returns the company name should not provide a weapon for altering
the array.
That is, it can’t simply return a string reference. It could return a
const reference.	