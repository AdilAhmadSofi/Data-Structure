#include <stdio.h>   
#include "arrayheader.h"
#define SIZE 5

int main()
{
	int arr[SIZE];
    printf("Enter Array Elements\n");
    init_array(arr, SIZE);
    printArray(arr, SIZE); 
    printf("Sum of Array Elements is : %d \n", arraySum(arr, SIZE));
    printf("Smallest Array Element is : %d \n", smallArrayElement(arr, SIZE));
    int target = 5;
    printf("Index if %d is : %d \n",target, findIndex(arr, SIZE, target));
    return 0;
}