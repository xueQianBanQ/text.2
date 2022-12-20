#define _CRT_SECURE_NO_WARNINGS 1
#include "student.h"

//��ƽ��ֵ
void Average(Student* stu,const int i)
{
	stu[i].ave = (stu[i].cj1 + stu[i].cj2) / 2;
}

//��ʾѧ����Ϣ
void ShowStudent(const Student* stu,const int num)
{
	printf("%s\t%s\t%s\t%s\t%s\t\n", "ѧ��", "����", "�ɼ�1", "�ɼ�2", "ƽ���ɼ�");
	int i = 0;
	for (i = 0; i < num; i++)
	{
		printf("%d\t%s\t%d\t%d\t%.2f\n", stu[i].xh, stu[i].name, (int)stu[i].cj1, (int)stu[i].cj2, stu[i].ave);
	}
}

//��������ѯ
void SearchName(const Student* stu,const int num)
{
	char name[20] = { 0 };
	printf("��������Ҫ��ѯ������:>");
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
		printf("û�и�ѧ������Ϣ\n");
	}
	else
	{
		printf("%s\t%s\t%s\t%s\t%s\t\n", "ѧ��", "����", "�ɼ�1", "�ɼ�2", "ƽ���ɼ�");
		printf("%d\t%s\t%d\t%d\t%.2f\n", stu[i].xh, stu[i].name, (int)stu[i].cj1, (int)stu[i].cj2, stu[i].ave);
	}
}

//��ѧ�Ų�ѯ
void SearchXh(const Student* stu,const int num)
{
	int xh = 0;
	printf("��������Ҫ��ѯ��ѧ��:>");
	scanf("%d", &xh);
	if (xh <= 0 || xh > num)//ѧ�Ŵ��ڸ�����
	{
		printf("�����ڸ�ѧ��\n");
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
			printf("�����ڸ�ѧ��\n");
		}
		else
		{
			printf("%s\t%s\t%s\t%s\t%s\t\n", "ѧ��", "����", "�ɼ�1", "�ɼ�2", "ƽ���ɼ�");
			printf("%d\t%s\t%d\t%d\t%.2f\n", stu[i].xh, stu[i].name, (int)stu[i].cj1, (int)stu[i].cj2, stu[i].ave);
		}
	}
}

//����ѧ����Ϣ
void AddStudent(Student* stu, int* num)
{
	if (num == 20)
	{
		printf("ѧ����������\n");
		return;
	}
	stu[*num].xh = *num + 1;//ѧ���ǽ����ŵģ����Բ���Ҫ�ֶ�����
	printf("������ѧ������:>"); scanf("%s", &stu[*num].name);
	printf("������ѧ����һ���ɼ�:>"); scanf("%f", &stu[*num].cj1);
	printf("������ѧ���ڶ����ɼ�:>"); scanf("%f", &stu[*num].cj2);
	Average(stu, *num);
	(*num)++;
}

//��ƽ��������
void SortStudent(Student* stu, const int num)
{
	int i = 0, j = 0;//����ð������
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