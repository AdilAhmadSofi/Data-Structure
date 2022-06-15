#include <stdio.h>   
#include "myheader.h"

void insertion_sort(int arr[], size_t size) {
  for(int i=1; i<size;i++) {
        for(int j=i;j>0;j--) {
            if(arr[j]<arr[j-1]) {
                int temp=arr[j];
                arr[j]= arr[j-1];
                arr[j-1]=temp;
            }            
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
	for(int i = 0; i < s-1; i++)
	{
		for(int j = 0;j < s-1-i; j++)
		{
			if(arr[j] > arr[j+1])
         swap(arr, j, j+1);
		}
	}
}


