#include <stdio.h>

/* swap_int()の関数プロトタイプ宣言を記述 */
void swap_int(int *x, int *y);
int main(void)
{
    int x, y;

    printf("xの値 > ");
    scanf("%d", &x);
    printf("yの値 > ");
    scanf("%d", &y);

    /* swap_int()の呼び出し */
    swap_int(&x, &y);
    printf("\nx = %d\ny = %d\n", x, y);

    return 0;
}

/* swap_int()の定義 (関数を作る) */
void swap_int(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}