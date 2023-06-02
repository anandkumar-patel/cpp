#include <stdio.h>

struct Employee
{
   int ename;
   int ssn;
   float salary;
   struct date
       {
       int date;
       int month;
       int year; 
       }doj;
}emp = {11,1000,1000.50,{22,6,1990}};

int main(int argc, char *argv[])
{
printf("\nEmployee Name   : %d",emp.ename);  
printf("\nEmployee SSN    : %d",emp.ssn);  
printf("\nEmployee Salary : %f",emp.salary);  
printf("\nEmployee DOJ    : %d/%d/%d",emp.doj.date,emp.doj.month,emp.doj.year);  

struct Employee emp1,emp2;
emp2 = {02,1112,25000,{25,06,86}};
emp1.ename=23;
emp1.ssn=1112;
emp1.salary=1000;
emp1.doj={11,12,45};   
printf("\n****************************\n");
printf("\nEmployee Name   : %d",emp1.ename);  
printf("\nEmployee SSN    : %d",emp1.ssn);  
printf("\nEmployee Salary : %f",emp1.salary);  
printf("\nEmployee DOJ    : %d/%d/%d",emp1.doj.date,emp1.doj.month,emp1.doj.year);  

return 0;
}
