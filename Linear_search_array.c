#include <stdio.h>      
#include <math.h> 
#define SIZE 5
void linearSearch(int arr[], int target) {
	int count = 0;
	
	for(int i = 0; i < SIZE; i++)
	{
		if(target == arr[i])
		{
			count++;
		}
	}
	if(count>0)
		printf("Element %d Found %d times", target, count);
	else
		printf("Element %d Not Found", target);
}
int main()
{
	int arr[SIZE], target;
	printf("Enter Array Elements\n");
	for(int i = 0; i < SIZE; i++)
		scanf("%d", &arr[i]);
	printf("Enter an Element to Check\n");  
	scanf("%d", &target);
	linearSearch(arr, target);
    return 0;
}