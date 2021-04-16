#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int nguyenTo(int);

int main()
{
	int n, i = 0;
	printf("Enter number of elements in arr: ");
	scanf("%d", &n);
	int *arr = (int*)malloc(n * sizeof(int));
	printf("Enter values of arr\n");
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	printf("So nguyen to trong mang va vi tri cua no\n");
	for (i = 0; i < n; i++)
	{
		if (nguyenTo(*(arr + i)) == 1)
			printf("%d - %d\n", arr[i], i + 1);
	}
	free(arr);
	return 0;
}

int nguyenTo(int n)
{
	if (n == 0 || n == 1)
		return 0;
	else if (n >= 2)
	{
		int count = 0;
		for (int i = 1; i <= sqrt(n); i++)
		{
			if (n % i == 0)
				count++;
		}
		if (count > 1)
			return 0;
		else if (count == 1)
			return 1;
	}
}