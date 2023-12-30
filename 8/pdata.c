#include <stdio.h>

/* ここにPDATAの宣言を記述 */
typedef struct
{
    char name[10];
    int height;
    int weight;
} PDATA;

int main(void)
{
    PDATA pd[] = {
        {"Ito", 170, 71},
        {"Sato", 182, 74},
        {"Takahashi", 166, 54},
        {"Hasegawa", 153, 59},
        {"Yano", 161, 61}};

    printf("%sさんの身長は%dcm、体重は%dkgです。\n", pd[2].name, pd[2].height, pd[2].weight);

    return 0;
}
