#include <stdio.h>
int main()
{
    float gs, allowance, deduction, net;
    printf("Enter gross salary: ");
    scanf("%f", &gs);
    if (gs > 10000)
    {
        allowance = gs * 10 / 100;
        deduction = gs * 3 / 100;
    }
    else if (gs > 5000)
    {
        allowance = gs * 7 / 100;
        deduction = gs * 2 / 100;
    }
    else
    {
        allowance = 0;
        deduction = 0;
    }
    net = gs + allowance - deduction;
    printf("Allowance = %.2f\n", allowance);
    printf("Deduction = %.2f\n", deduction);
    printf("Net Salary = %.2f", net);
    return 0;
}