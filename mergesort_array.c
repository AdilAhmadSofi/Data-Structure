#include <stdio.h>   
#include "myheader.h"

void copy(int dest[], int src[], int from, int to) {
    while (from <= to) {
        dest[from] = src[from];
        from++;
    }
}

void merge(int arr[], int aux[], int low, int mid, int high) {
    copy(aux, arr, low, high);
    int i = low;
    int j = mid+1;
    for(int k = low; k <= high; k++) {
        if (i > mid)
      arr[k] = aux[j++];
    else if (j > high)
      arr[k] = aux[i++];
    else if (aux[i] < aux[j])
      arr[k] = aux[i++];
    else
      arr[k] = aux[j++];
    }
}

void mergesort(int arr[], int aux[], int low, int high) {
    if(low<high) {
        int mid = (low + high)/2;
        mergesort(arr, aux, low , mid);
        mergesort(arr, aux, mid+1 , high);
        merge(arr, aux, low ,mid, high);
    }
}
void mergesortArray(int arr[], size_t size) {
    int aux[size];    
    mergesort(arr, aux, 0, size-1);
}