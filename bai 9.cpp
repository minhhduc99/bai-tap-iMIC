#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int);

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Tong: %d\n", sum(n));
	return 0;
}

int sum(int n)
{
	int sum = 0;
	for (int i = 0; i <= n; i++)
		sum += 2 * i + 1;
	return sum;
}