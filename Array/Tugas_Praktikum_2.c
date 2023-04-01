#include <stdio.h>
#include <stdlib.h>


int main()
{
    int baris, kolom;
    int arrayA[50][50], arrayB[50][50], hasil[50][50];

    printf("Baris : ");
    scanf("%i", &baris);
    printf("Kolom : ");
    scanf("%i", &kolom);

    printf("Masukkan Matriks ke-1 : \n");
        for(int i = 1; i <= baris; i++ ) {
            for(int j = 1; j <= kolom; j++){
                int array[i][j];
                printf("Masukkan Elemen A(%i,%i) : ", i, j);
                scanf("%i", &arrayA[i][j]);
            }
    }

    printf("\nMasukkan Matriks ke-2 : \n");
    for(int i = 1; i <= baris; i++ ) {
        for(int j = 1; j <= kolom; j++){
            int array[i][j];
            printf("Masukkan Elemen B(%i,%i): ", i, j);
            scanf("%i", &arrayB[i][j]);
            }
    }

    printf("\nHasil pertambahan : \n");
    for(int i = 1; i <= baris; i++ ) {
        for(int j = 1; j <= kolom; j++){
                hasil[i][j] = arrayA[i][j] + arrayB[i][j];
                printf("%i ", hasil[i][j]);
            }
        printf("\n");
    }

    printf("\nHasil Pengurangan : \n");
    for(int i = 1; i <= baris; i++ ) {
        for(int j = 1; j <= kolom; j++){
                hasil[i][j] = arrayA[i][j] - arrayB[i][j];
                printf("%i ", hasil[i][j]);
            }
        printf("\n");
    }
    return 0;
}
