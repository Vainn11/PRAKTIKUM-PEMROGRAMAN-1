#include <stdio.h>

int main()
{
    int s1, s2, s3, k, harga, total;
    s1 = 4;
    s2 = 5;
    s3 = 7;
    k = s1 + s2 + s3;
    harga = 85000;
    total = k * harga;
    printf("Panjang Sisi Segitiga Berturut-turut Adalah %d, %d, dan %d\n", s1, s2, s3);
    printf("Keliling Tanah Pak Dengklek Adalah %d\n", k);
    printf("Harga Tanah Per Meter Adalah %d\n", harga);
    printf("Jawaban :\n");
    printf("Biaya Yang Diperlukan Pak Dengklek Adalah : Rp %d\n", total);
    return 0;
}