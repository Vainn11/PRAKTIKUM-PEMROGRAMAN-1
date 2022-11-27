#include <stdio.h>

int main()
{
    int x, isi, baris1, baris2, hasil;
    scanf("%d %d", &baris1, &baris2);
    int bil1[baris1], bil2[baris2];
    if (baris1 == baris2)
    {
        for (x = 0; x < baris1; x++)
        {
            scanf("%d", &isi);
            bil1[x] = isi;
        }
        for (x = 0; x < baris2; x++)
        {
            scanf("%d", &isi);
            bil2[x] = isi;
        }
        printf("\n");
        for (x = 0; x < baris1; x++)
        {
            hasil = bil1[x] * bil2[x];
            printf("%d", hasil);
            printf(" ", hasil);
        }
    }
    else
    {
        printf("\nJumlah tidak sama");
    }
}