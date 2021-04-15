#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int);

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Tong cua cac so le tu 1 -> n: %d\n", sum(n));
	return 0;
}

int sum(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
			sum += i;
	}
	return sum;
}