#include<stdio.h>
int main()
{
   float grosssalary,allowance,deduction,netsalary;
   printf("enter grosssalary=");
   scanf("%f",&grosssalary);
   allowance=grosssalary*10/100;
   deduction=grosssalary*3/100;
   netsalary=grosssalary+allowance-deduction;
   printf("\ngrosssalary= Rs %f",grosssalary);
   printf("\nallowance= Rs %f",allowance);
   printf("\ndeduction= Rs %f",deduction);
   printf("\nnetsalary= Rs %f\n",netsalary);
   return 0;
}
