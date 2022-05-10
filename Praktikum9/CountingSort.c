/*Nama File : CountingSort.c*/
/*Deskripsi : mengurutkan array acak dengan metode counting sort*/
/*Pembuat   : Dhimas Alif Prabowo - 24060121120037*/
/*Tanggal   : Selasa,26 April 2022 - 11.04*/

#include <stdio.h>

void counting_sort(int arr1[],int n,int max, int min){
    /*Kamus*/
    int count[100]={0},i,j;

    /*Algoritma*/
    for(i=0;i<n;++i)
        count[arr1[i]-min]=count[arr1[i]-min]+1;
    for(i=0;i<=max-min;++i)
        for(j=1;j<=count[i];++j)
            printf("%d ",i+min);
}

int main(){
    /*Kamus*/
    int i, n = 10,
    int arr[10] = {5,3,73,23,43,23,3,6,5,4}
    int max=0, min=1;

    /*Algoritma*/
    printf("============== PROGRAM SORTING BUUBLESORT ================\n\n");
    printf("Array sebelum disorting: ");
    for(i = 0; i < n; i++){
        if(arr[i]>max)
            max=arr[i];
        (arr[i]<min)? min=arr[i] : min;
        printf("%d ", arr[i]);
    }

    printf("\nArray setelah disorting: ");
    counting_sort(arr,n,max, min);
    return 0;
}
