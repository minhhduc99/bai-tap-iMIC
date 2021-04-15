#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int chinhPhuong(int);

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	if (chinhPhuong(n) == 1)
		printf("%d la so chinh phuong\n", n);
	else if (chinhPhuong(n) == 0)
		printf("%d khong la so chinh phuong\n", n);
	return 0;
}

int chinhPhuong(int n)
{
	for (int i = 1; i < n; i++)
	{
		if (i * i == n)
			return 1;
	}
	return 0;
}