#include <stdio.h>

int main()
{
    int baris, x, isi;
    scanf("%d", &baris);
    int angka[baris];
    for (x = 0; x < baris; x++)
    {
        scanf("%d", &isi);
        angka[x] = isi;
    }
    printf("\n");
    for (x = 0; x < baris; x++)
    {
        printf("%d", angka[x] * (x + 1));
        printf(" ", angka);
    }
}