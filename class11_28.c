#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void print(n)
//{
//	if (n != 0)
//	{
//		print(n / 10);
//		printf("%d ", n % 10);
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}


//八进制转换
//#include <stdio.h>
//
//void Trans_10to8(int n)
//{
//	if (n != 0)
//	{
//		Trans_10to8(n / 8);
//		printf("%d", n % 8);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Trans_10to8(n);
//}


////16进制转换
//#include <stdio.h>
//
//void Trans_10to8(int n)
//{
//	if (n != 0)
//	{
//		Trans_10to8(n / 16);
//		if (n % 16 < 10)
//		{
//			printf("%d", n % 16);
//		}
//		else
//		{
//			printf("%c", n % 16 + 55);
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Trans_10to8(n);
//}
//
// 
// 
// 任意进制转换
//#include <stdio.h>
//
//void Trans_10to8(int n, int k)
//{
//	if (n != 0)
//	{
//		Trans_10to8(n / k , k);
//		if (n % k < 10)
//		{
//			printf("%d", n % k);
//		}
//		else
//		{
//			printf("%c", n % k - 10 + 'A');
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d,%d", &n, &k);
//	Trans_10to8(n, k);
//} 


//#include <stdio.h>
//int Binsearch(int arr[], int low, int hight, int key)
//{
//	if (low > hight)return -1;
//	else
//	{
//		int mid = (low + hight) / 2;
//		if (arr[mid] > key)
//		{
//			return Binsearch(arr, low, mid - 1, key);
//		}
//		else if (arr[mid] < key)
//		{
//			return Binsearch(arr, mid + 1, hight, key);
//		}
//		else
//			return mid;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3,4,5,6,7,8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	printf("Input search number:>");
//	int key = 0;
//	scanf("%d", &key);
// 	int ret = Binsearch(arr, 0, sz - 1, key);
//	if (key != -1)
//	{
//		printf("Find! %d:%d\n", key, ret + 1);
//	}
//	else
//	{
//		printf("%d is not found!\n", key);
//	}
//
//	return 0;
//}

//
//#include <stdio.h>
//void print(int* a)
//{
//	printf("%d", *(a + 1));
//}
//int main()
//{
//	int arr[] = { 1, 2, 3,4,5,6,7,8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void input(int a[], int n);
//void output(int a[], int n);
//void sort(int a[], int n);
//
//int main()
//{
//	int score[10];
//	printf("输入10个学生的成绩:\n");
//	input(score, 10);              //输入10个成绩数据
//	printf("排序前:\n");
//	output(score, 10);             //输出10个成绩数据
//	sort(score, 10);               //对10个成绩数据进行排序
//	printf("排序后:\n");
//	output(score, 10);             //输出10个成绩数据
//	return 0;
//}
//
//void input(int a[], int n)
//{
//	srand((unsigned int)time(NULL));
//	int i;     
//	for (i = 0; i < n; i++)            //从键盘输入数据给数组赋值
//	{
//		a[i] = rand()%100;
//	}
//
//}
//
//
//void output(int a[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)             // score中数据输出
//		printf("%d   ", a[i]);
//	printf("\n");
//
//}
//
//
//
//void sort(int a[], int n)
//{
//	int i, j, temp;
//	for (i = 0; i < n - 1; i++)              //冒泡排序
//		for (j = 0; j < n - 1 - i; j++)
//			if (a[j] > a[j + 1])
//			{
//				temp = a[j];             //交换a [j]与a [j+1]
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//}

#include <stdio.h>
#define ROW 3
#define COL 3
void InitArray(int Array[][COL]);
int main()
{
    int Array[ROW][COL];

    InitArray(Array);   //调用InitArray函数
    output(Array);
    return 0;

}
void output(int Array[ROW][COL])
{
    int i, j;
    for (i = 0; i < ROW; i++)         //打印数组元素
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d ", Array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void InitArray(int Array[][COL])
{
    int i, j, k = 0;
    for (i = 0; i < ROW; i++)
        for (j = 0; j < COL; j++)
        {
            printf("请输入第%d个数:", ++k);
            scanf("%d", &Array[i][j]);
        }
}