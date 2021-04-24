#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int row, col;
	int i, j;
	printf("Enter number of row and colume: ");
	scanf("%d %d", &row, &col);
	int **mat1 = (int**)malloc(row * sizeof(int*));
	int **mat2 = (int**)malloc(row * sizeof(int*));
	for (int i = 0; i < row; i++)
		mat1[i] = (int*)malloc(col * sizeof(int));
	for (int i = 0; i < row; i++)
		mat2[i] = (int*)malloc(col * sizeof(int));
	printf("Enter values of matrix 1:\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf("%d", &mat1[i][j]);
		}
	}
	printf("Enter values of matrix 2:\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf("%d", &mat2[i][j]);
		}
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", mat1[i][j] + mat2[i][j]);
		}
		printf("\n");
	}
	free(mat1);
	free(mat2);
	return 0;
}