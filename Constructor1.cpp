#include <iostream>
using namespace std;
class A
{ 
public:
A()
{
	cout<<"Constructor of A class"<<endl;
}
void show(); 
};
void A::show()
{
	cout<<"Show of base class"<<endl;
}
class B:virtual public A 
{
	public:
	B()
{
	cout<<"Constructor of B class"<<endl;
}
};

class C:virtual public A
{
	public:
	C()
{
	cout<<"Constructor of C class"<<endl;
}
};

class D:public B, public C 
{
	public:
		D()
{
	cout<<"Constructor of D class"<<endl;
}
	void show()
	{
		cout<<"Show() of D class"<<endl;
	}
};

int main()
{
 D obj;
 obj.show();
 return 0;
}
