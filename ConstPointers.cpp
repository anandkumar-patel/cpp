#include<iostream>
using namespace std;
int main()
{
	//const varivale
	const int i = 10; // we have to initialized
	cout<<"The i is :"<<i<<endl;
	
	//Constant Pointers
	int var1 = 20, var2 = 30;
    int *const ptr = &var1;
    var1=40;   // this can be changable 
    //ptr = &var2;  // we can't change
    *ptr=15;
    printf("Value of const pointer is :%d\n", *ptr);
	
	
	//Pointer to Constant
	int var11 = 50;
	
    const int* ptr11;  //OR
    //int const* ptr11;
    
	ptr11 = &var11;
    //*ptr11 = 1; //we can't change the value through this pointer
    var11=60; // we can change the value like this
    printf("Value of Pointer to Constant is :%d\n", *ptr11);
    
    
    //Constant Pointer to a Constant
    int var22 = 70,var23 = 80;
    const int* const ptr21 = &var22;
    //*ptr21 = 1; // we can't the value through this pointer
    //ptr21 = &var23; //// we can't change this too
    var22=85;
    printf("Value of Constant Pointer to a Constant is :%d\n", *ptr21);
	
	
}
