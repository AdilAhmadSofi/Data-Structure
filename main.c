#include <stdio.h>   
#include "myheader.h"
#define SIZE 5

int main()
{
	int arr[SIZE];
	printf("Enter Array Elements\n");
	for(int i = 0; i < SIZE; i++)
		scanf("%d", &arr[i]);
    //mergesort(arr, SIZE);
    //insertion_sort(arr, SIZE);
    //selection_sort(arr, SIZE);
    //reverseArray(arr, SIZE);
    bubbleSortArray(arr, SIZE);
    printArray(arr, SIZE);
}