#include <stdio.h>
#include <stdlib.h>

int getPangkat(int bilangan, int pangkat)
{
        if(pangkat == 0 ){
            return 1;
        }else{
            return bilangan * getPangkat(bilangan, pangkat - 1);
        }
}
int main(){
    int inputBilangan, inputPangkat;
    printf("Masukkan Bilangan : ");scanf("%d", &inputBilangan);
    printf("Masukkan pangkatnya ; ");scanf("%d", &inputPangkat);
    printf("Hasil dari %d pangkat %d adalah : %d", inputBilangan, inputPangkat, getPangkat(inputBilangan, inputPangkat));
}

