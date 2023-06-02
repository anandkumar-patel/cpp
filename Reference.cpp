#include<iostream>
using namespace std;
int* first (int* x)
{ 
	//(*x++);
	printf("The value of x is in first()-->%d\n",*x);
  	return x;   // SAFE, x is outside this scope
}

int& second (int& x)
{ 
	x++;
	printf("The value of x is in second()-->%d\n",x);
   	return x;   // SAFE, x is outside this scope
}

int& third ()
{ 
	int q=13;
	printf("The value of q is in third()-->%d\n",q);
  	return q;   // ERROR, scope of q ends here
}

int& fourth ()
{ 
	static int x=23;
	printf("The value of x is in fourth()-->%d\n",x);
  	return x;   // SAFE, x is static, hence lives till the end.
}

int main()
{
	int a=10;
 	int *resultx=first(&a);   // UGLY and explicit
 	printf("Return of x from first()-->%d\n",*resultx);

 	int &resulty=second(a);   // CLEAN and hidden
  	printf("Return of x from second()-->%d\n",resulty);
  
  	int &resultz=third();   // 
  	printf("Return of x from second()-->%d\n",resultz);
  	
  	int &resultw=fourth();   // 
  	printf("Return of x from second()-->%d\n",resultw);
  	
}

