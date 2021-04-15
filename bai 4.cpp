#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void uocChungBoiChung(int, int);
int max(int[], int);

int main()
{
	int a, b;
	printf("Nhap a, b: ");
	scanf("%d %d", &a, &b);
	uocChungBoiChung(a, b);
	return 0;
}

void uocChungBoiChung(int a, int b)
{
	if (a == b)
		printf("UCLN = BCNN = %d\n", a);
	else if (a > b)
	{
		int arr[100];
		int count = 0;
		int j = 0;
		for (int i = 1; i <= b; i++)
		{
			if (b % i == 0 && a % i == 0)
				arr[count++] = i;
		}
		for (j = a; j <= (a * b); j++)
		{
			if (j % a == 0 && j % b == 0)
				break;
		}
		printf("UCLN va BCNN la: %d, %d\n", max(arr, count), j);
	}
	else if (a < b)
	{
		int arr[100];
		int count = 0;
		int j = 0;
		for (int i = 1; i <= a; i++)
		{
			if (a % i == 0 && b % i == 0)
				arr[count++] = i;
		}
		for (j = b; j <= (a * b); j++)
		{
			if (j % a == 0 && j % b == 0)
				break;
		}
		printf("UCLN va BCNN la: %d, %d\n", max(arr, count), j);
	}
}

int max(int arr[], int count)
{
	int max = arr[0];
	for (int i = 1; i < count; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}