#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	char str1[] = "abc";
//	char str2[] = "abc";
//	char* p1 = "abc";
//	char* p2 = "abc";
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char c;
//	int a = 0;
//	while ((c = getchar()) != EOF) 
//	{
//		putchar(c);
//	}
//	printf("sad");
//	scanf("%d", &a);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str1[30] = "abfsdg";
//	char str2[30] = "abcfs";
//	char str3[30] = "edsf";
//	char str[30];
//	int i = 0;
//	for (i = 0; str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0'; i++)
//	{
//		;
//	}
//	printf("%d\n", str1[i] - str2[i]);
//	printf("%d\n", strcmp(str1, str2));
//	return 0;
//}

////从小到大输出单词
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str1[30] = "abfsdg";
//	char str2[30] = "abcfs";
//	char str3[30] = "edsf";
//	char str[30];
//	if (strcmp(str1, str2) > 0)
//	{
//		strcpy(str, str1);
//		strcpy(str1, str2);
//		strcpy(str2, str);
//	}
//	if (strcmp(str2, str3) > 0)
//	{
//		strcpy(str, str2);
//		strcpy(str2, str3);
//		strcpy(str3, str);
//	}
//	if (strcmp(str1, str2) > 0)
//	{
//		strcpy(str, str1);
//		strcpy(str1, str2);
//		strcpy(str2, str);
//	}
//	printf("%s %s %s\n", str1, str2, str3);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[6] = "abcd";         //报错
//	char b[] = "abc";
//	printf("%s\n", strcpy(b, a));
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char words[6][20] = { "good","better","best","bad","worse","worst" };
//	char temp[20];
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 6; i++)
//	{
//		printf("%s ", words[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5 - i; j++)
//		{
//			if (strcmp(words[j], words[j + 1]) > 0)
//			{
//				strcpy(temp, words[j]);
//				strcpy(words[j], words[j + 1]);
//				strcpy(words[j + 1], temp);
//			}
//		}
//	}
//	for (i = 0; i < 6; i++)
//	{
//		printf("%s ", words[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char s[50];
//	int i = gets(s);
//	printf("%p\n", i);
//	return 0;
//}

//#include <stdio.h>
//void swap(int* a, int* b)
//{
//	int t;
//	t = *a;
//	*a = *b;
//	*b = t;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("a = %d b = %d\n", a, b);
//	swap(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

////家庭作业
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a = 0;
//	char b[50] = {'a'};//存放每个数字
//	int i = 0;
//	int count = 0;//查看位数
//	int c0 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0;
//	printf("Please enter the number:\n");
//	scanf("%d", &a);
//	int temp = a;
//	a = abs(a);
//	while (a > 0)
//	{
//		b[i] = a % 10;
//		a = a / 10;
//		i++;
//		count++;
//	}
//	printf("%d: %d bits\n", temp, count);
//	i--;//使i = 4；
//	while (i + 1)
//	{
//		switch (b[i])
//		{
//		case 0:c0++;break;
//		case 1:c1++;break;
//		case 2:c2++;break;
//		case 3:c3++;break;
//		case 4:c4++;break;
//		case 5:c5++;break;
//		case 6:c6++;break;
//		case 7:c7++;break;
//		case 8:c8++;break;
//		case 9:c9++;break;
//		}
//		i--;
//	}
//	int c[10] = { c0, c1, c2, c3, c4, c5, c6, c7, c8, c9 };
//	for (i = 0; i < 10; i++)
//	{
//		if (c[i])
//		{
//			switch (i)
//			{
//			case 0:printf("0: %d\n", c0); break;
//			case 1:printf("1: %d\n", c1); break;
//			case 2:printf("2: %d\n", c2); break;
//			case 3:printf("3: %d\n", c3); break;
//			case 4:printf("4: %d\n", c4); break;
//			case 5:printf("5: %d\n", c5); break;
//			case 6:printf("6: %d\n", c6); break;
//			case 7:printf("7: %d\n", c7); break;
//			case 8:printf("8: %d\n", c8); break;
//			case 9:printf("9: %d\n", c9); break;
//			}
//		}
//	}
//	
//	return 0;
//}

#include <stdio.h>
int main()
{
	double price;
	int bonus;
	scanf("%ld")
	return 0;
}