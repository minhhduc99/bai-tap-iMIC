#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int perfectNumber(int);

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	if (perfectNumber(n) == 1)
		printf("%d la so hoan hao\n", n);
	else if (perfectNumber(n) == 0)
		printf("%d khong la so hoan hao\n", n);
	return 0;
}

int perfectNumber(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			sum += i;
	}
	if (sum == n)
		return 1;
	else
		return 0;
}