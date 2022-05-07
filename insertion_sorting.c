/*Nama Program : insertion_sorting.c*/
/*Deskripsi    : Mengurutkan data dengan insertion sort*/
/*Pembuat      : 24060121140158-Devin Januar Siahaan*/
/*Tgl Pembuatan : Sabtu. 7 Mei 2022*/
//----------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

void insertionsort(int T[], int N){
    // Kamus Lokal
    int i, j, temp;
    // Algoritma
    for (i = 1; i < N; i++){
        temp = T[i];
        for (j = i-1; j >= 0 && T[j] > temp; j--){
            T[j+1] = T[j];
        }
        T[j+1] = temp;
    }
}

int main(){
    // Kamus
    int array[100], n, i, j;
    // Algoritma
    printf("Input the number of elements: ");
    scanf("%d", &n);
    printf("Input the elements: ");
    for (i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    insertionsort(array, n);
    printf("Sorted list: ");
    for (i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
