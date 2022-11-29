#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define COL 3
#define ROW 3

void InitArray(int Array[ROW][COL])
{
	int i = 0, j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			scanf("%d", &Array[i][j]);
		}
	}
}

void OutArray(int Array[ROW][COL])
{
	int i = 0, j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%d ", Array[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int Array[ROW][COL] = { 0 };
	InitArray(Array);
	OutArray(Array);
	return 0;
}