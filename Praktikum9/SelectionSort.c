/*Nama File : SelectionSort.c*/
/*Deskripsi : mengurutkan array acak dengan metode selection sort*/
/*Pembuat   : Dhimas Alif Prabowo - 24060121120037*/
/*Tanggal   : Selasa,26 April 2022 - 11.04*/

#include <stdio.h>

void SelectionSort(int arr[], int n)
{
    /*Kamus*/
    int i ;
    int min ;
    int temp ;
    int j ;

    /*Algoritma*/
    for(i = 0; i < n; i++) {
        min = i ;
        for(j = i+1; j < n; j++){
            if (arr[j] < arr[min]){
                min = j ;
            }
        }
        temp = arr[min] ;
        arr[min] = arr[i] ;
        arr[i] = temp ;
    }

}

int main()
{
    /*Kamus*/
    int i ;
    int n = 10 ;
    int arr[] = {23,43,12,7,9,2,211,121,21,34} ;

    /*Algoritma*/
    printf("==================== PROGRAM SELECTIONSORT =====================\n\n");
    printf("Array sebelum disorting = 23,43,12,7,9,2,211,121,21,34\n\n");
    printf("Array setelah disorting = ");
    n = sizeof(arr) / sizeof(arr[0]);
    SelectionSort(arr, n) ;
    for(i = 0; i < n; i ++){
        printf("%d ", arr[i]) ;
}
    printf("\n\n================================================================");


return 0;
}
