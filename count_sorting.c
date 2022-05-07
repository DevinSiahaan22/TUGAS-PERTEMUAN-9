/*Nama Program : count_sorting.c*/
/*Deskripsi    : Mengurutkan data dengan count sort*/
/*Pembuat      : 24060121140158-Devin Januar Siahaan*/
/*Tgl Pembuatan : Sabtu. 7 Mei 2022*/
//----------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

void countSort(int T[], int N){
    // Kamus Lokal
    int i, j, k, count[10];
    // Algoritma
    for (i = 0; i < 10; i++){
        count[i] = 0;
    }
    for (i = 0; i < N; i++){
        count[T[i]]++;
    }
    for (i = 0, j = 0; i < 10; i++){
        for (k = 0; k < count[i]; k++){
            T[j] = i;
            j++;
        }
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
    countSort(array, n);
    printf("Sorted list: ");
    for (i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
