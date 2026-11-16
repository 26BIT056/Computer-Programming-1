#include<stdio.h>
int main()
{
    float dollars,rupees;
    printf("enter rupees=");
    scanf("%f",&rupees);
    dollars=rupees/48;
    printf("\n Rs %f = $ %f\n",rupees,dollars);
    return 0;
}
