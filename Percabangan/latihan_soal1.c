#include <stdio.h>
#include <stdlib.h>

int main(){
    int bil1, bil2,bil3;

    printf("Masukkan Bilangan ke-1: ");
    scanf("%i", &bil1);
    printf("Masukkan Bilangan ke-2: ");
    scanf("%i", &bil2);
    printf("Masukkan Bilangan ke-3: ");
    scanf("%i", &bil3);

    if((bil1 != bil2) && (bil1 != bil3)){
        if((bil1 > bil2) && (bil1 > bil3)){
            printf("bilangan terbesar adalah bilangan ke-1");
        }else if((bil2 > bil1) && (bil2 > bil3)){
            printf("bilangan terbesar adalah bilangan ke-2");
        } else{
            printf("bilangan terbesar adalah bilangan ke-3");
        }
    } else {
        printf("Ketiga bilangan ini sama besar");
    }
}
