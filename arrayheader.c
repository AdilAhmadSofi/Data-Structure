#include <stdio.h>
#include "arrayheader.h"

void init_array(int arr[], size_t s) {
	for(int i = 0; i < s; i++)
		scanf("%d", &arr[i]);
}

int arraySum(int arr[], size_t s) {
	int sum = 0;
	for(int i = 0; i < s; i++)
		sum += arr[i];
	return sum;
} 


int smallArrayElement(int arr[], size_t s) {
	int small = arr[0];
	for(int i = 1; i < s; i++)
	{
		if(arr[i] <= small)
		small = arr[i];
	}
	return small;
}

int findIndex(int arr[], size_t s, int target) {
	for(int i = 0; i < s; i++) {
		if(arr[i] == target)
			return i;
	}
	return -1;
}

void init_string(char str[]) {
  gets(str);
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

void reverseArray(int arr[], size_t size) {
	for(int i = 0; i < size/2; i++) {
		swap(arr, i, size-i-1);			 
	}
}