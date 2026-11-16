#include <stdio.h>
int main()
{
    int a[20], n, num, i, found=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("Enter number to search: ");
    scanf("%d", &num);
    for(i=0; i<n; i++)
    {
        if(a[i]==num)
        {
            printf("Value found at position %d", i+1);
            found=1;
            break;
        }
    }
    if(found==0)
        printf("Value not found");
    return 0;
}