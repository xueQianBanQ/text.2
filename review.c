#define _CRT_SECURE_NO_WARNINGS 1



//                                         �ж��Ƿ�������
//#include <stdio.h>
//#include <math.h>
//int IsPrime(int input)//������������0  ����������1
//{
//	int i = 0;
//	if (input == 2)
//	{
//		return 1;
//	}
//	else if (input % 2 == 0 && input != 2)//������������Բ���Ҫ������ȥ�ῴ�ĸ�����
//	{
//		return 0;
//	}
//	for (i = 3; i <= sqrt(input); i += 2)
//	{
//		if (input % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int ret = IsPrime(input);
//	if (ret == 0)
//	{
//		printf("%s\n", "��������");
//	}
//	else
//	{
//		printf("%s\n", "������");
//	}
//	return 0;
//}






//                                    ˮ�ɻ���
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		int hundred = i / 100;
//		int decade = i % 100 / 10;
//		int unit = i % 10;
//		if (i == pow(hundred, 3) + pow(decade, 3) + pow(unit, 3))
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	return 0;
//}


//                                                �����ַ�
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char buf[1024] = { '0'};
//	//scanf("%s", buf);
//	gets(buf);
//	int len = strlen(buf);
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		if (buf[left] != buf[right])
//		{
//			printf("%s\n", "���ǻ���");
//			break;
//		}
//		left++;
//		right--;
//	}
//	if (left >= right)
//	{
//		printf("%s\n", "�ǻ���");
//	}
//	return 0;
//}



//                                           ������
//#include <stdio.h>
//int main()
//{
//	int n, reversedInteger = 0, originalInteger, remainder;
//	scanf("%d", &n);
//	originalInteger = n;
//	while (n != 0)
//	{
//		remainder = n % 10;
//		reversedInteger = reversedInteger * 10 + remainder;
//		n /= 10;
//	}
//	if (reversedInteger == originalInteger)
//	{
//		printf("%s\n", "�ǻ�����");
//	}
//	else
//	{
//		printf("%s\n", "���ǻ�����");
//	}
//}




////                               ��С��Լ��
//#include <stdio.h>
//int CommonDivisor(int a, int b)
//{
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	while (a % b != 0)
//	{
//		int temp = a % b;
//		a = b;
//		b = temp;
//	}
//	if (b == 1)
//	{
//		return 0;
//	}
//	return b;   
//}
//int main()
//{
//	int a, b;
//	int temp;
//	scanf("%d%d", &a, &b);
//	int ret = CommonDivisor(a, b);
//	if (ret == 0)
//	{
//		printf("%s\n", "����������");
//	}
//	else
//	{
//		printf("%d\n", ret);
//	}
//	return 0;
//}



////                               ��С������
//#include <stdio.h>
//int CommonDivisor(int a, int b)
//{
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	while (a % b != 0)
//	{
//		int temp = a % b;
//		a = b;
//		b = temp;
//	}
//	return b;
//}
//int main()
//{
//	int a, b;
//	int temp;
//	scanf("%d%d", &a, &b);
//	int ret = CommonDivisor(a, b);
//	int CommonMultiple = a * b / ret;
//	printf("%d\n", CommonMultiple); 
//	return 0;
//}




//                      ���ֲ���
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7,8 ,9 ,10 };
//	int len = sizeof(arr) / sizeof(int);
//	int input = 0;
//	printf("%s", "��������Ҫ���ҵ���:>");
//	scanf("%d", &input);
//	int right = len - 1, left = 0;
//	while (left <= right )
//	{
//		int mid = (left + right) / 2; // ���е�λ��
//		if (arr[mid] > input)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < input)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("%s%d\n", "�����ҵ��±�Ϊ:>", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("%s\n", "û������Ҫ�ҵ�����");
//	}
//	return 0;
//}




////                       �������
//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	int i = 1;
//	double Sn = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		Sn += (1.0 / i);
//	}
//	printf("%lf\n", Sn);
//	return 0;
//}



////                         쳲���������
//#include <stdio.h>
//int Fibonacci(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//	}
//}
//int main()
//{
//	int n;
//	printf("����Ҫ쳲��������еĵڼ���:>");
//	scanf("%d", &n);
//	int ret = Fibonacci(n);
//	printf("%d\n", ret);
//	return 0;
//}





//            malloc  calloc  realloc  
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* a;
//	//a = (int*)malloc(5 * sizeof(int));
//	a = (int*)calloc(5, sizeof(int));
//	int i = 0;
//	/*for (i = 0; i < 5; i++)
//	{
//		a[i] = i;
//	}*/
//	int* ptr = (int*)realloc(a, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		a = ptr;
//	}
//	else
//	{
//		printf("�洢����\n");
//		return;   
//	}
//	for (i = 5; i < 10; i++)
//	{
//		*(a + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	free(a);
//	a = NULL;
//	return 0;
//}


////                       �ļ�����
//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//int main()
//{
//	FILE* fp = fopen("t.txt", "w+");
//	if (fp == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fprintf(fp, "%s\n", "nan tong da xue");
//	char str[20];
//	rewind(fp);
//	fgets(str, 20, fp);
//	printf("%s\n", str);
//	fclose(fp);
//	fp = NULL;
//}