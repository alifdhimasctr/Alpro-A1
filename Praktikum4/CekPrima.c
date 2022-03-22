/*Nama File : CekPrima.c*/
/*Deskripsi : Mengecek bilangan sembarang prima atau bukan*/
/*Pembuat   : Dhimas Alif Prabowo - 24060121120037*/
/*Tanggal   : Senin, 21-03-2022 17:41 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int N,i,counter;

    /*Algoritma*/
    printf("===========Cek Bilangan Prima============\n");
    printf("\n");
    printf("Masukkan Bilangan => ");
    scanf("%d",&N);

        for(i=2;i<N;i++){
            if(N%i==0){
                counter = 0;
                break;
            } else {
                counter = 1;
            }
        }
        if(counter==1){
            printf("%d adalah bilangan prima \n",N);
            } else {
            printf("%d bukan bilangan prima \n",N);
        }
    }
    printf("\n");
    printf("=========================================\n");
    return 0;

}
