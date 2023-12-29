#include <stdio.h>
int main(void)
{
    int price[5];
    int max_id; /* 最高額の商品の番号 */
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("商品 %d の価格 > ", i + 1);
        scanf("%d", &price[i]);
    }

    for (max_id = 0, i = 1; i < 5; i++)
    {
        if (price[i] > price[max_id])
        {
            max_id = i;
        }
    }

    printf("最高額の商品の番号は %d、価格は %d です。\n", max_id + 1, price[max_id]);
    return 0;
}