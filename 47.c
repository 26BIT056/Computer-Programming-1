#include <stdio.h>
int main()
{
    int i, num;
    int positive=0, negative=0, zero=0;
    for(i=1; i<=200; i++)
    {
        printf("Enter number: ");
        scanf("%d", &num);
        if(num>0)
            positive++;
        else if(num<0)
            negative++;
        else
            zero++;
    }
    printf("Positive = %d\n", positive);
    printf("Negative = %d\n", negative);
    printf("Zeros = %d", zero);
    return 0;
}