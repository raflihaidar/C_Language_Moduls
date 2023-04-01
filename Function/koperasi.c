#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// FUNCTION START
int hitungHargaBuku(int buku){
    int hasil;
    const hargaBuku = 5000;
    hasil = hargaBuku * buku;
    return hasil;
}

int hitungHargaPensil(int pensil){
    int hasil;
    const hargaPensil = 1500;
    hasil = hargaPensil * pensil;
    return hasil;
}

int hitungHargaBulpoin(int bulpoin){
    int hasil;
    const hargaBulpoin = 2500;
    hasil = hargaBulpoin * bulpoin;
    return hasil;
}

int rataRataPenjualan(int totalPendapatan, int jumlahPembeli){
    int hasil = totalPendapatan / jumlahPembeli;
    return hasil;
}
//FUNCTION END



int main() {
    int option,inputUser,jumlahBarang,hasil,total, buyers = 0;
    bool loop = true;
    while(loop){
    printf("======================================\n");
    printf("            PROGRAM KOPERASI          \n");
    printf("======================================\n");
    printf("1. Beli Barang\n");
    printf("2. Laporan Pendapatan\n");
    printf("3. Keluar\n");
    printf("Masukkan Pilihan: ");
    scanf("%i", &option);
        if(option == 1){
            printf("======================================\n");
            printf("1. Buku\n");
            printf("2. Pensil\n");
            printf("3. Bulpoin\n");
            printf("======================================\n");
            printf("Pilih Barang: ");
            scanf("%i", &inputUser);
            if(inputUser == 1){
                printf("Masukkan Jumlah Barang yang dibeli: ");
                scanf("%i", &jumlahBarang);
                hasil = hitungHargaBuku(jumlahBarang);
                printf("Total Harga: %i\n", hasil);
                total += hasil; //AKUMULASI TOTAL PENJUALAN
                buyers++; //UNTUK MENENTUKAN JUMLAH PEMBELI
                system("pause");
            }else if(inputUser == 2){
                printf("Masukkan Jumlah Barang yang dibeli: ");
                scanf("%i", &jumlahBarang);
                hasil = hitungHargaPensil(jumlahBarang);
                printf("Total Harga: %i\n", hasil);
                total += hasil; //AKUMULASI TOTAL PENJUALAN
                buyers++; //UNTUK MENENTUKAN JUMLAH PEMBELI
                system("pause");
            }else if(inputUser == 3){
                printf("Masukkan Jumlah Barang yang dibeli: ");
                scanf("%i", &jumlahBarang);
                hasil = hitungHargaBulpoin(jumlahBarang);
                printf("Total Harga: %i\n", hasil);
                total += hasil; //AKUMULASI TOTAL PENJUALAN
                buyers++; //UNTUK MENENTUKAN JUMLAH PEMBELI
                system("pause");
            } else {
                printf("      INPUT TIDAK VALID!!!    \n");
                system("pause");
                system("cls");
            }
        }else if(option == 2){
            printf("Jumlah Pembeli: %i\n", buyers);
            hasil = rataRataPenjualan(total, inputUser);
            printf("Total Pendapatan: %i\n", total);
            printf("Rata-Rata Penjualan: %i\n", hasil);
            system("pause");
        }else if(option == 3){
            loop = false;
            system("cls");
        }else {
            printf("      INPUT TIDAK VALID!!!    \n");
            system("pause");
            system("cls");
        }
    }
    printf("======================================\n");
    printf("         PROGRAM TELAH BERHENTI       \n");
    printf("======================================\n");
    return 0;
}
