#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int checkOddEven(int);

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	if (checkOddEven(n) == 1)
		printf("%d la so chan\n", n);
	else if (checkOddEven(n) == 0)
		printf("%d la so le\n", n);
	return 0;
}

int checkOddEven(int n)
{
	if (n % 2 == 0)
		return 1;
	else
		return 0;
}