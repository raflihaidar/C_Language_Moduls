#include <stdio.h>
#include <stdlib.h>
#define NIM 1202220055

int main(){
    int input;
    printf("\n%i", NIM);
    printf("\n\nMasukkan angka: ");
    scanf("%i", &input);

    if(input % 2 != 0) {
        printf("\nBilangan Ganjil");
        printf("\n%i mod 2 = 1", input);
    } else {
        printf("\nBilangan Genap");
        printf("\n%i mod 2 = 0", input);
    }
}
