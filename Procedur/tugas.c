#include <stdio.h>
#include <stdlib.h>

void sebelumDitukar(int a, int b){
    printf("\nNilai Sebelum Ditukar\n");
    printf("Nilai 1: %i\n", a);
    printf("Nilai 2: %i\n\n", b);
}

void sesudahDitukar(int a, int b){
    int c = a;
    a = b;
    b = c;
    printf("Nilai Seseudah Ditukar\n");
    printf("Nilai 1: %i\n", a);
    printf("Nilai 2: %i\n\n", b);
}


int main(){
    int input1, input2;
    printf("Masukkan Nilai 1: ");
    scanf("%i", &input1);
    printf("Masukkan Nilai 2: ");
    scanf("%i", &input2);
    sebelumDitukar(input1, input2);
    sesudahDitukar(input1, input2);
    return 0;
}
