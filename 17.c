#include<stdio.h>
int main()
{
   int length,area,perimeter;
   printf("enter length=");
   scanf("%d",&length);
   area=length*length;
   perimeter=length*4;
   printf("\narea=%d\nperimeter=%d\n",area,perimeter);
   return 0;
}
