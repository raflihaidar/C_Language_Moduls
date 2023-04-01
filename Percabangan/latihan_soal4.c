#include <stdio.h>
#include <stdlib.h>

int main(){
    int input;
    printf("==================== PROGRAM CEK TAHUN KABISAT ==================\n");
    printf("Masukkan tahun yang akan dicek: ");scanf("%i", &input);

        if(input % 4 == 0) {
            printf("Tahun %i adalah tahun kabisat", input);
        } else if(input % 100 == 0) {
            printf("Tahun %i adalah tahun kabisat", input);
        } else if(input % 400 == 0){
            printf("Tahun %i adalah tahun kabisat", input);
        } else {
            printf("Tahun %i bukan termasuk tahun kabisat", input);
        }
}
