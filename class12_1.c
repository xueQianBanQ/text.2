#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 1, b = 2;
//	char c = 'a';
//	printf("a=%d,&a=%X\n", a, &a);
//	printf("b=%d,&b=%p\n", b, &b);
//	printf("c=%c,&c=%p\n", c, &c);
//	return 0;
//
//}

//int main()
//{
//	int a = 1, * p = &a;
//	*p = 2;
//	printf("%d\n", *p);
//	return 0;
//}

//
//int main()
//
//{
//
//	int a = 1, b = 2;
//
//	char c = 'a';
//
//	int* pa, * pb;	//定义指向整型变量的指针变量pa、pb
//
//	char* pc;	    //定义指向字符变量的指针变量pc
//
//
//
//	pa = &a;	    //初始化指针变量pa，指向整型变量a
//	pb = &b;	    //初始化指针变量pb，指向整型变量b
//	pc = &c;	    //初始化指针变量pc，指向字符变量c
//	printf("a=%d,  &a=%p,  pa=%p \n", a, &a, pa);
//	printf("b=%d,  &b=%p,  pb=%p \n", b, &b, pb);
//	printf("c=%c,  &c=%p,  pc=%p pc = %X\n", c, &c, pc,pc);
//	return 0;
//
//}
#include<stdio.h>
//void sort(int* pa, int* pb, int* pc);
//void exchange(int* p1, int* p2);
//int main()
//{
//	int a, b, c;	int* pa, * pb, * pc;
//	pa = &a;	                   //指针变量pa指向变量a
//	pb = &b; 	                   //指针变量pb指向变量b
//	pc = &c;	                   //指针变量pc指向变量c
//	printf("please input 3 numbers:");
//	scanf("%d%d%d", pa, pb, pc); 	   //输入三个变量
//	sort(pa, pb, pc);		           //调用函数sort，完成排序
//	printf("%d  %d  %d\n", a, b, c);
//}
//
//void sort(int* pa, int* pb, int* pc)//定义函数，用来完成三个指针变量指向的变量的排序
//
//{
//	if (*pa > *pb) exchange(pa, pb); 	//若*pa > *pb，交换*pa与*pb
//	if (*pa > *pc) exchange(pa, pc);
//	if (*pb > *pc) exchange(pb, pc);
//}
//void exchange(int* p1, int* p2)//定义函数，用来交换指针变量指向的变量的值
//{
//	int temp;
//	temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}

//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = a;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}

//int main()
//{
//	int a[10];
//	int* p = a;
//	int i = 0;
//	int positive = 0, negative = 0, zero = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", p + i);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//		if (*(p + i) > 0)
//		{
//			positive++;
//		}
//		else if (*(p + i) < 0)
//		{
//			negative++;
//		}
//		else zero++;
//
//	}
//
//	printf("\n");
//	printf("正数个数为%d\n", positive);
//	printf("负数个数为%d\n", negative);
//	printf("0的个数为%d\n", zero);
//
//	
//} 
#include <string.h>

int pali_judge(char* p, char* q)
{
	while (p < q)
	{
		if (*p == *q)
		{
			p++;
			q--;
		}
		else return 0;
	}
	return 1;
}

int main()
{
	char a[30];
	gets(a);
	int len = strlen(a);
	char* p = a;
	char* q = a + len - 1;
	int ret = pali_judge(p, q);
	if (ret == 0)
	{
		printf("不是回文数字\n");
	}
	else
	{
		printf("是回文数字\n");
	}
}