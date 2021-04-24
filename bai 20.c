#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int row, col;
	int i, j, max = 0;
	printf("Enter number of row and colume (row = col): ");
	scanf("%d %d", &row, &col);
	int **mat = (int**)malloc(row * sizeof(int*));
	for (int i = 0; i < row; i++)
		mat[i] = (int*)malloc(col * sizeof(int));
	printf("Enter values of matrix:\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf("%d", &mat[i][j]);
		}
	}
	max = mat[0][0];
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i == j)
			{
				if (max < mat[i][j])
					max = mat[i][j];
			}
		}
	}
	printf("Max duong cheo chinh: %d\n", max);
	free(mat);
	return 0;
}