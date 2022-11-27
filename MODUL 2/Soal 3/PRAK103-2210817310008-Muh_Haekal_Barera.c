#include <stdio.h>

int main()
{
    float a, b, x, y, hasil;
    a = 9;
    b = 6;
    x = 10;
    y = 7;
    hasil = (a + b) * x / y;
    printf("Variabel a Bernilai %.0f\n", a);
    printf("Variabel b Bernilai %.0f\n", b);
    printf("Variabel x Bernilai %.0f\n", x);
    printf("Variabel y Bernilai %.0f\n", y);
    printf("Hasil Dari a Ditambah b Dikali x Dan Dibagi y Adalah %.2f\n", hasil);
    return 0;
}