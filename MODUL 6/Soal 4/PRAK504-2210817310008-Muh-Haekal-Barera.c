#include <stdio.h>
int reverse(int angka1)
{
    int angka2, n = 0;
    while (angka1 > 0)
    {
        angka2 = angka1 % 10;
        n = angka2 + n * 10;
        angka1 /= 10;
    }
    return n;
}
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    A = reverse(A);
    B = reverse(B);
    int C = A + B;
    printf("%d\n", reverse(C));
}
