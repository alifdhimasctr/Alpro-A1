/*Nama File : luasbjsk.c*/
/*Deskripsi : Menghitung luas dari bujung sangkar*/
/*Pembuat   : Dhimas Alif Prabowo - 24060121120037*/
/*Tanggal   : Selasa, 01-03-2022 11:29 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;
    int sisi;
    int luas;

    /*Algoritma*/;
    printf("Masukkan sisi bujur sangkar = ");
    scanf("%d", &sisi);
    luas = sisi*sisi;
    printf("Luas Bujur Sangkar adalah %d satuan luas" ,luas);
    return 0;
}
