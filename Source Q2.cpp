#include <iostream>
#include <string>
using namespace std;

class Person {
private:
string lname; // Person’s last name
string fname; // Person’s first name

public:
	//Constructors
Person() {
	lname = "";
	fname = "";
} // #1

Person(const string & ln,const string & fn="Heyyou"){
	lname=ln;
	fname=fn;
} // #2 taking either one or 2 arguments

// the following methods display lname and fname
void Show() const{
	cout<<fname<<" "<<lname<<endl;
}// firstname lastname format

void FormalShow() const{
	cout<<fname<<", "<<lname<<endl;
}// lastname, firstname format
};

void main(){
Person one; // use default constructor
Person two("Smythecraft"); // use #2 with one default argument
Person three("Dimwiddy", "Sam"); // use #2, no defaults
one.Show();
one.FormalShow();
two.Show();
two.FormalShow();
three.Show();
three.FormalShow();
}