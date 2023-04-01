#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct toko {
    char namaBarang[100];
    int hargaBarang[100];
}tokoBaru[];


int main(){
    int tempHarga;
    char tempNama[100];
    for(int i = 0; i < 5; i++){
        printf("Masukkan nama barang: ");
        scanf("%s", &tokoBaru[i].namaBarang);
        printf("Masukkan harga barang: ");
        scanf("%i", &tokoBaru[i].hargaBarang[i]);
        printf("\n");
    }

    printf("Data Sebeleum Disorting\n");
    for(int i = 0; i < 5; i++){
        printf("%s  ", tokoBaru[i].namaBarang);
        printf("%i\n", tokoBaru[i].hargaBarang[i]);
    }

    printf("\n");

    for(int i = 0; i < 5-1; i++){
        for(int j = 0; j < 5-i-1; j++){
            if(tokoBaru[j].hargaBarang[j] < tokoBaru[j+1].hargaBarang[j+1]){
                tempHarga = tokoBaru[j].hargaBarang[j];
                strcpy(tempNama, tokoBaru[j].namaBarang);
                tokoBaru[j].hargaBarang[j] = tokoBaru[j+1].hargaBarang[j+1];
                strcpy(tokoBaru[j].namaBarang, tokoBaru[j+1].namaBarang);
                tokoBaru[j+1].hargaBarang[j+1] = tempHarga;
                strcpy(tokoBaru[j+1].namaBarang, tempNama);
            }
        }
    }

    printf("Data Sesudah Disorting\n");
    for(int i = 0; i < 5; i++){
        printf("%s     ", tokoBaru[i].namaBarang);
        printf("%i\n", tokoBaru[i].hargaBarang[i]);
    }
}

