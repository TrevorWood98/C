#include <stdio.h>

int main(void)
{
    char c = 'h';
    short int s = 2;
    int i = 100000;
    unsigned int u = 900000;
    long int l = 500000000000;
    unsigned long int ul = 7000000000000000;
    float f = 5.50;
    double d = 7.85;
    long double ld = 20000000000.123456789;

    i = i + c; /* c is converted to int */
    printf("i + c = %d\n", i);

    i = i + s; /*s is converted to int*/
    printf("i+s = %d\n", i);

    u = u + i;
    printf("u + i = %d\n", u);

    ul = ul + l;
    printf("ul + l = %lu\n", ul);

    f = f + ul;

    printf("f + ul = %f\n", f);

    return 0;
}