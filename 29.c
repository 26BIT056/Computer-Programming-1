#include <stdio.h>
int main()
{
    float gs, discount, net;
    printf("Enter gross sales: ");
    scanf("%f", &gs);
    if (gs > 20000)
    {
        discount = gs * 15 / 100;
    }
    else if (gs > 10000)
    {
        discount = gs * 10 / 100;
    }
    else
    {
        discount = gs * 5 / 100;
    }
    net = gs - discount;
    printf("Discount = %.2f\n", discount);
    printf("Net Sales = %.2f", net);
    return 0;
}