#include <stdio.h>
#include <stdlib.h>
#define NIM 1202220055

int main() {
    int hari;
    printf("\n%i", NIM);
    printf("\nMasukkan hari ini ke (angka): ");
    scanf("%i", &hari);
    printf("\n");

    switch(hari) {
    case 1:
        printf("Hari ke %i adalah hari Minggu", hari);
        break;
    case 2:
        printf("Hari ke %i adalah hari Senin", hari);
        break;
    case 3:
        printf("Hari ke %i adalah hari Selasa", hari);
        break;
    case 4:
        printf("Hari ke %i adalah hari Rabu", hari);
        break;
    case 5:
        printf("Hari ke %i adalah hari Kamis", hari);
        break;
    case 6:
        printf("Hari ke %i adalah hari Jumat", hari);
        break;
    case 7:
        printf("Hari ke %i adalah hari Sabtu", hari);
    default:
        printf("Maximal hari sampai 7");
    }
    return 0;
}
