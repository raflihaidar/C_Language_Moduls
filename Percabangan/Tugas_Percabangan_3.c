#include <stdio.h>
#include <stdlib.h>

int main() {
    char bulan[20];
    int angka;

    printf("Masukkan Nama Bulan: ");
    scanf("%s", bulan);

    if (strcmp(bulan, "januari") == 0) {
        angka = 1;
    } else if(strcmp(bulan, "februari") == 0) {
        angka = 2;
    } else if(strcmp(bulan, "maret") == 0) {
        angka = 3;
    } else if(strcmp(bulan, "april") == 0) {
        angka = 4;
    } else if(strcmp(bulan, "mei") == 0){
        angka = 5;
    } else if(strcmp(bulan, "juni") == 0) {
        angka = 6;
    } else if(strcmp(bulan, "juli") == 0) {
        angka = 7;
    } else if(strcmp(bulan, "agustus") == 0) {
        angka = 8;
    } else if(strcmp(bulan, "september") == 0) {
        angka = 9;
    } else if(strcmp(bulan, "oktober") == 0) {
        angka = 10;
    } else if(strcmp(bulan, "november") == 0) {
        angka = 11;
    } else if (strcmp(bulan, "desember") == 0) {
        angka = 12;
    } else {
        printf("");
    }

    switch(angka) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Jumlah Hari: 31 hari");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Jumlah Hari: 30 hari");
        break;
    case 2:
        printf("Jumlah Hari: 28 hari");
        break;
    default:
        printf("Input yang Anda Masukkan Salah!");
    }
}
