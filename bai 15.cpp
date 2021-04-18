#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void change(float*, int, int);
void display(float[], int&);
void positiveNumber(float*, int&);

int main()
{
	int n;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	float *arr = (float*)malloc(n * sizeof(float));
	printf("Enter values of arr\n");
	for (int i = 0; i < n; i++)
		scanf("%f", (arr + i));
	printf("Arr: ");
	display(arr, n);
	positiveNumber(arr, n);
	printf("Array of positive numbers: \n");
	display(arr, n);
	free(arr);
	return 0;
}

void change(float *arr, int a, int b)
{
	for (int i = a; i < b; i++)
	{
		float temp = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = temp;
	}
}

void display(float arr[], int& n)
{
	for (int i = 0; i < n; i++)
		printf("%.2f ", arr[i]);
	printf("\n");
}

void positiveNumber(float *arr, int& n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0)
		{
			change(arr, i, n - 1);
			arr = (float*)realloc(arr, (n - 1) * sizeof(float));
			n = n - 1;
			i = i - 1;
		}
	}
}