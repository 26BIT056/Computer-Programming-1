#include <stdio.h>
int main()
{
    char str[100];
    int i;
    int a=0, e=0, in=0, o=0, u=0;
    printf("Enter a string: ");
    scanf("%99s", str);
    for(i=0; str[i]!='\0'; i++)
    {
        switch(str[i])
        {
            case 'a':
            case 'A':
                a++;
                break;

            case 'e':
            case 'E':
                e++;
                break;

            case 'i':
            case 'I':
                in++;
                break;

            case 'o':
            case 'O':
                o++;
                break;

            case 'u':
            case 'U':
                u++;
                break;
        }
    }

    printf("A = %d\n", a);
    printf("E = %d\n", e);
    printf("I = %d\n", in);
    printf("O = %d\n", o);
    printf("U = %d\n", u);
    return 0;
}