#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 6
int main(void)
{
    int ia[NUM];
    int i;
    srand((unsigned int)time(NULL));
    /* ia[0]〜ia[NUM - 1]に0以上9以下の乱数を代入 */
    for (i = 0; i < NUM; ++i)
    {
        ia[i] = rand() % 10;
    }
    /* iaの要素の値を表示 */
    for (i = 0; i < NUM; ++i)
    {
        printf("[%d]  ", i);
    }
    printf("\n");
    for (i = 0; i < NUM; ++i)
    {
        printf(" %d   ", ia[i]);
    }
    printf("\n");
    printf("\n");
    printf("移動しました\n");
    printf("\n");
    int end = ia[NUM - 1];
    for (i = NUM - 1; i >= 1; --i)
    {
        ia[i] = ia[i - 1];
    }
    ia[0] = end;
    for (i = 0; i < NUM; ++i)
    {
        printf("[%d]  ", i);
    }
    printf("\n");
    for (i = 0; i < NUM; ++i)
    {
        printf(" %d   ", ia[i]);
    }
    printf("\n");
    return 0;
}