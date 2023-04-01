#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

int baris (int angka) {

    if (angka <= 1){

        return -1;
    }else{
        if (angka % 2==0)
            printf("%d\t",angka);

        }else{
            printf("%d\t",angka * (-1));


        }
        return baris (angka -1);
    }
}
int main()
{
    int angka;
    for(int i = 0; i < 3; i++){
        printf("Masukan jumlah bilangan : ");
        scanf("%d",&angka);
        printf("%d\n", baris (angka));
    }
    return 0;
  }
