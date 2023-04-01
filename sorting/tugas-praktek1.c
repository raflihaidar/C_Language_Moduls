#include <stdio.h>
#include <stdlib.h>

int main(){
    int inputUser, num[100], temp, n;
    printf("Masukkan Berapa Angka yang Dimasukkan : ");
    scanf("%i", &inputUser);
    printf("Masukkan Angka\n");
    for(int i = 0; i < inputUser; i++){
        scanf("%i", &num[i]);
        n++;
    }

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(num[j] < num[j+1]){
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    printf("\nDescending :");
    for(int i = 0; i < inputUser; i++){
        printf("%i ", num[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(num[j] > num[j+1]){
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

        printf("\nAscending :");
        for(int i = 0; i < inputUser; i++){
        printf("%i ", num[i]);
    }
}
