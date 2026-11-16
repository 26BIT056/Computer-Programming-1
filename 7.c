#include<stdio.h>
int main()
{
    int hours,min,total;
    printf("enter minutes=");
    scanf("%d",&total);
    hours=total/60;
    min=total%60;
    printf("\n%d min= %d hour %d mins\n",total,hours,min);
    return 0;
}
