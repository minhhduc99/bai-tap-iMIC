#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	printf("Enter number of elements in array: ");
	scanf("%d", &n);
	int *arr = (int*)malloc(n * sizeof(int));
	printf("Enter value: \n");
	for (int i = 0; i < n; i++)
		scanf("%d", (arr + i));
	for (int i = 0; i < n; i++)
		printf("%d ", *(arr + i));
	printf("\n");
	free(arr);
	return 0;
}