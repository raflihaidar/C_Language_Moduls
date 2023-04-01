#include <stdio.h>
#include <stdlib.h>
#define NIM 1202220055

int main()
{
    int b1, b2, b3;
    printf("%i\n", NIM);
    printf("==========================================\n");
    printf("Program Bilangan Terbesar\n");
    printf("==========================================\n");

    printf("Masukkan bilangan 1: ");
    scanf("%i", &b1);
    printf("Masukkan bulangan 2: ");
    scanf("%i", &b2);
    printf("Masukkan bulangan 3: ");
    scanf("%i", &b3);

    if((b1 >= b2) && (b1 >= b3)) {
        printf("\nBilangan terbesar adalah: %i", b1);
    } else if ((b2 >= b1) && (b2 >= b3)){
        printf("\nBilangan terbesar adalah: %i", b2);
    } else {
        printf("\nBilangan terbesar adalah %i", b3);
    }

    return 0;
}
