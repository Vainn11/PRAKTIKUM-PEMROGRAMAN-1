#include<stdio.h>

int main()
{
    float phi,jari,tinggi,vol,luas,kel;
    phi = 22/7.f;
    scanf("%f %f", &jari, &tinggi);
    vol = phi*jari*jari*tinggi;
    printf("\nVolume= %.2f\n", vol);
    luas = 2*phi*jari*(tinggi+jari);
    printf("Luas= %.2f\n", luas);
    kel = 2*phi*jari;
    printf("Keliling= %.2f\n", kel);
    return 0;
}
