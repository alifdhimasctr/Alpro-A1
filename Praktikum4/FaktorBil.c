/*Nama File : FaktorBil.c*/
/*Deskripsi : Melihat faktor bilangan sembarang*/
/*Pembuat   : Dhimas Alif Prabowo - 24060121120037*/
/*Tanggal   : Senin, 21-03-2022 17:41 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int N,i;

    /*Algoritma*/
    printf("============Faktor Bilangan============\n");
    printf("\n");
    printf("Masukan bilangan : ");
    scanf("%d",&N);

    if(N<=0){
        printf("Bilangan tidak boleh negatif");
    }
else {
        printf("Faktor dari bilangan tersebut adalah\n");
      for(i=1;i<=N;i++) {
            if(N % i == 0)
                printf(" %d \n",i);
            }
}
printf("\n");
printf("=======================================\n");

    return 0;
}
