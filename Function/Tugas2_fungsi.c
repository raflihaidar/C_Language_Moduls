#include <stdio.h>
#include <stdlib.h>

int pangkatBilangan(int bilangan, int pangkat){
    int hasil, i;
    hasil = 1;
    for(i = 1; i <= pangkat; i++){
        hasil = hasil * bilangan;
    }
    return hasil;
}


int main(){
    int input1, input2, hasil;

    printf("Masukkan yang akan anda pangkatkan: ");
    scanf("%i", &input1);
    printf("Masukkan Pangkat: ");
    scanf("%i", &input2);
    hasil = pangkatBilangan(input1, input2);
    printf("Hasilnya adalah %i", hasil);
    return 0;
}
