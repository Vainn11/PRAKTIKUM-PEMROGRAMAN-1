#include <stdio.h>
#include <string.h>

int main()
{
    float a, b, diskonA, diskonB, hargaA, hargaB;
    char p = '%';
    a = 400000;
    b = 350000;
    diskonA = a * 13 / 100;
    diskonB = b * 21 / 100;
    hargaA = a - diskonA;
    hargaB = b - diskonB;
    printf("Harga Sepatu A Adalah %.0f\n", a);
    printf("Harga Sepatu B Adalah %.0f\n", b);
    printf("Sepatu A Mendapat Diskon 13%c Sehingga Harganya Menjadi %.0f\n", p, hargaA);
    printf("Sepatu B Mendapat Diskon 21%c Sehingga Harganya Menjadi %.0f\n", p, hargaB);
    return 0;
}