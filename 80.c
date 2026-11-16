#include <stdio.h>
int main()
{
    int a[20], n, num, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    if(n>=20)
    {
        printf("Array is full");
        return 0;
    }
    printf("Enter new number: ");
    scanf("%d", &num);
    a[n]=num;
    n++;
    printf("New array:\n");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
    return 0;
}