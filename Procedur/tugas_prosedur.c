#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void routeRates1(int passenger, int sitting, int *result){
    if(sitting == 1){
        *result = (passenger * 180000);
    }else if(sitting == 2){
        *result = (passenger * 150000);
    }else if(sitting == 3){
        *result = (passenger * 120000);
    }else{
        *result = 0;
    }
    printf("Tarif yang Dibayar : %i\n", *result);
    system("pause");
    system("cls");
}

void routeRates2(int passenger, int sitting, int *result){
    if(sitting == 1){
        *result = (passenger * 170000);
    }else if(sitting == 2){
        *result = (passenger * 140000);
    }else if(sitting == 3){
        *result = (passenger * 100000);
    }else{
        *result = 0;
    }
    printf("Tarif yang Dibayar : %i\n", *result);
    system("pause");
    system("cls");
}

int main(){
    int routeOption, sittingOption, inputpassenger, tarif;
    bool loop = true;
    while(loop){
        printf("\nSelamat Datang di Bis Murah Meriah\n");
        printf("==================================\n");
        printf("       Perjalanan                 \n");
        printf("       1. Cilacap - Surabaya      \n");
        printf("       2. Jogja - Surabaya        \n");
        printf("==================================\n");
        printf("       Posisi  Tempat Duduk:      \n");
        printf("       1. Bagian Depan            \n");
        printf("       2. Bagian Tengah           \n");
        printf("       3. Bagian Belakang         \n");
        printf("==================================\n");

        printf("Masukkan Rute Perjalanan : ");
        scanf("%i", &routeOption);
        printf("Masukkan Posisi Tempat duduk :");
        scanf("%i", &sittingOption);
        printf("Masukkan Jumlah Penumpang : ");
        scanf("%i", &inputpassenger);
        if(routeOption == 1){
            if(sittingOption <= 3){
                routeRates1(inputpassenger, sittingOption, &tarif);
            }else{
                printf("Opsi Tempat Duduk tidak Tersedia\n");
                system("pause");
                system("cls");
            }
        }else if(routeOption == 2){
            if(sittingOption <= 3){
                routeRates2(inputpassenger, sittingOption, &tarif);
            }else{
                printf("Opsi Tempat Duduk tidak Tersedia\n");
                system("pause");
                system("cls");
            }
        }else{
            printf("Rute yang Anda Tuju tidak Tersedia");
            loop = false;
        }
    }
}
