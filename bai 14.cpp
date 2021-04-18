#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void display(int[], int&);
void oddNumber(int*, int&);
int *decrease(int[], int&);
void add(int*, int&);

int main()
{
	int n, i;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	int *arr = (int*)malloc(n * sizeof(int));
	printf("Enter values of arr\n");
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	printf("Arr: ");
	display(arr, n);
	printf("\nOdd number and it's location\n");
	oddNumber(arr, n);
	arr = decrease(arr, n);
	printf("\nDecreasing arr: ");
	display(arr, n);
	add(arr, n);
	printf("New arr: ");
	display(arr, n);
	printf("\n");
	free(arr);
	return 0;
}

void display(int arr[], int& n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", *(arr + i));
	printf("\n");
}

void oddNumber(int *arr, int& n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d - %d\n", arr[i], i + 1);
	}
}

int *decrease(int arr[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return arr;
}

void add(int *arr, int& n)
{
	int x, i;
	printf("How many elements do you want to add: ");
	scanf("%d", &x);
	arr = (int*)realloc(arr, (n + x) * sizeof(int));
	printf("Enter values of new elements\n");
	for (i = n; i < n + x; i++)
		scanf("%d", &arr[i]);
	n = n + x;
	arr = decrease(arr, n);
}