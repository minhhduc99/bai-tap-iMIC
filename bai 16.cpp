#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void display(int[], int&);
float average(int*, int&);
void append(int[], int&);
void change(int*, int, int);

int main()
{
	int n;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	int *arr = (int*)malloc(n * sizeof(int));
	printf("Enter values of arr: \n");
	for (int i = 0; i < n; i++)
		scanf("%d", (arr + i));
	printf("Arr: ");
	display(arr, n);
	printf("Average: %.2f\n", average(arr, n));
	append(arr, n);
	printf("New arr: ");
	display(arr, n);
	free(arr);
	return 0;
}

void display(int arr[], int& n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", *(arr + i));
	printf("\n");
}

float average(int *arr, int& n)
{
	int sum = 0, count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 3 == 0)
		{
			count++;
			sum += arr[i];
		}
	}
	if (count == 0)
		return 0;
	return sum / (float)count;
}

void append(int arr[], int& n)
{
	int k, x;
	printf("Enter value and location: ");
	scanf("%d %d", &k, &x);
	for (int i = 0; i < n; i++)
	{
		if ((x - 1) == i)
		{
			arr = (int*)realloc(arr, (n + 1) * sizeof(int));
			n = n + 1;
			change(arr, i, n);
			arr[x - 1] = k;
		}
	}
}

void change(int *arr, int a, int b)
{
	for (int i = b - 1; i > a; i--)
		arr[i] = arr[i - 1];
}