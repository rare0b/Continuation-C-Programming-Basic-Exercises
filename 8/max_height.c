#include <stdio.h>

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

    /* ここに変数宣言や処理を記述 */
    int max_index, i, len;
    len = sizeof pd / sizeof pd[0];
    for (max_index = 0, i = 1; i < len; i++)
    {
        if (pd[i].height > pd[max_index].height)
        {
            max_index = i;
        }
    }
    printf("%sさん: %dcm\n", pd[max_index].name, pd[max_index].height);

    return 0;
}
