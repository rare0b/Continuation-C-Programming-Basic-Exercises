#include <math.h>
#include <stdio.h>

/* sqrt2()の関数プロトタイプ宣言を記述 */
void sqrt2(double *dp);
int main(void)
{
    double d;

    printf("0以上の数 > ");
    scanf("%lf", &d);

    /* sqrt2()の呼び出し */
    sqrt2(&d);

    printf("平方根は %f です。\n", d);

    return 0;
}

/* sqrt2()の定義 (関数を作る) */
void sqrt2(double *dp)
{
    *dp = sqrt(*dp);
}