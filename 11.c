#include<stdio.h>
 int main()
{
    int grams,kilograms;
    printf("enter grams=");
    scanf("%d",&grams);
    kilograms=grams/1000;
    printf("\n %d grams = %d kilograms",grams,kilograms);
    return 0;
}
