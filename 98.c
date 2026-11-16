#include <stdio.h>
int power(int a, int b)
{
    int i, ans=1;
    for(i=1; i<=b; i++)
    {
        ans=ans*a;
    }
    return ans;
}

int main()
{
    int a, b, ans;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter power: ");
    scanf("%d", &b);
    ans=power(a,b);
    printf("Answer = %d", ans);
    return 0;
}