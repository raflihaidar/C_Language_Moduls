#include <stdio.h>
#include <stdlib.h>

//fungsi rekursif mencari fpb
int fpb(int angka, int angka2){
    if(angka == 0){
         return angka2;
    }else if(angka2 == 0){
         return angka;
    }else if(angka == angka2){
         return angka;
    }else if(angka > angka2){
        return fpb(angka - angka2, angka2);
    }else{
        return fpb(angka, angka2 - angka);
    }
}

//procedure untuk input user
void inputUser(int angka[], int n){
    int i = 0, hasil;
    printf("Berapa banyak angka yang diinputkan : ");
    scanf("%d", &n);
    while(i < n){
        printf("Masukkan angka ke-%d: ", i+1);
        scanf("%d", &angka[i]);
        i++;
    }
    hasil = cariFpb(angka, n); //pemanggilan procedure untuk mencari fpb
    printf("FPB dari angka yang diinputkan adalah : %d", hasil); //output
}

// proceudure mencari fpb
void cariFpb(int angka[], int n){
    int i = 0;
    while(i < n){
        fpb(angka[i], angka[i + 1]);
        i++;
        break;
    }
}

int main(){ //fumgsi utama
    int inputAngka[100], batas;
    inputUser(inputAngka, batas);
    return 0;
}
