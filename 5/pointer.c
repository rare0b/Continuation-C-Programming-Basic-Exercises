#include <stdio.h>

int main(void)
{
    int i = 3;
    double d = 1.5;
    int *ip;
    double *dp;

    ip = &i, dp = &d;

    *ip += 2;
    *dp *= *ip;

    printf("i = %d\nd = %f\n", i, d);
}