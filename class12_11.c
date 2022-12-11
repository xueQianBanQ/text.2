#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//double Calculate(double x, double y)
//{
//	return 1 / ((1 / x + 1 / y) / 2);
//}
//int main()
//{
//	double x, y;
//	printf("Input two doubles:\n");
//	scanf("%lf%lf", &x, &y);
//	double ret = Calculate(x, y);
//	printf("1/((1/x+1/y)/2) = %0.3f\n", ret);
//	return 0;
//}

//#include <stdio.h>
//void Chline(char ch, int column, int row)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < column; j++)
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	char ch;
//	int row, column;
//	printf("input a char:\n");
//	scanf("%c", &ch);
//	printf("input column and row:\n");
//	scanf("%d %d", &column, &row);
//	Chline(ch, column, row);
//	return 0;
//}


//#include <stdio.h>
//int Magic(int m)
//{
//	int number = 0;
//	int remainder = m % 222;//余数
//	int multiple = m / 222;//倍数
//	for (number = 222 - remainder; number < 1000; number += 222)
//	{
//		multiple++;
//		int a = number / 100;//取百位
//		int b = number / 10 % 10;//取十位
//		int c = number % 10;//取个位
//		if (a + b + c == multiple)
//		{
//			return number;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int sum, number;
//	scanf("%d", &sum);
//	number = Magic(sum);
//	if (-1 == number)
//	{
//		printf("The sum you calculated is wrong!\n");
//	}
//	else
//	{
//		printf("The number is %d\n", number);
//	}
//	return 0;
//}

//#include <stdio.h>
//int NUMBER(int A, int B, int C, int n)//A < B < C
//{
//	int number = 3 * n + 1;
//	int counteractAB = (A * n) / (A * B);//A和B的共同次
//	int counteractAC = (A * n) / (A * C);
//	int counteractBC = (B * n) / (B * C);
//	int counteractABC = (A * n) / (A * B * C);
//	if (counteractABC > 0)
//	{
//		return number - counteractAB - counteractAC - counteractBC + counteractABC;
//	}
//	else
//	{
//		return number - counteractAB - counteractAC - counteractBC;
//	}
//}
//
//int main()
//{
//	int number = 0;//观众可以看见几次炮声
//	int A = 5, B = 6, C = 7;
//	int n = 21;
//	number = NUMBER(A, B, C, n - 1 );
//	printf("n=%d", number);
//	return 0;
//}



///////////////////////////////////////////////////////////////////

//
//#include <stdio.h>
//int Cocount(int n)
//{
//	float cocount = 0;
//	int multiple = 1;
//	int i = 0;
//	for (i = 0; i < n; i++)
//
//	{
//		if (i == 0)
//		{
//			cocount = n * multiple + 1;
//		}
//		else
//		{
//			cocount = cocount * n / (n  - 1) + 1;
//			if (cocount != (int)(cocount + 0.999999))
//			{
//				i = -1;
//				multiple++;
//			}
//		}
//	}
//	return cocount;
//}
//
//int main()
//{
//	int n;
//	printf("Input n(1<n<=5):\n");
//	scanf("%d", &n);
//	if (n <= 1 || n > 5)
//	{
//		printf("Error!\n");
//	}
//	else
//	{
//		int cocount = (int)Cocount(n);
//		printf("y=%d", cocount);
//	}
//	return 0;
//}

//
//
/////////////////////////////////////
//#include <stdio.h>
//
//unsigned int age(int n)
//{
//	if (n == 1)
//	{
//		return 10;
//	}
//	else
//	{
//		return age(n - 1) + 2;
//	}
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	unsigned int a = age(n);
//	printf("The person's age is %u\n", a);
//	return 0;
//}
//
//#include <stdio.h>
//void Max(int* a, int* b)
//{
//	if (*a > *b)
//	{
//		int temp = *a;
//		*a = *b;
//		*b = *a;
//	}
//}
//
//int Gcd(int a, int b)
//{
//	Max(&a, &b);
//	if (a != b)
//	{
//		return Gcd(a, b - a);
//	}
//	else
//	{
//		return a;
//	}
//}
//
//int main()
//{
//	int a, b;
//	printf("Input a,b:");
//	scanf("%d,%d", &a, &b);
//	if (a <= 0 || b <= 0)
//	{
//		printf("Input error!\n");
//	}
//	else
//	{
//		printf("%d\n", Gcd(a, b));
//	}
//	return 0;
//}

//
//#include <stdio.h>
//void Max(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int mid(int a, int b, int c)
//{
//	if (a > b)
//	{
//		Max(&a, &b);
//	}
//	if (b < c)
//	{
//		return b;
//	}
//	else
//	{
//		if (a < c) return c;
//		else return a;
//	}
//
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int ret = mid(a, b, c);
//	printf("The result is %d\n", ret);
//	return 0;
//}



#include <stdio.h>
int main()
{
	int n = 0;
	int X, Y, Z;
	printf("Input n(n<1000):\n");
	scanf("%d", &n);
	if (n % 2 != 0 || n >= 1000)
	{
		printf("Invalid\n");
	}
	else
	{
		for (X = 0; X < 10; X++)
		{
			for (Y = 0; Y < 10; Y++)
			{
				for (Z = 0; Z < 10; Z++)
				{
					if (X * 50 + Y * 55 + Z * 6 == n / 2)
					{
						goto over;
					}
				}
			}
		}
	over:
		if (X == 10)
		{
			printf("Invalid\n");
		}
		else
		{
			printf("X=%d,Y=%d,Z=%d\n", X, Y, Z);
		}
	}
	return 0;
}