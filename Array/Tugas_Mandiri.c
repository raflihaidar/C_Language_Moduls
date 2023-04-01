#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


//struct
struct dataMahasiswa
{
    char nama[100];
    int nilaiMtk[50],
        nilaiBindo[50],
        nilaiBing[50],
        nilaiKejuruhan[50];
    float rataRata[50];
}maba[], tempMaba[];

//header
void inputData(int size);
float mean(int a, int b, int c, int d);
void mainProgram(int option, int size, bool loop);
void display(int size);
void searchMahasiswa(int length, int option, char *namaInput, float inputRataRata);
void searchNama(int size, char *namaInput);
void searchMean(int size, float inputRataRata);
void bubbleSort(int size);


//fungsi utama
int main(){
    int option, size;
    char namaInput[100];
    float inputRataRata;
    bool loop = true;
        while(loop){
        printf("=====================================\n");
        printf("  Program Mahasiswa Baru IT Telkom  \n");
        printf("=====================================\n");
        printf("1. Input Mahasiswa\n");
        printf("2. Data Mahasiswa\n");
        printf("3. Search Mahasiswa\n");
        printf("4. Sorting Mahasiswa\n");
        printf("5. Keluar\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &option);
            if(option == 1){
                inputData(size++);
            }else if(option == 2){
                display(size);
            }else if(option == 3){
                searchMahasiswa(size, option, namaInput, inputRataRata);
            }else if(option == 4){
                bubbleSort(size);
            }else if(option == 5){
                system("cls");
                printf("==============================================\n");
                printf("               PROGRAM BERHENTI               \n");
                printf("==============================================\n");
                loop = false;
            }else{
                printf("         INPUTAN YANG ANDA MASUKKAN SALAH     \n");
                system("pause");
                system("cls");
            }
    }
}

//Fungsi untuk menghitung rata rata
float mean(int mtk, int bindo, int bing, int kej){
    int hasil = (mtk + bindo + bing + kej) / 4;
    return hasil;
}

//procedure untuk input data
void inputData(int size){
            printf("=====================================\n");
            printf("          INPUT MAHASISWA BARU       \n");
            printf("=====================================\n");
            fflush(stdin);
            printf("Masukkan Nama Mahasiswa : ");
            gets(maba[size].nama);
            printf("Masukkan Nilai Matematika : ");
            scanf("%d", &maba[size].nilaiMtk[size]);
            printf("Masukkan Nilai Bahasa Indonesia : ");
            scanf("%d", &maba[size].nilaiBindo[size]);
            printf("Masukkan Nilai Bahasa Inggris : ");
            scanf("%d", &maba[size].nilaiBing[size]);
            printf("Masukkan Nilai Kejuruhan : ");
            scanf("%d", &maba[size].nilaiKejuruhan[size]);
    system("pause");
    system("cls");
}

//prosedur untuk menampilkan data mahasiswa
void display(int size){
        printf("=====================================\n");
        printf("           DATA MAHASISWA BARU       \n");
        printf("=====================================\n");
        for(int i = 0; i < size; i++){
            printf("Data Mahasiswa ke-%i\n", i+1);
            printf("Nama Mahasiswa : %s\n", maba[i].nama);
            printf("Nilai Bahasa Matematika : %d\n", maba[i].nilaiMtk[i]);
            printf("Nilai Bahasa Indonesia : %d\n", maba[i].nilaiBindo[i]);
            printf("Nilai Bahasa Inggris : %d\n", maba[i].nilaiBing[i]);
            printf("Nilai Kejuruhan : %d\n", maba[i].nilaiKejuruhan[i]);
            maba[i].rataRata[i] = mean(maba[i].nilaiMtk[i], maba[i].nilaiBindo[i], maba[i].nilaiBing[i], maba[i].nilaiKejuruhan[i]);
            printf("Nilai rata-rata : %.f\n\n", maba[i].rataRata[i]);
        }
    system("pause");
    system("cls");
}

//prsedur untuk menampilkan menu searching
void searchMahasiswa(int length, int option, char *nama, float rataRata){
    bool loop = true;
    system("cls");
    while(loop){
        printf("=====================================\n");
        printf("    Jenis Cari Data Nama Mahasiswa   \n");
        printf("=====================================\n");
        printf("1. Berdasarkan Nama\n");
        printf("2. Berdasarkan Nilai Rata-Rata\n");
        printf("3. Kembali\n");
        printf("Masukkan Pilihan  : ");
        scanf("%i", &option);
        if(option == 1){
            searchNama(length, nama);
        }else if(option ==2){
            searchMean(length, rataRata);
        }else if(option == 3){
            loop = false;
            system("cls");
        }else{
            printf("Inputan yang Anda Masukkan Tidak Valid\n");
            system("pause");
            system("cls");
        }
    }

}

//Searching berdasarkan nama
void searchNama(int size, char *namaInput){
    int n = 0;
    printf("=====================================\n");
    printf("      Cari Nama Mahasiswa Baru       \n");
    printf("=====================================\n");
    fflush(stdin);
    printf("Masukkan Nama Mahasiswa : ");
    gets(namaInput);
    for(int i = 0; i < size; i++){
        if(strcmp(namaInput, maba[i].nama)==0){
            n++;
            if(n != 0){
                printf("\nNama Mahasiswa : %s\n", maba[i].nama);
                printf("Nilai Bahasa Matematika : %d\n", maba[i].nilaiMtk[i]);
                printf("Nilai Bahasa Indonesia : %d\n", maba[i].nilaiBindo[i]);
                printf("Nilai Bahasa Inggris : %d\n", maba[i].nilaiBing[i]);
                printf("Nilai Kejuruhan : %d\n", maba[i].nilaiKejuruhan[i]);
                printf("Nilai rata-rata : %.f\n\n", maba[i].rataRata[i]);
            }
        }
    }

    if(n == 0){
        printf("Data Mahasiswa Tidak Ditemukan\n");
    }
    system("pause");
    system("cls");
}

//Searching berdasarkan rata rata
void searchMean(int size, float inputRataRata){
    int n = 0;
    printf("=========================================\n");
    printf("   Cari Nilai Rata-Rata Mahasiswa Baru   \n");
    printf("=========================================\n");
    printf("Masukkan Nilai Rata-Rata Mahasiswa : ");
    scanf("%f", &inputRataRata);
    for(int i = 0; i < size; i++){
        if(inputRataRata == maba[i].rataRata[i]){
            n++;
            if(n != 0){
                printf("\nNama Mahasiswa : %s\n", maba[i].nama);
                printf("Nilai Bahasa Matematika : %d\n", maba[i].nilaiMtk[i]);
                printf("Nilai Bahasa Indonesia : %d\n", maba[i].nilaiBindo[i]);
                printf("Nilai Bahasa Inggris : %d\n", maba[i].nilaiBing[i]);
                printf("Nilai Kejuruhan : %d\n", maba[i].nilaiKejuruhan[i]);
                printf("Nilai rata-rata : %.f\n\n", maba[i].rataRata[i]);
            }
        }
    }
    if(n == 0){
        printf("Data Mahasiswa Tidak Ditemukan\n");
    }
    system("pause");
    system("cls");
}

//Sorting Rata-rata Mahasiswa
void  bubbleSort(int size){
    printf("=========================================\n");
    printf(" Sorting Nilai Rata-Rata Mahasiswa Baru  \n");
    printf("=========================================\n");
    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size-i-1; j++){
            if(maba[j].rataRata[j] < maba[j+1].rataRata[j+1]){
                strcpy(tempMaba[j].nama, maba[j].nama);
                tempMaba[j].nilaiMtk[j] = maba[j].nilaiMtk[j];
                tempMaba[j].nilaiBindo[j] = maba[j].nilaiBindo[j];
                tempMaba[j].nilaiBing[j] = maba[j].nilaiBing[j];
                tempMaba[j].nilaiKejuruhan[j] = maba[j].nilaiKejuruhan[j];
                tempMaba[j].rataRata[j] = maba[j].rataRata[j];

                strcpy(maba[j].nama, maba[j+1].nama);
                maba[j].nilaiMtk[j] = maba[j+1].nilaiMtk[j+1];
                maba[j].nilaiBindo[j] = maba[j+1].nilaiBindo[j+1];
                maba[j].nilaiBing[j] = maba[j+1].nilaiBing[j+1];
                maba[j].nilaiKejuruhan[j] = maba[j+1].nilaiKejuruhan[j+1];
                maba[j].rataRata[j] = maba[j+1].rataRata[j+1];

                strcpy(maba[j+1].nama, tempMaba[j].nama);
                maba[j+1].nilaiMtk[j+1] = tempMaba[j].nilaiMtk[j];
                maba[j+1].nilaiBindo[j+1] = tempMaba[j].nilaiBindo[j];
                maba[j+1].nilaiBing[j+1] = tempMaba[j].nilaiBing[j];
                maba[j+1].nilaiKejuruhan[j+1] = tempMaba[j].nilaiKejuruhan[j];
                maba[j+1].rataRata[j+1] = tempMaba[j].rataRata[j];
            }
        }
    }
    display(size);
}
