#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int binhPhuong(int x)
{
	return x * x;
}

int main()
{
	int a, b, h;
	double area;
	printf("Nhap a va b: ");
	scanf("%d %d", &a, &b);
	h = b - a;
	area = ((binhPhuong(a) + binhPhuong(b)) * h) / 2.0;
	printf("Tich phan cua ham f(x) = x^2 la: %.2f\n", area);
	return 0;
}