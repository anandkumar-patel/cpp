#include<stdio.h>
#include<conio.h>
void main()
{
	int i=5 ;
int *ptr ;
ptr=&i ;
printf("The value of i = %d",ptr[0]);
printf("The ptr = %u",ptr);
int y=*ptr++;
printf("\nx = %d and ptr = %u",y,ptr);

}
