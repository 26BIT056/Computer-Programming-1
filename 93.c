#include <stdio.h>
int main()
{
    char str[100];
    int i, j=0, flag=0;
    printf("Enter a string: ");
    scanf("%99s", str);
    while(str[j]!='\0')
    {
        j++;
    }
    for(i=0; i<j/2; i++)
    {
        if(str[i]!=str[j-1-i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Palindrome string");
    }
    else
    {
        printf("Not a palindrome string");
    }
    return 0;
}