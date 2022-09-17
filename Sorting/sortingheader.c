#include <stdio.h>
#include "sortingheader.h"

void init_array(int arr[], size_t s) {
	for(int i = 0; i < s; i++)
		scanf("%d", &arr[i]);
}

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

void insertion_sort(int arr[], size_t size) {
  for(int i=1; i<size;i++) {
        for(int j=i;j>0;j--) {
            if(arr[j]<arr[j-1])
              swap(arr, j , j-1);
        }
    }
}

void selection_sort(int arr[], size_t size) {
  for(int i = 0; i < size; i++) {
    int low = i;
    for(int j = i + 1; j < size; j++){
      if (arr[low] > arr[j])
        low = j;
    }
    swap(arr, i, low);
  }        
}

void bubbleSortArray(int arr[], size_t s) {
	for(int i = 0; i < s-1; i++)	{
		for(int j = 0;j < s-1-i; j++)		{
			if(arr[j] > arr[j+1])
         swap(arr, j, j+1);
		}
	}
}


