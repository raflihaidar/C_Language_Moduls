#include <stdio.h>
#include <stdlib.h>
int main(){
   int inputUser, sum;
   printf("Masukkan batas bilangan: ");
   scanf("%i", &inputUser);
   for(int i = 1; i <= inputUser; i++){
    if(i % 2 == 0){
        sum +=i;
    }
   }
        printf("Jumlah nya adalah: %i", sum);
}
