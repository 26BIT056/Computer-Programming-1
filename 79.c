#include <stdio.h>
int main()
{
    int a[20], n, num, pos, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("Enter number to insert: ");
    scanf("%d", &num);
    printf("Enter position: ");
    scanf("%d", &pos);
    if(pos<1 || pos>n+1 || n>=20)
    {
        printf("Invalid position");
        return 0;
    }
    for(i=n; i>=pos; i--)
        a[i]=a[i-1];
    a[pos-1]=num;
    n++;
    printf("New array:\n");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
    return 0;
}