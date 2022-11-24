#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//double f(double);
//double getx(double);
//double getroot(double);
//int main()
//
//{
//
//	double x1 = 10;
//	double x = getroot(x1);
//	printf("f(%f)=%f\n", x, f(x));
//	return 0;
//
//}
//double f(double x)
//
//{
//	return ((x - 5) * x + 16) * x - 80;
//}
//
//
//
//double getx(double x1)
//{
//	double k = (3 * x1 - 10) * x1 + 16;
//	return x1 - f(x1) / k;
//
//}
//
//double getroot(double x1)
//{
//	double y1 = f(x1);
//	double x;
//	while (1)
//	{
//		x = getx(x1);  // 求弦与x轴的交点
//		double y = f(x);
//		if (fabs(y) < 1e-6)  break;
//		else { x1 = x; }
//	}
//	return x;
//
//}

#include <stdio.h>

int Sum(int n)
{
	int sum = 0;
	if (n == 1)
	{
		return 1;
	}
	else if (n > 0)
	{
		sum = n +  Sum(n - 1);
		return sum;
	}

}
int main()
{
	int n = 0;
	printf("请输入你想要求和的数:>");
	scanf("%d", &n);
	int sum = Sum(n);
	printf("sum=%d", sum);
	return 0;
}