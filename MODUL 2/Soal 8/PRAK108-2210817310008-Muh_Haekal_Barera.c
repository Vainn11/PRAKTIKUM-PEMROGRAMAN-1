#include <stdio.h>

int main()
{
    float k, j, r, phi;
    phi = 3.14;
    k = 5;
    j = 14;
    r = (j / k) / (2 * phi);
    printf("Diketahui : \n");
    printf("Pak Dengklek Mengellingi Taman = %.0f Putaran\n", k);
    printf("Jarak Tempuh Pak Dengklek = %.0f Kilometer\n\n", j);
    printf("Jawaban :\n");
    printf("Jari-Jari Taman Yang Dikelilingi Pak Dengklek Adalah %.2f Kilometer", r);
    return 0;
}