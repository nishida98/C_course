#include <stdio.h>
#include <stdlib.h>

int calculator()
{
    double num1;
    double num2;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter seconc number: ");
    scanf("%lf", &num2);

    printf("Result: %f", num1 + num2);

    return 0;
}
