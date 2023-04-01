#include <stdio.h>
#include <stdlib.h>
#define NIM 1202220055

int main() {
    char input;
    printf("%i", NIM);
    printf("\n\nApakah Lampu Lalu Lintas Berwarna Merah?: (y/n) ");
    scanf("%c", &input);
    if(input=='y') {
        printf("\nBerhenti dan Amati");
    };
    printf("\n\bHati-hati dalam berkendara ");

    return 0;
}
