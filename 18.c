#include<stdio.h>
int main()
{
   int length,breath,area,perimeter;
   printf("enter length=");
   scanf("%d",&length);
   printf("enter breath=");
   scanf("%d",&breath);
   area=length*breath;
   perimeter=2*(length+breath);
   printf("\narea=%d\nperimeter=%d\n",area,perimeter);
   return 0;
}
