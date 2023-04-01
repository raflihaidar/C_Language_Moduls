#include <stdio.h>
#include <stdlib.h>

void angsuranBunga(int pinjaman, int bunga, int tahun, int *total){
    *total = (pinjaman * bunga * tahun);
}

void totalPerbulan(int pinjaman, int bunga, int tahun, int *total){
    *total = (pinjaman * bunga / 12) + (pinjaman / (tahun * 12));
}


int main(){
    int input1, input2, tahun, hasil1, hasil2;
    printf("=========================================\n");
    printf("             PPROGRAM BUNGA TETAP        \n");
    printf("=========================================\n");

    printf("Masukkan uang pinjaman: ");
    scanf("%i", &input1);
    printf("Masukkan suku bunga per tahun (tanpa persen): ");
    scanf("%i", &input2);
    printf("Masukkan kurun waktu berapa tahun: ");
    scanf("%i", &tahun);

    //pemanggilan fungsi
    angsuranBunga(input1, input2, tahun, &hasil1);
    printf("Hasil total bunga: %i\n", hasil1);

    totalPerbulan(input1, input2, tahun, &hasil2);
    printf("Angsuran harus dibayar tiap bulan sebesar: %i", hasil2);
    return 0;
}
