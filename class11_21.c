#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void swap(int* a, int* b)
//{
//	int c = 0;
//	c = *a;
//	*a = *b;
//	*b = c;
//}
////void Swap(int a, int b)
////{
////	int c = 0;
////	c = a;
////	a = b;
////	b = c;
////}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("a=%d, b=%d\n", a, b);
//	swap(&a, &b);
//	//Swap(a, b);
//	printf("a=%d, b=%d\n", a, b);
//	return 0;
//}

//int try(int a)
//{
//	float b = 1.2345;
//	return b;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	printf("%d\n", try(a));
//	return 0;
//}
//int min(int* a, int* b)
//{
//	int c;
//	if (*a > *b)
//	{
//		c = *b;
//		*b = *a;
//		*a = c;
//	}
//}
//
//int GCD(int a, int b)
//{
//	int r;
//	min(&a, &b);
//	while (a >= 0)
//	{
//		if (b % a == 0)
//		{
//			return a;
//		}
//		else
//		{
//			r = b % a;
//			b = a;
//			a = r;
//		}
//
//	}
//}
//int main()
//{
//	int a = 72;
//	int b = 120;
//	int c = GCD(b,a);
//	printf("%d", c);
//	return 0;
//}


//#include <time.h>
//#include <stdlib.h>
//#define N 10
//int main()
//{
//	int r2;
//	srand((unsigned int)time(NULL));
//	int rand_number[N] = { 0 };
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		r2 = rand() % 100;
//		rand_number[i] = r2;
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("%-2d ", rand_number[i]);
//	}
//	return 0;
//}

#include <math.h>
int  Prime(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 0;
	int a = 0;
	for (i = 101; i < 200; i += 2)
	{
		a = Prime(i);
		if (a)
		{
			printf("%d ", i);
		}
	}
	return 0;
}