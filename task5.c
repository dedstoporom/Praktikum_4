#include <stdio.h>
#include "head.h"

void sortHeapArray(int *arr, int n)
{
	int arr[n];
	printf("%d \n", n);
	readArray(arr, n);
	writeArray(arr, n);
	sort(arr, n);
	writeArray(arr, n);

}