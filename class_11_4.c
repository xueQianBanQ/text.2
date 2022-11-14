#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int i, j;
//	int A[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%-3d ", A[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	float B[3][4];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%f", &B[i][j]);
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%-4.1f ", B[i][j]);
//		}
//		printf("\n");
//	}
//
//
//
//	return 0;
//}


////矩阵的转置
//#include <stdio.h>
//int main()
//{
//	int i, j;
//	int A[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
//	int B[4][3];
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			B[i][j] = A[j][i];
//		}
//	}
//	printf("A的矩阵:\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%-3d ", A[i][j]);
//		}
//		printf("\n");
//	}
//	printf("B的矩阵:\n");
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%-3d ", B[i][j]);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}


//#include <stdio.h>
//#define N 10
//int main()
//{
//	int a[N][N] = {0};
//	int i, j;
//	for (i = 0; i < N; i++)
//	{
//		a[i][0] = 1;
//
//	}
//	for (i = 1; i < N; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%-4d", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str[20];
//	int i, len = 10;
//	for (i = 0; i < len; i++)
//	{
//		scanf("%c", &str[i]);
//	}
//	str[i] = '\0';
//	for (i = 0; i < len; i++)
//	{
//		printf("%c", str[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str[20];
//	scanf("%s", &str);
//	printf("%s\n", str);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str[20];
//	gets(str);
//	puts(str);
//	return 0;
//}

#include <stdio.h>
#include <string.h>
int main()
{
	char a[20];
	printf("请输入一串字符:");
	gets(a);
	puts(a);
	int left = 0;
	int right = strlen(a) - 1;
	int count = 0;
	while (left < right)
	{
		if (a[left] == a[right])
		{
			left++;
			right--;
			count++;
		}
		else
		{
			printf("这串字符不是回文\n");
			count--;
			break;
		}
	}
	if (count == left)
	{
		printf("这串字符是回文\n");
	}
	return 0;
}
