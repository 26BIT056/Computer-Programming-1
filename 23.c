#include<stdio.h>
int main()
{
   int maths,science,english,total;
   float average;
   printf("enter maths marks=");
   scanf("%d",&maths);
   printf("enter science marks=");
   scanf("%d",&science);
   printf("enter english marks=");
   scanf("%d",&english);
   total=maths+science+english;
   average=total/3.0;
   printf("\ntotal = %d\naverage = %f\n",total,average);
   return 0;
}
