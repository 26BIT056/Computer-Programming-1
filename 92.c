#include <stdio.h>
int main()
{
    char str[100], temp;
    int i, j=0;
    printf("Enter a string: ");
    scanf("%99s", str);
    while(str[j]!='\0')
    {
        j++;
    }
    for(i=0; i<j/2; i++)
    {
        temp=str[i];
        str[i]=str[j-1-i];
        str[j-1-i]=temp;
    }
    printf("Reverse string = %s", str);
    return 0;
}