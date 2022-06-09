#include <stdio.h>
#include "myheader.h"

void printArray(int arr[], size_t s) {
	printf("\nArray Elements are\n");
	for(int i = 0; i < s; i++)
		printf("%d\t", arr[i]);
}

void swap(int arr[], int i, int j) {
    int temp = arr[j];
    arr[j] = arr[i];
    arr[i] = temp;
}

void reverseArray(int arr[], size_t size) {
	for(int i = 0; i < size/2; i++) {
		swap(arr, i, size-i-1);			 
	}
}