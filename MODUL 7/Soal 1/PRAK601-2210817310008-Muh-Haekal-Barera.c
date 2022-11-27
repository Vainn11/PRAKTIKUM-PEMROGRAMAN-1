#include <stdio.h>

int main(void)
{
    int baris, kolom, isi, i, j;
    scanf("%d %d", &baris, &kolom);
    int angka[baris][kolom];
    for (i = 0; i < baris; i++)
    {
        for (j = 0; j < kolom; j++)
        {
            scanf("%d", &isi);
            angka[i][j] = isi;
        }
    }
    printf("\n");
    for (i = 0; i < baris; i++)
    {
        for (j = 0; j < kolom; j++)
        {
            printf("%d ", angka[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}