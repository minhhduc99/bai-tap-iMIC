#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int, int, int);

int main()
{
	int a, b, c;
	printf("Nhap a, b, c: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("Max giua %d, %d, %d la: %d\n", a, b, c, max(a, b, c));
	return 0;
}

int max(int a, int b, int c)
{
	if (a > b && a > c)
		return a;
	else if (b > a && b > c)
		return b;
	else if (c > a && c > b)
		return c;
}