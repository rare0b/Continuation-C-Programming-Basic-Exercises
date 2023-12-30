#include <stdio.h>

void str_copy(char *, const char *);

int main(void)
{
    char s1[100], s2[100];

    printf("文字列s1 > ");
    scanf("%s", s1);

    str_copy(s2, s1);

    printf("s1をs2にコピーしました。\ns2に格納されている文字列は %s です。\n", s2);

    return 0;
}

void str_copy(char *dest, const char *src)
{
    while ((*dest++ = *src++) != '\0')
    {
        /*
            *dest++ と *dest と dest[0] は評価値が同じ
            2回目の *dest++ と *(dest + 1) と dest[1] は評価値が同じ
        */
    }
}
