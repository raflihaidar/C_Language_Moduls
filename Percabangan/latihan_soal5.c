#include <stdio.h>
#include <stdlib.h>

int main(){
    int inputGol, inputAnak;

    printf("Masukkan Golongan Karyawan: "); scanf("%i", &inputGol);
    printf("Masukkan Jumlah Anak: "); scanf("%i", &inputAnak);


    if(inputGol == 1){
        if(inputAnak <= 3){
            printf("Gaji pegawai perbulan: %i/bulan", 2000000 + (500000 * inputAnak) );
        } else {
            printf("Maksimal 3 Anak");
        }
    }else if(inputGol == 2){
        if(inputAnak <= 3){
            printf("Gaji pegawai perbulan: %i/bulan", 4000000 + (500000 * inputAnak));
        }else{
            printf("Karena Tunjangan diberikan maksimal hanya 3 orang maka %i orang tidak mendapat\n", inputAnak - 3);
            printf("Gaji pegawai perbulan: %i/bulan", 4000000 + (500000 * 3));
        }
    }else{
        printf("Pilihan tidak tersedia");
    }
}
