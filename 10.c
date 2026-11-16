#include<stdio.h>
int main()
{
    float dollars,rupees,pounds;
    printf("enter dollars=");
    scanf("%f",&dollars);
    rupees=dollars*48;
    pounds=rupees/70;
    printf("\n $ %f = Rs %f = pound %f\n",dollars,rupees,pounds);
    return 0;
}
