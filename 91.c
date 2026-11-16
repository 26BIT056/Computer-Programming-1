#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int i=0;
    printf("Enter first string: ");
    scanf("%99s", str1);
    printf("Enter second string: ");
    scanf("%99s", str2);
    while(str1[i]==str2[i] && str1[i]!='\0')
    {
        i++;
    }
    if(str1[i]==str2[i])
    {
        printf("Both strings are equal");
    }
    else if(str1[i]>str2[i])
    {
        printf("First string is greater");
    }
    else
    {
        printf("First string is smaller");
    }
    return 0;
}