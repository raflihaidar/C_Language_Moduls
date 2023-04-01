#include <stdio.h>
#include <stdlib.h>

void luasSegitiga(int a, int t, float *hasil);

int main(){
    int a, t;
    float hasil;
    printf("Masukkan alas: ");
    scanf("%i", &a);
    printf("Masukkan tinggi: ");
    scanf("%i", &t);
    luasSegitiga(a, t, &hasil);
    printf("luas segitiga adalah : %.f", hasil);
    return 0;
}

void luasSegitiga(int a, int t, float *hasil){
    *hasil = (0.5 * a * t);
}
