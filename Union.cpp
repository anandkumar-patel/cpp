#include <stdio.h>
#include <conio.h>

union item
{
 int a;
 float b;
 char ch;
};

int main( )
{
 union item it;
 it.a = 12;
 it.b = 20.2;
 it.ch='z';
 printf("%d\n",it.a);
 printf("%f\n",it.b);
 printf("%c\n",it.ch);
 getch();
 return 0;
}
