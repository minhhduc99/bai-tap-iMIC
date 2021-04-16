#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void max(int*, int);
void min(int*, int);
void sumAndAvrg(int*, int);

int main()
{
	int n, i;
	printf("Enter number of elements in arr (< 50): ");
	scanf("%d", &n);
	int *arr = (int*)malloc(n * sizeof(int));
	printf("Enter values of array: \n");
	for (i = 0; i < n; i++)
		scanf("%d", (arr + i));
	max(arr, n);
	min(arr, n);
	sumAndAvrg(arr, n);
	free(arr);
	return 0;
}

void max(int *arr, int n)
{
	int max = arr[0];
	int stt = 0;
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
		{
			stt = i;
			max = arr[i];
		}
	}
	printf("Max: %d - %d\n", max, stt + 1);
}

void min(int *arr, int n)
{
	int min = arr[0];
	int stt = 0;
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i])
		{
			stt = i;
			min = arr[i];
		}
	}
	printf("Min: %d - %d\n", min, stt + 1);
}

void sumAndAvrg(int *arr, int n)
{
	int sum = 0;
	float average = 0;
	for (int i = 0; i < n; i++)
		sum += *(arr + i);
	average = sum / (float)n;
	printf("Sum: %d, average: %.2f\n", sum, average);
}