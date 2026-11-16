#include<stdio.h>
int main()
{
   float grosssales,discount,netamount;
   printf("enter grosssales=");
   scanf("%f",&grosssales);
   discount=grosssales*10/100;
   netamount=grosssales-discount;
   printf("\ngrosssales= Rs %f",grosssales);
   printf("\ndiscount= Rs %f",discount);
   printf("\nnetamount= Rs %f\n",netamount);
   return 0;
}
