#include <stdio.h>

int main()
{
    float a, b, c, d, e, f, jumlah;
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
    jumlah = (a - b) * (c / d) - (e + f);
    printf("%.3f", jumlah);
    return 0;
}
