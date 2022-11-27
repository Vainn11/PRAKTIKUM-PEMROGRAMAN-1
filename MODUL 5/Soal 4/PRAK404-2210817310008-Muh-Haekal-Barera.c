#include <stdio.h>

int main()
{
    int nilai;
    float a, b, hasil;
pilihan:
    printf("\nPilih Program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
    printf("Masukkan Pilihan : ");
    scanf("%d", &nilai);
    if (nilai >= 1 && nilai < 5)
    {
        printf("Masukkan Nilai Pertama : ");
        scanf("%f", &a);
        printf("Masukkan Nilai Kedua : ");
        scanf("%f", &b);
        if (nilai == 1)
        {
            hasil = a + b;
            printf("\nHasil Penjumlahan Antara %.2f dan %.2f adalah %.2f\n", a, b, hasil);
            goto pilihan;
        }
        else if (nilai == 2)
        {
            hasil = a - b;
            printf("\nHasil Pengurangan Antara %.2f dan %.2f adalah %.2f\n", a, b, hasil);
            goto pilihan;
        }
        else if (nilai == 3)
        {
            hasil = a * b;
            printf("\nHasil Perkalian Antara %.2f dan %.2f adalah %.2f\n", a, b, hasil);
            goto pilihan;
        }
        else if (nilai == 4)
        {
            hasil = a / b;
            printf("\nHasil Pembagian Antara %.2f dan %.2f adalah %.2f\n", a, b, hasil);
            goto pilihan;
        }
    }
    else if (nilai == 5)
    {
        printf("\nTerima kasih telah menggunakan kalkulator Muh. Haekal Barera\n");
    }
    else
    {
        printf("Input Anda Salah, Silahkan Coba Lagi \n");
    }
    return 0;
}
