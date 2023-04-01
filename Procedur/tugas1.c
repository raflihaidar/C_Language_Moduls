#include <stdio.h>
#include <stdlib.h>

void sebelumDitukar(int a, int b){
    printf("Nilai Sebelum Ditukar\n");
    printf("Nilai 1: %i\n", a);
    printf("Nilai 2: %i\n", b);
}

void sesudahDitukar(int a, int b, int c){
    c = a;
    a = b;
    b = c;
    printf("Nilai Seseudag Ditukar\n");
    printf("Nilai 1: %i\n", a);
    printf("Nilai 2: %i\n", b);
}


int main(){
    int input1, input2;
    printf("Masukkan Nilai 1: ");
    scanf("%i", &input1);
    printf("Masukkan Nilai 2: ");
    scanf("%i", &input2);
    sebelumDitukar(input1, input2);
    seselumDitukar(input1, input2);
    return 0;
}
