#define _CRT_SECURE_NO_WARNINGS 1
#include "student.h"

//求平均值
void Average(Student* stu,const int i)
{
	stu[i].ave = (stu[i].cj1 + stu[i].cj2) / 2;
}

//显示学生信息
void ShowStudent(const Student* stu,const int num)
{
	printf("%s\t%s\t%s\t%s\t%s\t\n", "学号", "姓名", "成绩1", "成绩2", "平均成绩");
	int i = 0;
	for (i = 0; i < num; i++)
	{
		printf("%d\t%s\t%d\t%d\t%.2f\n", stu[i].xh, stu[i].name, (int)stu[i].cj1, (int)stu[i].cj2, stu[i].ave);
	}
}

//按姓名查询
void SearchName(const Student* stu,const int num)
{
	char name[20] = { 0 };
	printf("请输入你要查询的姓名:>");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < num; i++)
	{
		if (strcmp(name, stu[i].name) == 0)
		{
			break;
		}
	}
	if (num == i)
	{
		printf("没有该学生的信息\n");
	}
	else
	{
		printf("%s\t%s\t%s\t%s\t%s\t\n", "学号", "姓名", "成绩1", "成绩2", "平均成绩");
		printf("%d\t%s\t%d\t%d\t%.2f\n", stu[i].xh, stu[i].name, (int)stu[i].cj1, (int)stu[i].cj2, stu[i].ave);
	}
}

//按学号查询
void SearchXh(const Student* stu,const int num)
{
	int xh = 0;
	printf("请输入你要查询的学号:>");
	scanf("%d", &xh);
	if (xh <= 0 || xh > num)//学号大于该人数
	{
		printf("不存在该学号\n");
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			if (stu[i].xh == xh)
			{
				break;
			}
		}
		if (i == num)
		{
			printf("不存在该学生\n");
		}
		else
		{
			printf("%s\t%s\t%s\t%s\t%s\t\n", "学号", "姓名", "成绩1", "成绩2", "平均成绩");
			printf("%d\t%s\t%d\t%d\t%.2f\n", stu[i].xh, stu[i].name, (int)stu[i].cj1, (int)stu[i].cj2, stu[i].ave);
		}
	}
}

//增加学生信息
void AddStudent(Student* stu, int* num)
{
	if (num == 20)
	{
		printf("学生人数已满\n");
		return;
	}
	stu[*num].xh = *num + 1;//学号是紧接着的，所以不需要手动输入
	printf("请输入学生姓名:>"); scanf("%s", &stu[*num].name);
	printf("请输入学生第一个成绩:>"); scanf("%f", &stu[*num].cj1);
	printf("请输入学生第二个成绩:>"); scanf("%f", &stu[*num].cj2);
	Average(stu, *num);
	(*num)++;
}

//按平均分排序
void SortStudent(Student* stu, const int num)
{
	int i = 0, j = 0;//进行冒泡排序
	for (i = 0; i < num - 1; i++)
	{
		for (j = 0; j < num - i - 1; j++)
		{
			if (stu[j].ave < stu[j + 1].ave)
			{
				Student temp = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = temp;
			}
		}
	}
}