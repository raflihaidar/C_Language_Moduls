#include <stdio.h>
#include <stdlib.h>

void looping(int n){
    int i = 1;
    while(i <= n){
        printf("Saya melakukan perulangan sebanyak: %i\n", i);
        i++;
    }
}

int main(){
    int n, hasil;
    printf("Masukan n: "); //fungsi atau procedur
    scanf("%i", &n); //fungsi atau procedur
    looping(n);
    return 0;
}
