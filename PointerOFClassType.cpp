#include<iostream>
using namespace std;
class Simple
{
 public:
 	int a;
 	Simple()
 	{
 		a=12;
 	} 
};

int main()
{
 Simple obj;
 Simple* ptr;   // Pointer of class type
 ptr = &obj;
 
 cout << obj.a;
 cout << ptr->a;  // Accessing member with pointer
}
