#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int nguyenTo(int);

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	if (nguyenTo(n) == 1)
		printf("%d la so nguyen to\n", n);
	else if (nguyenTo(n) == 0)
		printf("%d khong la so nguyen to\n", n);
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