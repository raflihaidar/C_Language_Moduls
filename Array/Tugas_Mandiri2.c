#include <stdlib.h>
#include <stdio.h>
#define NIM 1202220029

struct mahasiswa {
    char nama[200];
    int nilai[4];
    float rata[100];
};

void input (struct mahasiswa baru[],int data){
    int total = 0;
        printf("\n===================================");
        printf("\n      Input Mahasiswa Baru");
        printf("\n===================================");
        printf("\nMasukkan Nama Mahasiswa \t: ");
        getchar();
        scanf("%[^\n]", &baru[data].nama);
        printf("Masukkan Nilai Matematika \t: ");
        scanf("%i", &baru[data].nilai[data]);
        printf("Masukkan Nilai Bahasa Indonesia : ");
        scanf("%i", &baru[data].nilai[data]);
        printf("Masukkan Nilai Bahasa Inggris \t: ");
        scanf("%i", &baru[data].nilai[data]);
        printf("Masukkan Nilai Kejuruhan \t: ");
        scanf("%i", &baru[data].nilai[data]);
            for (int c = 0; c<=4; c ++){
                total = total+baru[data].nilai[data];
            }
        float rata = total / 4;
        baru[data].rata = rata;
        data++;
}

void output(struct mahasiswa baru[], int data){
    printf("\n===================================");
    printf("\n      Data Mahasiswa Baru");
    printf("\n===================================");

    for (int i = 0; i < data; i++){
    printf("\nMahasiswa ke-%i",i+1);
    printf("\nNama Mahasiswa \t\t: %s", baru[i].nama);
    printf("\nNilai Matematika \t: %i", baru[i].nilai[i]);
    printf("\nNilai Bahasa Indonesia \t: %i", baru[i].nilai[i]);
    printf("\nNilai Bahasa Inggris \t: %i", baru[i].nilai[i]);
    printf("\nNilai Kejuruhan \t: %i", baru[i].nilai[i]);
    printf("\nNilai Rata-rata \t: %.2f\n", baru[i].rata[i]);
    }
}


int main (){
    struct mahasiswa baru[10];
    int menu;
    for (int i = 0; i >= 0; i ++){
    printf("\n%i",NIM);
    printf("\n======================================");
    printf("\n  PROGRAM MAHASISWA BARU IT TELKOM");
    printf("\n======================================");
    printf("\n1. Input Mahasiswa");
    printf("\n2. Data Mahasiswa");
    printf("\n3. Keluar");
    printf("\nMasukkan pilihan : ");
    scanf("%i", &menu);
        if (menu == 1){
            input(baru,i);
        }else if (menu == 2){
            output(baru,i);
        }else if (menu == 3){
            exit(0);
        } else{}
    }
    return 0;
}
