#pragma once
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>


//创建结构体
typedef struct student
{
	int xh;
	char name[20];
	float cj1;
	float cj2;
	float ave;
}Student;//重命名

enum Student
{
	EXIT,
	SHOW,
	SEARCH,
	ADD,
	SORT,

};


//求平均值
void Average(Student* stu, const int i);
//显示学生信息
void ShowStudent(const Student* stu, const int num);
//按姓名查询
void SearchName(const Student* stu, const int num);
//按学号查询
void SearchXh(const Student* stu, const int num);
//增加学生信息
void AddStudent(Student* stu, int* num);
//按平均分排序
void SortStudent(Student* stu, const int num);