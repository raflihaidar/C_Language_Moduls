#include <stdio.h>
#include <stdlib.h>

void cariHuruf(char kalimat[], char input, int length){

}

int main(){
    int length = 50, tanda;
    char kalimat[50] = "aku senang belajar alpro";
    char input;
    puts("==============================================");
    puts("                 Program Searching            ");
    puts("==============================================");
    printf("Mencari banyak huruf dalam kalimat %s\n", kalimat);

    printf("Masukkan huruf yang mau dicari : ");
    scanf("%c", &input);

    for(int i = 0; i < 50; i++){
        if(input == kalimat[i]){
            printf("Ada\n");
            break;
        }
    }

    printf("Lokasi yang sama : ");
    for(int i = 0; i < length; i++){
        if(input == kalimat[i]){
            printf("%d ", i);
            tanda++;
        }
    }

    if(tanda == 0){
        printf("Tidak ada");
    }

}
