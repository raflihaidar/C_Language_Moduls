#include <stdio.h>
#include <stdlib.h>
#define phi 3.14

float luasLingkaran(float a);


int main()
{
    float hasil, r;
    printf("-----------------------------------------------------------\n");
    printf("                   Program Luas Lingkaran                  \n ");
    printf("-----------------------------------------------------------\n");

    printf("\nMasukkan Jari jari: ");
    scanf("%f", &r);

    hasil = luasLingkaran(r);

    printf("\nLuas Lingkaran : %.2f", hasil);
    printf("\n");
    return 0;
}

float luasLingkaran(float a){
    float h;
    h = phi * a * a;
    return h;
}
