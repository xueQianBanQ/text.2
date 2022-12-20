#pragma once
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>


//�����ṹ��
typedef struct student
{
	int xh;
	char name[20];
	float cj1;
	float cj2;
	float ave;
}Student;//������

enum Student
{
	EXIT,
	SHOW,
	SEARCH,
	ADD,
	SORT,

};


//��ƽ��ֵ
void Average(Student* stu, const int i);
//��ʾѧ����Ϣ
void ShowStudent(const Student* stu, const int num);
//��������ѯ
void SearchName(const Student* stu, const int num);
//��ѧ�Ų�ѯ
void SearchXh(const Student* stu, const int num);
//����ѧ����Ϣ
void AddStudent(Student* stu, int* num);
//��ƽ��������
void SortStudent(Student* stu, const int num);