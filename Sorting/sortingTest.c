#include <stdio.h>   
#include "sortingheader.h"
#define SIZE 5

int main()
{
	int arr[SIZE];
  printf("Enter Array Elements\n");
  init_array(arr, SIZE);
  printArray(arr, SIZE);
  insertion_sort(arr,SIZE);
  printArray(arr, SIZE);
  selection_sort(arr,SIZE);
  printArray(arr, SIZE);
  bubbleSortArray(arr,SIZE);
  printArray(arr, SIZE);
}