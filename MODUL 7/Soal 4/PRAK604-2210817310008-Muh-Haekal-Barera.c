#include <stdio.h>
#include <string.h>

int main()
{
    char asli[100];
    char palsu[100];
    scanf("%[^\n]%*c", &asli);
    scanf("%[^\n]%*c", &palsu);
    int i = 0, j = 0, x = 0, kode1 = strlen(asli), pesan1 = strlen(palsu);
    if (kode1 != pesan1)
    {
        printf("\nPanjang kalimat berbeda, pesan palsu");
    }
    else
    {
        for (x = 0; x < kode1; x++)
        {
            if (palsu[x] == ' ' && asli[x] == ' ')
            {
                continue;
            }
            else if (asli[x] != palsu[x])
            {
                printf("#");
                i++;
            }
            else if (asli[x] == palsu[x])
            {
                printf("*");
                j++;
            }
        }
        printf("\n*= %d", j);
        printf("\n#= %d", i);
        if (i <= j)
        {
            printf("\nPesan Asli");
        }
        else
        {
            printf("\nPesan Palsu");
        }
    }
}