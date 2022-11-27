#include <stdio.h>

int main()
{
    int bil;
    printf("Masukkan Bilangan : ");
    scanf("%d", &bil);
    if (bil >= 99 && bil <= 100)
    {
        printf("Anda Menginput Melebihi Limit Bilangan");
    }
    else if (bil >= 20 && bil < 99)
    {
        printf("Puluhan");
    }
    else if (bil >= 10 && bil < 20)
    {
        printf("Belasan");
    }
    else if (bil > 0 && bil < 10)
    {
        printf("Satuan");
    }
    else
    {
        printf("Nol");
    }
}