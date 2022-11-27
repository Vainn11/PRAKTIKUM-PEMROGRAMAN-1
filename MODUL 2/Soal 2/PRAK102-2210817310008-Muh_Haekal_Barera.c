#include <stdio.h>
#include <string.h>

int main()
{
    float a, b, c, hasil;
    a = 4;
    b = 8;
    c = 3;
    hasil = a * b / c;
    printf("Variabel a Bernilai %.0f\n", a);
    printf("Variabel b Bernilai %.0f\n", b);
    printf("Variabel c Bernilai %.0f\n", c);
    printf("Hasil Dari a Dikali b Dibagi c Adalah %f\n", hasil);
    return 0;
}