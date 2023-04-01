#include <stdio.h>
#include <stdlib.h>
#define size 5

int main(){
    int a[size] = {5, 7, 2, 9, 1};
    int temp;

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size-1; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("\nsorting : \n");
    for(int i = 0; i < size; i++){
        printf("A[i] : %i\n", a[i]);
    }
    return 0;
}
