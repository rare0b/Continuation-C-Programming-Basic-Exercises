#include <stdio.h>
int main(void)
{
    int num;
    printf("num > ");
    scanf("%d", &num);

    printf("numのビット列は ");
    for (int i=0; i<32; i++) {
        printf("%d", 1 & num >> (31 - i));
    }
    printf(" です。\n");
}