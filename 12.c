#include<stdio.h>
int main()
{
    int grams,kilograms;
    printf("enter kilograms=");
    scanf("%d",&kilograms);
    grams=kilograms*1000;
    printf("\n %d kilograms = %d grams",kilograms,grams);
    return 0;
}
