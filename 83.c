#include <stdio.h>
int main()
{
    int a[20], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    if(n<=0)
    {
        printf("Array is empty");
        return 0;
    }
    n--;
    printf("Array after deletion:\n");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
    return 0;
}