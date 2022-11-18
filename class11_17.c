#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	long int price;
//	int bonus;
//	scanf("%ld", &price);
//	if (price <= 1e5)
//	{
//		bonus = price * 0.1;
//	}
//	else if (price <= 2e5)
//	{
//		bonus = 1e4 + (price - 1e5) * 0.075;
//	}
//	else if (price <= 4e5)
//	{
//		bonus = 1e4 + 7500 + (price - 2e5) * 0.05;
//	}
//	else if (price <= 6e5)
//	{
//		bonus = 1e4 + 7500 + 1e4 + (price - 4e5) * 0.03;
//	}
//	else if (price <= 1e6)
//	{
//		bonus = 1e4 + 7500 + 1e4 + 6000 + (price - 6e5) * 0.015;
//	}
//	else
//	{
//		bonus = 1e4 + 7500 + 1e4 + 6000 + 6000 + (price - 1e6) * 0.01;
//	}
//	printf("bonus=%ld\n", bonus);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i, j, sum = 0, n = 0;
//    scanf("%d", &n);
//    for (i = 1, j = n; i <= j; i++, j--)
//    {
//        if (n % 2 == 0 && i < j)
//        {
//            sum = sum + i + j;
//        }
//        else if (n % 2 == 1 && i < j)
//        {
//            sum = sum + i + j;
//            if (i + 2 == j)
//            {
//                sum += (n + 1) / 2;
//            }
//        }
//    }
//    printf("sum = %d", sum);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	int m = 1;
//	while (m)
//	{
//		printf("Input m:\n");
//		scanf("%d", &m);
//		if (m == 0)
//		{
//			break;
//		}
//		sum += m;
//		printf("sum = %d\n", sum);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int x, y, z;
//    for (x = 0; x <= 20; x++)
//    {
//        for (y = 0; y <= 33; y++)
//        {
//            z = 100 - x - y;
//            if (5 * x + 3 * y + z / 3.0 == 100.0)
//            {
//                printf("x=%d, y=%d, z=%d\n", x, y, z);
//            }
//        }
//    }
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int n, i, count = 2;
//    printf("Input n:\n");
//    scanf("%d", &n);
//    for (i = 2; i <= sqrt(n); i++)
//    {
//        if (n % i == 0)
//        {
//            printf("No!\n");
//            break;
//        }
//        count++;
//    }
//    if (count == i && i != 2 || n == 3)
//    {
//        printf("Yes!\n");
//    }
//    else if (n <= 2)
//    {
//        printf("No!\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int x1, x2, a;
//    do {
//        printf("Input x1, x2:\n");
//        a = scanf("%d,%d", &x1, &x2);
//		while (getchar() != '\n');
//    } while (x1 * x2 >= 0 || a != 2);
//    printf("x1=%d,x2=%d\n", x1, x2);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int x1, x2, a;
//	do {
//		printf("Input x1, x2:\n");
//		a = scanf("%d,%d", &x1, &x2);
//		if (x1 * x2 < 0 && a == 2)break;
//		while (getchar() != '\n');
//	} while (a < 2 || x1 * x2 >= 0);
//	printf("x1=%d,x2=%d\n", x1, x2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int x = 1, days;
//	int a = 0;
//	do
//	{
//		printf("Input days:\n");
//		a = scanf("%d", &days);
//		getchar();
//		if (a == 1 && days > 0)break;
//	} while (a != 1 || days <= 0);
//	int i = 0;
//	for (i = 1; i < days; i++)//循环days - 1次
//	{
//		x = (x + 1) * 2;
//	}
//	printf("x=%d\n", x);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	char password;
//	printf("Input your password:\n");
//	for (i = 1; i <= 6; i++)
//	{
//		scanf("%c", &password);
//		while (getchar() != '\n');
//		if (password >= '0' && password <= '9')
//		{
//			printf("%c, you have enter %d-bits number\n", password, i);
//		}
//		else
//		{
//			printf("error\n");
//			i--;
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	char password;
//	printf("Input your password:\n");
//	for (i = 1; i <= 6; i++)
//	{
//		scanf("%c", &password);
//		getchar();
//		if (password >= '0' && password <= '9')
//		{
//			printf("%c, you have enter %d-bits number\n", password, i);
//		}
//		else
//		{
//			printf("error\n");
//			i--;
//		}
//		getchar();
//	}
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 0;
	int i = 0;
	int count = 0;//查看位数
	printf("Please enter the number:\n");
	scanf("%d", &a);
	int temp = a;
	a = abs(a);
	while (a > 0)
	{
		a = a / 10;
		i++;
		count++;
	}
	printf("%d: %d bits\n", temp, count);
	return 0;
}