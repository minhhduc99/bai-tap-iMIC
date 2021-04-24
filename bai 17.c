#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int row, col;
	printf("Number of row and colume: ");
	scanf("%d %d", &row, &col);
	int **mat = (int**)malloc(row * sizeof(int*));
	for (int i = 0; i < 3; i++)
		mat[i] = (int*)malloc(col * sizeof(int));
	printf("Enter values: \n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < col; j++)
		{
			scanf("%d", &mat[i][j]);
		}
	}
	printf("Displaying\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	free(mat);
	return 0;
}