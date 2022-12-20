#define _CRT_SECURE_NO_WARNINGS 1
#include "student.h"

void menu(void)
{
	printf("**********************\n");
	printf("**1.Show    2.Search**\n");
	printf("***3.Add     4.Sort***\n");
	printf("*****  0.exit  *******\n");
	printf("**********************\n");
}

void menuSearch(void)
{
	printf("**********************\n");
	printf("*****1.按姓名查询*****\n");
	printf("*****2.按学号查询*****\n");
	printf("**********************\n");
}

int main()
{
	int num = 0;//记录学生人数
	FILE* pfStu = fopen("student.txt", "r+");//打开文件student.txt
	if (pfStu == NULL)
	{
		printf("%s\n", strerror(errno));//判断是否打开成功
		exit(1);
	}
	Student stu[20] = { 0 };//存储学生信息
	int i = 0;
	for (i = 0; i < 10; i++)//存入信息
	{
		fscanf(pfStu, "%d%s%f%f%f",&stu[i].xh, stu[i].name, &stu[i].cj1, &stu[i].cj2, &stu[i].ave);
		num++;
	}
	fclose(pfStu);
	pfStu = NULL;
	for (i = 0; i < 10; i++)//求平均值
	{
		Average(&stu, i);
	}
	int input = 0;
	do
	{
		menu();//设计菜单
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case SHOW:
			ShowStudent(&stu, num);
			break;
		case SEARCH:
			menuSearch();//设计查询的菜单
			int input2 = 0;
			printf("请输入;>");
			scanf("%d", &input2);
			if (input2 == 1)
			{
				SearchName(&stu,num);
			}
			else if (input2 == 2)
			{
				SearchXh(&stu, num);
			}
			else
			{
				printf("%s\n", "输入错误");
			}
			break;
		case ADD:
			AddStudent(&stu, &num);
			break;
		case SORT:
			SortStudent(&stu, num);
			break;
		case EXIT:
			printf("%s\n", "退出");
			break;
		default:
			printf("%s\n", "输入错误");
			break;
		}
	} while (input);
	FILE* pfSort = fopen("sort.txt", "w");
	if (pfSort == NULL)//判断是否打开成功
	{
		printf("%s\n", strerror(errno));
		exit(1);
	}
	for (i = 0; i < num; i++)//存入信息到sort.txt
	{
		fprintf(pfSort, "%-3d%-3s%.1f %.1f %.2f\n", stu[i].xh, stu[i].name, stu[i].cj1, stu[i].cj2, stu[i].ave);
	}
	fclose(pfSort);
	pfSort = NULL;
	return 0;
}