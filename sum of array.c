#include <stdio.h>
#include <stdlib.h>
int sum(int*, int);

int main()
{
    int n;
    printf("Enter numbers of elements of array: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    printf("Enter value of elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", (arr + i));
    printf("Sum of elements of array: %d\n", sum(arr, n));
    free(arr);
    return 0;
}

int sum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += *(arr + i);
    return sum;
}
