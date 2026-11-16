#include <stdio.h>
int main()
{
    int i, boys=0, girls=0;
    char sex;
    for(i=1; i<=50; i++)
    {
        printf("Enter sex code (M/F): ");
        scanf(" %c", &sex);
        if(sex=='M' || sex=='m')
            boys++;
        else if(sex=='F' || sex=='f')
            girls++;
    }
    printf("Number of boys = %d\n", boys);
    printf("Number of girls = %d", girls);
    return 0;
}