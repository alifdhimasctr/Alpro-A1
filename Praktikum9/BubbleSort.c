/*Nama File : BubbleSort.c*/
/*Deskripsi : mengurutkan array acak dengan metode bubble sort*/
/*Pembuat   : Dhimas Alif Prabowo - 24060121120037*/
/*Tanggal   : Selasa,26 April 2022 - 11.04*/


#include <stdio.h>

void bubbleSort1(int arr[], int n)
{
    /*Kamus*/
    int i, j, temp;
    /*Algoritma*/
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void bubbleSort2(int arr[], int n)
{
    /*Kamus*/
    int i, j, temp;
    /*Algoritma*/
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] < arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    /*Kamus*/
    int i, n = 10;
    int arr[10] = {3,12,65,32,24,21,73,100,13,1};
    int x;
    /*Algoritma*/
    printf("============== PROGRAM SORTING BUUBLESORT ================\n\n");
    printf("Array nya adalah 3,12,65,32,24,21,73,100,13,1\n\n");
    printf("pilih ( ascending(1) / descending(2) ) = ");
    scanf("%d",&x);
    if (x==1){
    bubbleSort1(arr, n);
    printf("Urutan array nya adalah = ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    }
    else if (x==2){
    bubbleSort2(arr, n);
    printf("Urutan array nya adalah = ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    }
    else {
        printf("error");
    }
    printf("\n\n================================================================");

    return 0;
}
