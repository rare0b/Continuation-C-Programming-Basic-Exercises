#include <stdio.h>
#include <math.h>

typedef struct
{
    char name[10];
    int height;
    int weight;
} PDATA;

double calc_bmi(const PDATA *);

int main(void)
{
    PDATA pd[] = {
        {"Ito", 170, 71},
        {"Sato", 182, 74},
        {"Takahashi", 166, 54},
        {"Hasegawa", 153, 59},
        {"Yano", 161, 61}};

    int len, i;

    len = (int)(sizeof pd / sizeof pd[0]);

    for (i = 0; i < len; ++i)
    {
        printf("%sさんのBMIは%.1fです。\n", pd[i].name, calc_bmi(&pd[i]));
    }

    return 0;
}

/* calc_bmi()の定義 (関数を作る) */
double calc_bmi(const PDATA *p)
{
    return (double)p->weight / pow((double)p->height / 100.0, 2.0);
}