#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NIM 1202220029

struct mahasiswa{
    char nama[20];
    int mtk, bin, big, kej;
    float rata;
};

void input(struct mahasiswa x[], int y){
    printf("=============================================\n");
    printf("            Input Mahasiswa Baru\n");
    printf("=============================================\n");

    for (int i=0; i<y; i++){
        printf("\nTambahkan Data Ke-%i\n", i+1);
        printf("=============================================\n");
        printf("Masukkan Nama Mahasiswa \t: ");
        scanf("%s",&x[i].nama);
        printf("Masukkan Nilai Matematika \t: ");
        scanf("%i",&x[i].mtk);
        printf("Masukkan Nilai Bahasa Indonesia : ");
        scanf("%i",&x[i].bin);
        printf("Masukkan Nilai Bahasa Inggris \t: ");
        scanf("%i",&x[i].big);
        printf("Masukkan Nilai Kejuruan \t: ");
        scanf("%i",&x[i].kej);
        printf("=============================================\n");
      }
}

void output(struct mahasiswa x[], int y){
    float rata;
        printf("\n=============================================\n");
        printf("            Data Mahasiswa Baru\n");
        printf("=============================================\n");

    for(int i=0; i<y; i++){
        printf("\nMahasiswa Ke-%i\n", i+1);
        printf("Nama Mahasiswa \t\t: %s\n", x[i].nama);
        printf("Nilai Matematika \t: %i\n",x[i].mtk);
        printf("Nilai Bahasa Indonesia \t: %i\n",x[i].bin);
        printf("Nilai Bahasa Inggris \t: %i\n",x[i].big);
        printf("Nilai Kejuruan \t\t: %i\n",x[i].kej);
        rata=(x[i].mtk+x[i].bin+x[i].big+x[i].kej)/4;
        x[i].rata=rata;
        printf("Nilai Rata-Rata \t: %.2f\n\n", x[i].rata);
    }
}
void search_name(struct mahasiswa x[], int y){
     char carNa[20];
     int i;
     int n = 0;
        printf("\n===========================================\n");
        printf("        Cari Nama Mahasiswa Baru\n");
        printf("=============================================\n");
        printf("Masukkan Nama Mahasiswa : ");
        scanf("%s",&carNa);

     for(i=0; i<y; i++){
         if(strcmp(carNa,x[i].nama)==0){
            n++;
            if(n !=0){
            printf("\nNama Mahasiswa \t\t: %s\n", x[i].nama);
            printf("Nilai Matematika \t: %i\n",x[i].mtk);
            printf("Nilai Bahasa Indonesia \t: %i\n",x[i].bin);
            printf("Nilai Bahasa Inggris \t: %i\n",x[i].big);
            printf("Nilai Kejuruan \t\t: %i\n",x[i].kej);
            printf("Nilai Rata-Rata \t: %.2f\n\n", x[i].rata);
            }
         }
    }
    if(n == 0){
        printf("\nData Tidak Ada yang Sesuai");
    }
}

void search_mean(struct mahasiswa x[], int y){
     int carNi,i;
        printf("\n===========================================\n");
        printf("    Cari Nilai Rata-Rata Mahasiswa Baru\n");
        printf("=============================================\n");
        printf("Masukkan Nilai Rata-Rata Mahasiswa : ");
        scanf("%i", &carNi);

     for(i=0; i<y; i++){
     }
     if(x[i].rata == carNi){
        printf("\nNama Mahasiswa \t\t: %s\n", x[i].nama);
        printf("Nilai Matematika \t: %i\n",x[i].mtk);
        printf("Nilai Bahasa Indonesia \t: %i\n",x[i].bin);
        printf("Nilai Bahasa Inggris \t: %i\n",x[i].big);
        printf("Nilai Kejuruan \t\t: %i\n",x[i].kej);
        printf("Nilai Rata-Rata \t: %.2f\n\n", x[i].rata);
    }else{
        printf("\nData Tidak Ada yang Sesuai");
    }
}

int main()
{
    struct mahasiswa data[100];
    int pilih, banyak, cari;

    do{
    printf("%i\n",NIM);
    printf("=============================================\n");
    printf(" Program Mahasiswa Baru IT Telkom Surabaya\n");
    printf("=============================================\n");
    printf("1. Input Mahasiswa\n");
    printf("2. Data Mahasiswa\n");
    printf("3. Search Mahasiswa\n");
    printf("4. Keluar\n");
    printf("=============================================\n");
    printf("Masukkan Pilihan : ");
    scanf("%i",&pilih);

    switch(pilih){
    case 1:
    printf("=============================================\n");
    printf("Jumlah Data yang Akan di Inputkan : ");
    scanf("%i",&banyak);
    system("cls");
    input(data, banyak);
    break;

    case 2:
    output(data, banyak);
    break;

    case 3:
    system("cls");
    printf("=============================================\n");
    printf("        Jenis Cari Data Mahasiswa\n");
    printf("=============================================\n");
    printf("1. Berdasarkan Nama\n");
    printf("2. Berdasarkan Nilai Rata-Rata\n");
    printf("=============================================\n");
    printf("Masukkan Pilihan : ");
    scanf("%i", &cari);
        if(cari==1){
        search_name(data, banyak);
        }
        else if(cari==2){
        search_mean(data, banyak);
        }
        else{
        system("cls");
        printf("\n  Pilihan Tidak Ada!\n");
        }
        break;

    case 4:
    printf("\n Tugas Telah Terselesaikan!");
    exit(0);

    default:
    printf("\n Pilih Menu yang Tersedia !");
    }

    printf("\n");
    system("pause");
    system("cls");
    }while(pilih!=4);

    return 0;
}
