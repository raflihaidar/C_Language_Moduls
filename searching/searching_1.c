#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[7] = {2, 5, 7, 3, 4, 6, 2};
    int n;

    for(int i = 0; i < 7; i++){
        printf("%2i", a[i]);
    }

    printf("\nBilangan yang Dicari : ");
    scanf("%i", &n);

    for(int i = 0; i < 7; i++){
        if(a[i] == n){
            printf("\nAda");
        }else{
            printf("\nTidak Ada");
        }
    }
    printf("\n");

    return 0;
}
