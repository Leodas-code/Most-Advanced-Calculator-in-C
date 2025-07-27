#include <stdio.h>
#include "calc.h"

float a, b, c;

int main()
{
    printf("\nEnter the Values of A & B: ");
    scanf("%f %f", &a, &b);
    add();
    sub();
    mul();
    div();
    advanced();
    return 0;
}
