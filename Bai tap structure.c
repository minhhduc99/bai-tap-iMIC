#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct student {
	char name[30];
	float math;
	float literature;
	float average;
};

typedef struct student ST;

void enterDetail(ST[], int);
ST hocSinhGioi(ST[], int);

int main()
{
	int number;
	ST result;
	printf("Enter number of students in class A2: ");
	scanf("%d", &number);
	ST *lopA2 = (ST*)malloc(number * sizeof(ST));
	enterDetail(lopA2, number);
	result = hocSinhGioi(lopA2, number);
	printf("Student has the largest average point is: %s\n", result.name);
	free(lopA2);
	return 0;
}

void enterDetail(ST lop[], int num)
{
	printf("Information of students of class A2\n");
	for (int i = 0; i < num; i++)
	{
		getchar();
		printf("Name student %d: ", i + 1);
		scanf("%[^\n]", lop[i].name);
		printf("-Math point: ");
		scanf("%f", &lop[i].math);
		printf("-Literature point: ");
		scanf("%f", &lop[i].literature);
	}
}

ST hocSinhGioi(ST lop[], int num)
{
	for (int i = 0; i < num; i++)
		lop[i].average = (lop[i].math + lop[i].literature) / 2;
	for (int i = 0; i < num; i++)
	{
		for (int j = i; j < num; j++)
		{
			if (lop[i].average < lop[j].average)
			{
				ST temp = lop[i];
				lop[i] = lop[j];
				lop[j] = temp;
			}
		}
	}
	return lop[0];
}