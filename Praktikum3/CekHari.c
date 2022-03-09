/*Nama File : [CekHari.c]*/
/*Deskripsi : [menuliskan ke layar nama-nama Hari dari nomor hari 1 s.d 7]*/
/*Pembuat   : [Dhimas Alif Prabowo - 24060121120037]*/
/*Tanggal   : [Rabu, 09-03-2022 7:21 WIB]*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;
    int h;


    /*Algoritma*/;
    printf("====PROGRAM NAMA HARI====\n");
    printf("Masukkan angka = ");
    scanf("%d", &h);

    switch(h)
{

    case 1 : printf("Hari Senin\n");break;
    case 2 : printf("Hari Selasa\n");break;
    case 3 : printf("Hari Rabu\n");break;
    case 4 : printf("Hari Kamis\n");break;
    case 5 : printf("Hari Jum'at\n");break;
    case 6 : printf("Hari Sabtu\n");break;
    case 7 : printf("Hari Minggu\n");break;
    default: printf("Masukan nama hari salah\n");break;
}
    return 0;
}
