#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int i, j;

void enterAndDisplay(int**, int, int);
void oddRow(int**, int, int);
int maxFirstCol(int**, int, int);

int main()
{
	int row, col;
	printf("Enter number of row and colume: ");
	scanf("%d %d", &row, &col);
	int **mat = (int**)malloc(row * sizeof(int*));
	for (int i = 0; i < row; i++)
		mat[i] = (int*)malloc(col * sizeof(int));
	enterAndDisplay(mat, row, col);
	oddRow(mat, row, col);
	printf("Max of first colume: %d\n", maxFirstCol(mat, row, col));
	free(mat);
	return 0;
}

void enterAndDisplay(int **mat, int row, int col)
{
	printf("Enter values:\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf("%d", &mat[i][j]);
		}
	}
	printf("Displaying\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}

void oddRow(int **mat, int row, int col)
{
	for (i = 0; i < row; i++)
	{
		if ((i + 1) % 2 == 0)
		{
			int sum = 0;
			for (j = 0; j < col; j++)
			{
				sum += mat[i][j];
				printf("%d ", mat[i][j]);
			}
			printf("- SUM: %d\n", sum);
		}
	}
}

int maxFirstCol(int **mat, int row, int col)
{
	int max = mat[0][0];
	for (i = 1; i < row; i++)
	{
		if (max < mat[i][0])
			max = mat[i][0];
	}
	return max;
}