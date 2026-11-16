#include<stdio.h>
int main()
{
   float principal,rate,time,interest,amount;
   printf("enter principal=");
   scanf("%f",&principal);
   printf("enter rate=");
   scanf("%f",&rate);
   printf("enter time=");
   scanf("%f",&time);
   interest=(principal*rate*time)/100;s 
   amount=principal+interest;
   printf("\nprincipal= Rs %f",principal);
   printf("\ninterest= Rs %f",interest);
   printf("\namount= Rs %f\n",amount);
   return 0;
} 
