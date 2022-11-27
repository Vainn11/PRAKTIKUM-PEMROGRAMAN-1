#include<stdio.h>

int main()
{
    for(int i=0; i<=1; i++){
    int s1,s2,s3,kel,luas;
    scanf("%d %d", &s1,&s2);
    s3 = sqrt((s2*s2)-(s1*s1));
    kel = s1+s2+s3;
    luas = s3*s1/2;
    printf("\nAlas = %d cm\n", s3);
    printf("Tinggi = %d cm\n", s1);
    printf("Keliling = %d cm\n", kel);
    printf("Luas = %d cm^2\n", luas);
    }
    return 0;
}
