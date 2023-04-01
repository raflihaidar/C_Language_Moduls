#include <stdio.h>
#include <stdlib.h>
#define phi 3.14

int main() {
    printf("Program Untuk Menghitung Luas Permukaan Tabung\n\n");
    float tinggi, jariJari;
    printf("Masukkan jari-jari tabung: ");
    scanf("%f", &jariJari);
    printf("Masukkan tinggi tabung: ");
    scanf("%f", &tinggi);
    float luas = (2 * phi * jariJari * (jariJari + tinggi));

    printf("Hasil perhitungan luas permukaan tabung adalah: %.1f", luas);
}
