#include<stdio.h>
#include "extern1.c"
int main()
{
	extern int a;	
	fun();
	printf("%d",a);
	return 0;
}
