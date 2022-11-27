#include <stdio.h>

int main()
{
    int a, b, x, y, hasilA, hasilB, total;
    a = 9;
    b = 5;
    x = 8;
    y = 8;
    hasilA = a % b;
    hasilB = x % y;
    total = hasilA + hasilB;
    printf("Variabel a Bernilai %d\n", a);
    printf("Variabel b Bernilai %d\n", b);
    printf("Variabel x Bernilai %d\n", x);
    printf("Variabel y Bernilai %d\n", y);
    printf("Total Sisa Bagi Dari a dibagi b Dan x Dibagi y Adalah %d\n", total);
    return 0;
}