#include <stdio.h>

int main()
{
    int N;
    printf("Masukkan Bilangan N : ");
    scanf("%d", &N);
    if (N > 0)
    {
        printf("Positif");
    }
    else if (N < 0)
    {
        printf("Negatif");
    }
    else
    {
        printf("Nol");
    }
}
