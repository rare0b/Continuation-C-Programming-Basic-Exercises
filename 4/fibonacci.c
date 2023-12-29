#include <stdio.h>

#define NUM 15

int main(void)
{
    int fibo[NUM];
    int i;

    fibo[0] = fibo[1] = 1;

    for (i = 2; i < NUM; i++)
    {
        fibo[i] = fibo[i - 2] + fibo[i - 1];
    }

    printf("フィボナッチ数列は ");
    for (i = 0; i < NUM; ++i)
    {
        printf("%d, ", fibo[i]);
    }
    printf("…\n");

    return 0;
}
