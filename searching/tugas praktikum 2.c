#include <stdio.h>
#include <stdlib.h>

struct Games {
    char negara[50];
    int csgo[100],
        dota[100],
        overwatch[100],
        total[100];
}esport[];

//header
void inputData(int length);
int total(int data1, int data2, int data3);
void output(int length);
int over(int length, int n);
int under(int length, int n);

//fungsi main
int main(){
    int length = 3, n = 0;

    //pemanggilan fungsi
    inputData(length);
    output(length);
    over(length, n);
    under(length, n);
}

// Procedure Untuk Input Data
void inputData(int length){
    puts("Data Tim yang terdaftar dalam Perlombaan Esport Dunia");
    for(int i = 0; i < length; i++){
        printf("Masukkan Negara  %i  =  ", i+1);
        scanf("%s", &esport[i].negara);
        printf("Tim CSGO  %i  =  ", i+1);
        scanf("%i", &esport[i].csgo[i]);
        printf("Tim Dota2  %i =  ", i+1);
        scanf("%i", &esport[i].dota[i]);
        printf("Tim Overwatch  %i =  ", i+1);
        scanf("%i", &esport[i].overwatch[i]);
        printf("\n");
    }
}

//Fungsi untuk menghitung total
int total(int data1, int data2, int data3){
    int jumlah = data1 + data2 + data3;
    return jumlah;
}

//Procedure untuk mengoutputkan data yang telah diinputkan user
void output(int length){
    printf("Negara\t\t\t");
    printf("CSGO\t\t\t");
    printf("Dota2\t\t\t");
    printf("Overwatch\t\t");
    printf("Total\n\n");

    for(int i = 0; i < length; i++){
            printf("%s\t\t\t", esport[i].negara);
            printf("%i\t\t\t", esport[i].csgo[i]);
            printf("%i\t\t\t", esport[i].dota[i]);
            printf("%i\t\t\t", esport[i].overwatch[i]);
            esport[i].total[i] = total(esport[i].csgo[i], esport[i].dota[i], esport[i].overwatch[i]); //pemanggilan fungsi total
            printf("%i\t\t\t", esport[i].total[i]);
            printf("\n");
        }
}

//procedure untuk searching di atas 100
int over(int length, int n){
    printf("Total tim yang terdaftar lebih dari 100\n");
    for(int i = 0; i < length; i++){
        if(esport[i].total[i] > 100){
            printf("%s\n", esport[i].negara);
            n++; //menunjukkan kondisi terpenuhi
        }
    }

    if(n == 0){ //n = 0 maka tidak ada data yang lebih dari 100
        printf("tidak ada\n");
    }
}

//procedure untuk searching di bawah 100
int under(int length, int n){
    printf("\nTotal tim yang terdaftar kurang dari 100\n");
    for(int i = 0; i < length; i++){
        if(esport[i].total[i] < 100){
                printf("%s\n", esport[i].negara);
                n++; //menunjukkan kondisi terpenuhi
            }
        }
    if(n == 0){ //n = 0 maka tidak ada data yang kurang dari 100
        printf("tidak ada\n\n");
    }
}
