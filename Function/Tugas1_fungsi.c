#include <stdio.h>
#include <stdlib.h>

float luasSegitiga(float a, float t){
    float luas = 0.5 * a * t;
    return luas;
}

float luasPersegiPanjang(float p, float l){
    float luas = p * l;
    return luas;
}

float luasLayangLayang(float d1, float d2){
    float luas = 0.5 * d1 * d2;
    return luas;
}

int main(){
    float option, input1, input2, hasil;
    printf("===========================================\n");
    printf("            Program Menghitung Luas        \n");
    printf("===========================================\n");

    printf("Pilih salah satu yang akan anda hitung\n");
    printf("1. Segitiga\n");
    printf("2. Persegi Panjang\n");
    printf("3. Layang-layang\n");

    printf("Masukkan Pilihan Anda: ");scanf("%f", &option);

    if(option == 1) {
        printf("Masukkan sisi 1 yang akan di hitung: ");
        scanf("%f", &input1);
        printf("Masukkan sisi 2 yang akan di hitung: ");
        scanf("%f", &input2);
        hasil = luasSegitiga(input1, input2);
        printf("Hasilnya adalah %.2f\n", hasil);
        system("pause");
    } else if(option == 2){
        printf("Masukkan sisi 1 yang akan di hitung: ");
        scanf("%f", &input1);
        printf("Masukkan sisi 2 yang akan di hitung: ");
        scanf("%f", &input2);
        hasil = luasPersegiPanjang(input1, input2);
        printf("Hasilnya adalah %.2f\n", hasil);
        system("pause");
    } else if(option == 3){
        printf("Masukkan sisi 1 yang akan di hitung: ");
        scanf("%f", &input1);
        printf("Masukkan sisi 2 yang akan di hitung: ");
        scanf("%f", &input2);
        hasil = luasLayangLayang(input1, input2);
        printf("Hasilnya adalah %.2f\n", hasil);
        system("pause");
    } else {
        printf("Input yang anda masukkan salah");
        system("cls");
    }
    printf("TERIMA KASIH");
}
