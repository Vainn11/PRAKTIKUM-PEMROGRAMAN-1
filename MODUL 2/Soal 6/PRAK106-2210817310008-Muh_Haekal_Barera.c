#include <stdio.h>

int main()
{
    int a, b, c, x1, x2, x3;
    a = 4;
    b = 8;
    c = 3;
    x1 = a == b;
    x2 = b >= c;
    x3 = a != c;
    printf("Variabel a Bernilai %d\n", a);
    printf("Variabel b Bernilai %d\n", b);
    printf("Variabel c Bernilai %d\n", c);
    printf("Apakah a Sama Dengan b ? Jawabannya adalah %d\n", x1);
    printf("Apakah b Lebih Besar Dari c ? Jawabannya adalah %d\n", x2);
    printf("Apakah a Tidak Sama Dengan c ? Jawabannya adalah %d\n", x3);
    return 0;
}