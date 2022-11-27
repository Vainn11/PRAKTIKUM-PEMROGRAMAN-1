#include <stdio.h>

int main()
{
    char nama[15], nim[15], kelas[15], ttl[15], alamat[15], hobby[15], nohp[12];
    printf("Nama                   :  ");
    gets(nama);
    printf("NIM                    :  ");
    gets(nim);
    printf("Kelas Paralel          :  ");
    gets(kelas);
    printf("Tempat/Tanggal Lahir   :  ");
    gets(ttl);
    printf("Alamat                 :  ");
    gets(alamat);
    printf("Hobby                  :  ");
    gets(hobby);
    printf("No. HP                 :  ");
    gets(nohp);
    return 0;
}
