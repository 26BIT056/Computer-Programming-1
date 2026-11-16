#include<stdio.h>
int main()
{
  int num1,num2,swap;
  printf("enter num1=");
  scanf("%d",&num1);
  printf("enter num2=");
  scanf("%d",&num2);
  printf("\nbefore swap num1= %d  num2= %d",num1,num2);
  swap=num1;
  num1=num2;
  num2=swap;
  printf("\nafter swap num1= %d  num2= %d\n",num1,num2);
  return 0;
}
