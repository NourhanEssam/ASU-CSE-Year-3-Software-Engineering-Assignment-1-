#include <iostream>
#include <string>
using namespace std;

class Move
{
private:
double x;
double y;

public:
Move(double a = 0, double b = 0) // sets x, y to a, b
{
	x=a;
	y=b;
}
void showmove() const // shows current x, y values
{
	cout<<"x: "<<x<<" y: "<<y<<endl;
}
Move add(const Move & m) const
// this function adds x of m to x of invoking object to get new x,
// adds y of m to y of invoking object to get new y, creates a new
// move object initialized to new x, y values and returns it
{
	Move NewMove;
	NewMove.x=(m.x)+(this->x);
	NewMove.y=(m.y)+(this->y);
	return NewMove;
}
void reset(double a = 0, double b = 0) // resets x,y to a, b
{
	x=a;
	y=b;
}
};

void main()
{
	/*Move x(5,10);
	Move y(5,10);
	x.showmove();
	y.showmove();
	Move z = x.add(y);
	z.showmove();

	x.reset();
	x.showmove();*/

	    cout<<"enter shape's parameters: ";
		int n,m;
		cin>>n>>m;
		Move x(n,m);
		cout<<"enter another shape's parameters: ";
		cin>>n>>m;
		Move y(n,m);

		Move z=x.add(y);
		cout<<"first shape: "<<endl;
		x.showmove();
		cout<<"Second shape: "<<endl;
		y.showmove();
		cout<<"Summation of 2 shapes: "<<endl;
		z.showmove();
		cout<<endl<<"Resetting 3 shapes ... "<<endl;
		x.reset();
		y.reset();
		z.reset();
		cout<<"first shape: "<<endl;
		x.showmove();
		cout<<"Second shape: "<<endl;
		y.showmove();
		cout<<"Summation of 2 shapes: "<<endl;
		z.showmove();
}