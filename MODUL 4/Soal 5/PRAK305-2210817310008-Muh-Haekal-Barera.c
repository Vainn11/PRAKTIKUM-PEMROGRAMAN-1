#include <stdio.h>

int main()
{
    int waktu, day, sisahari, jam, sisajam, menit, detik;
    scanf("%d", &waktu);
    day = waktu / 86400;
    sisahari = waktu % 86400;
    jam = sisahari / 3600;
    sisajam = sisahari % 3600;
    menit = sisajam / 60;
    detik = sisajam % 60;
    if (waktu > 0 && waktu <= 86400)
    {
        printf("%.2d:%.2d:%.2d", jam, menit, detik);
    }
    else
    {
        printf("%d hari %.2d:%2.d:%.2d",day, jam, menit, detik);
    }
}
