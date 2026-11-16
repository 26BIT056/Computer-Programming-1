#include<stdio.h>
int main()
{
    int hours,min,total;
    printf("enter hour=");
    scanf("%d",&hours);
    printf("enter min=");
    scanf("%d",&min);
    total=hours*60+min;
    printf("\n%d hour and %d min=%d mins\n",hours,min,total);
    return 0;
}

