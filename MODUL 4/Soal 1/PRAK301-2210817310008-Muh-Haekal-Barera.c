#include <stdio.h>

int main()
{
    int a, b;
    printf("");
    scanf("%d", &a);
    printf("");
    scanf("%d", &b);
    if (a < b)
    {
        printf("%d, %d", a, b);
    }
    else
    {
        printf("%d, %d", b, a);
    }
}
