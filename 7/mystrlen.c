#include <stdio.h>

int mystrlen(const char *);

int main(void)
{
    const char *cp;

    cp = "ABC";
    printf("\"%s\" の長さは %d\n", cp, mystrlen(cp));

    cp = "Yamada Taro";
    printf("\"%s\" の長さは %d\n", cp, mystrlen(cp));

    cp = "";
    printf("\"%s\" の長さは %d\n", cp, mystrlen(cp));

    return 0;
}

/* mystrlen()の定義 (関数を作る) */
int mystrlen(const char *cp)
{
    int len;
    len = 0;
    while (*cp != '\0')
    {
        len++;
        cp++;
    }
    return len;
}
