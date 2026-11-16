#include <stdio.h>
int main()
{
    int n, square, temp, rem, divisor=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    square=n*n;
    temp=n;
    while(temp>0)
    {
        divisor=divisor*10;
        temp=temp/10;
    }
    rem=square%divisor;
    if(rem==n)
        printf("Automorphic number");

    else
        printf("Not an automorphic number");
    return 0;
}