#include<stdio.h>
int main()
{
   float celsius,fahrenheit;
   printf("enter celsius=");
   scanf("%f",&celsius);
   fahrenheit=(9.0/5.0)*celsius+32;
   printf("\n%f C = %f F\n",celsius,fahrenheit);
   return 0;
}
