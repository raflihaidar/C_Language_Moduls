#include <stdio.h>
#include <stdlib.h>
#define phi 3.14

int main() {
    int input;
    float jariJari, tinggi;
    printf("1. Program Modulus Penumpang Bus\n");
    printf("2. Program Menghitung Luas Permukaan Tabung\n\n");
    printf("Masukkan Pilihan Program: ");
    scanf("%i", &input);

    if(input == 1) {
        printf("=====================PROGRAM MODULUS PENUMPANG BUS==========================\n\n");
        printf("Masukkan Jumlah Penumpang Bus: ");
        scanf("%i", &input);
        int mod = input % 30, sisa = 30 - input, bagi = input / 30;
        if(input != 0) {
            if(input >= 30) {
                printf("Kuota Penumpang Bus Telah Penuh\n");
                printf("Jumlah Bus yang Terpakai: %i\n", bagi);
                printf("Sisa Kelebihan Penumpang: %i", mod);
            } else if(input <= 30) {
                printf("Kuota Bus Tersisa: %i", sisa);
            } else {
                printf("Masukkan Inputan yang Benar");
            }
        } else {
            printf("Masukkan Angka lebih dari 0");
        }
    } else if (input == 2) {
        printf("=====================PROGRAM MENGHITUNG LUAS PERMUKAAN TABUNG==========================\n\n");
        printf("Masukkan Jari-jari Tabung: ");
        scanf("%f", &jariJari);
        printf("Masukkan Tinggi Tabung: ");
        scanf("%f", &tinggi);
        float luasPermukaanTabung = (2 * phi * jariJari * (jariJari + tinggi));
        printf("Luas Permukaan Tabung: %.2f", luasPermukaanTabung);
    }else{
        printf("Masukkan Angka 1 dan 2 Untuk Menjalankan Program");
    }
}
