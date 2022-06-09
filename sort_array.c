#include <stdio.h>   
#include "myheader.h"

void mergesort(int arr[], size_t size) {

}

void insertion_sort(int arr[], size_t size) {
  for(int i = 0; i < size; i++){
    int key = arr[i+1];
    int j = i;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
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
	for(int i = 0; i < s-1; i++)
	{
		for(int j = 0;j<s-1-i;j++)
		{
			if(arr[j] > arr[j+1])
                swap(arr, j, j+1);
		}
	}
}


