#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[7] = {2, 5, 7, 3, 4, 6, 2};
    int n, tanda;

    for(int i = 0; i < 7; i++){
        printf("%2i", a[i]);
    }

    printf("\n");
    printf("\nBilangan yang Dicari : ");
    scanf("%i", &n);


    for(int i = 0; i < 7; i++){
        if(a[i] == n){
            tanda = 1;
            break;
        }else{
            tanda = 0;
        }
    }

    if(tanda == 1){
        printf("\nAda");
    }else{
        printf("\nTidak Ada");
    }
    printf("\n");

    return 0;
}
