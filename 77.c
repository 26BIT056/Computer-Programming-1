#include <stdio.h>
int main()
{
    int a[10], b[10]={0};
    int i, n, choice;
    printf("Enter 10 values:\n");
    for(i=0; i<10; i++)
        scanf("%d", &a[i]);
    printf("Enter number of positions: ");
    scanf("%d", &n);
    printf("1. Left shift\n2. Right shift\n");
    scanf("%d", &choice);
    if(n>10)
        n=10;
    if(choice==1)
    {
        for(i=0; i<10-n; i++)
            b[i]=a[i+n];
    }
    else if(choice==2)
    {
        for(i=0; i<10-n; i++)
            b[i+n]=a[i];
    }
    printf("Shifted array:\n");
    for(i=0; i<10; i++)
        printf("%d ", b[i]);
    return 0;
}