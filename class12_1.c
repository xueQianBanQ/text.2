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
//	int* pa, * pb;	//����ָ�����ͱ�����ָ�����pa��pb
//
//	char* pc;	    //����ָ���ַ�������ָ�����pc
//
//
//
//	pa = &a;	    //��ʼ��ָ�����pa��ָ�����ͱ���a
//	pb = &b;	    //��ʼ��ָ�����pb��ָ�����ͱ���b
//	pc = &c;	    //��ʼ��ָ�����pc��ָ���ַ�����c
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
//	pa = &a;	                   //ָ�����paָ�����a
//	pb = &b; 	                   //ָ�����pbָ�����b
//	pc = &c;	                   //ָ�����pcָ�����c
//	printf("please input 3 numbers:");
//	scanf("%d%d%d", pa, pb, pc); 	   //������������
//	sort(pa, pb, pc);		           //���ú���sort���������
//	printf("%d  %d  %d\n", a, b, c);
//}
//
//void sort(int* pa, int* pb, int* pc)//���庯���������������ָ�����ָ��ı���������
//
//{
//	if (*pa > *pb) exchange(pa, pb); 	//��*pa > *pb������*pa��*pb
//	if (*pa > *pc) exchange(pa, pc);
//	if (*pb > *pc) exchange(pb, pc);
//}
//void exchange(int* p1, int* p2)//���庯������������ָ�����ָ��ı�����ֵ
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
//	printf("��������Ϊ%d\n", positive);
//	printf("��������Ϊ%d\n", negative);
//	printf("0�ĸ���Ϊ%d\n", zero);
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
		printf("���ǻ�������\n");
	}
	else
	{
		printf("�ǻ�������\n");
	}
}