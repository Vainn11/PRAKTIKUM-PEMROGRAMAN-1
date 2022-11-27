#include<stdio.h>

int main()
{
    for(int i=0; i<=1; i++){
    float x,y,j;
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &x);
    printf("Masukkan Nilai Kedua   : ");
    scanf("%f", &y);
    j = x+y;
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.2f\" adalah \"%.2f\"\n\n", x,y,j);
    }
    return 0;
}
