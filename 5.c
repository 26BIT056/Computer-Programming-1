#include<stdio.h>
int main()
{
    int num1,num2,answer1,answer2,answer3,answer4;
    printf("enter num1=");
    scanf("%d",&num1);
    printf("enter num2=");
    scanf("%d",&num2);
    answer1=num1+num2;
    answer2=num1*num2;
    answer3=num1-num2;
    answer4=num1/num2;
    printf("\n%d+%d=%d",num1,num2,answer1);
    printf("\n%d*%d=%d",num1,num2,answer2);
    printf("\n%d-%d=%d",num1,num2,answer3);
    printf("\n%d/%d=%d",num1,num2,answer4);
    return 0;
}
