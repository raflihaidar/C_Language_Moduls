#include <stdio.h>
#include <stdlib.h>

int main(){
    int numbList[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    //Untuk Menampilkan Angka Awal
    printf("Angka Awal = ");
    for(int i = 0; i < 10; i++){
        printf("%i ", numbList[i]);
    }

    printf("\nBilangan Genap = ");
    for(int i = 0; i < 10; i++){
            if(numbList[i] % 2 == 0){
            printf("%i ", numbList[i]);
        }
    }

    printf("\nBilangan Ganjil = ");
    for(int j = 0; j < 10; j++){
        if(numbList[j] % 2 == 1){
            printf("%i ", numbList[j]);
        }
    }
}
