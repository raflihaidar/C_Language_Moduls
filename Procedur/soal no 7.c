#include <stdio.h>
#include <stdlib.h>

int main(){
    int inputUser[20], sum;
    for(int i = 1; i < 21 ; i++){
        printf("Masukkan Bilangan ke-%i : ", i);
        scanf("%i", &inputUser[i]);
        sum += inputUser[i];
    }
    printf("%i", sum);
}
