#include <iostream>
#include "myheader.h"
using namespace std;

void printArray(int arr[], int s) {
	cout << "\nArray Elements are\n";
	for(int i = 0; i < s; i++)
		cout << "\t" << arr[i];
}