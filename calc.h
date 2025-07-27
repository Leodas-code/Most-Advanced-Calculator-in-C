#include <stdio.h>
#include <math.h>

void add()
{
    extern float a,b,c;
    c=a+b;
    printf("\nTotal : %.2f",c);
}
void sub()
{
    extern float a,b,c;
    c=a-b;
    printf("\nDifference : %.2f",c);
}
void mul()
{
    extern float a,b,c;
    c=a*b;
    printf("\nProduct : %.2f",c);
}
void div()
{
    extern float a,b,c;
    c=a/b;
    printf("\nQoutiet : %.2f",c);
}
void advanced()
{
    extern float a,b,c;
    c=sqrt(a);
    printf("\nSqrt for a : %.2f",c);
    c=cbrt(a);
    printf("\nCqrt for a : %.2f",c);
    c=sin(a);
    printf("\nSin : %.2f",c);
    c=cos(a);
    printf("\nCos : %.2f",c);
    c=tan(a);
    printf("\nTan : %.2f",c);
    c=round(a);
    printf("\nRound : %,2f",c);
}
