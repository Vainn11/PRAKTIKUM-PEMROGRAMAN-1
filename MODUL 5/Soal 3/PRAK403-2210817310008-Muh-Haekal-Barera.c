#include <stdio.h>

int main()
{
    int a1, a2, a3, a4;
    scanf("%d", &a1);
    scanf("%d", &a2);
    if (a1 > a2)
    {
        for (a3 = a1, a4 = a2; a3 >= a2, a4 <= a1;a3--,a4++)
        {
            printf("%d %d", a3, a4);
            if (a3 > a2)
            {
                printf(" - ");
            }
        }
    }
    else
    {
        for (a3 = a1, a4 = a2; a3 <= a2, a4 >= a1;a3++,a4--)
        {
            printf("%d %d", a3, a4);
            if (a3 < a2)
            {
                printf(" - ");
            }
        }
    }
}
