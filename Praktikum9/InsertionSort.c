/*Nama File : CountingSort.c*/
/*Deskripsi : mengurutkan array acak dengan metode counting sort*/
/*Pembuat   : Dhimas Alif Prabowo - 24060121120037*/
/*Tanggal   : Selasa,26 April 2022 - 11.04*/

#include <stdio.h>

void InsertionSort(int arr[], int n)
{
    /*Kamus*/
    int i ;
    int temp ;
    int j ;

    /*Algoritma*/
    for(i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1 ;
        while (j>=0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j = j - 1 ;
        }
        arr[j + 1] = temp ;
    }

}
int main()
{
    /*Kamus*/
    int i ;
    int arr[] = {56,43,1,345,64,23,12,54,65,23};
    int n = 10;

    /*Algoritma*/
    printf("============== PROGRAM SORTING INSERTIONSORT ================\n\n");
    printf("Arraynya adalah 56,43,1,345,64,23,12,54,65,23\n");
    printf("\nArray setelah disorting adalah ");
    n = sizeof(arr) / sizeof(arr[0]);
    InsertionSort(arr, n) ;
    for(i = 0; i < n; i ++){
        printf("%d ", arr[i]) ;
    }

    printf("\n\n===========================================================\n\n");

return 0 ;
}
