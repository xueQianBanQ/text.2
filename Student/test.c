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
	printf("*****1.��������ѯ*****\n");
	printf("*****2.��ѧ�Ų�ѯ*****\n");
	printf("**********************\n");
}

int main()
{
	int num = 0;//��¼ѧ������
	FILE* pfStu = fopen("student.txt", "r+");//���ļ�student.txt
	if (pfStu == NULL)
	{
		printf("%s\n", strerror(errno));//�ж��Ƿ�򿪳ɹ�
		exit(1);
	}
	Student stu[20] = { 0 };//�洢ѧ����Ϣ
	int i = 0;
	for (i = 0; i < 10; i++)//������Ϣ
	{
		fscanf(pfStu, "%d%s%f%f%f",&stu[i].xh, stu[i].name, &stu[i].cj1, &stu[i].cj2, &stu[i].ave);
		num++;
	}
	fclose(pfStu);
	pfStu = NULL;
	for (i = 0; i < 10; i++)//��ƽ��ֵ
	{
		Average(&stu, i);
	}
	int input = 0;
	do
	{
		menu();//��Ʋ˵�
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case SHOW:
			ShowStudent(&stu, num);
			break;
		case SEARCH:
			menuSearch();//��Ʋ�ѯ�Ĳ˵�
			int input2 = 0;
			printf("������;>");
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
				printf("%s\n", "�������");
			}
			break;
		case ADD:
			AddStudent(&stu, &num);
			break;
		case SORT:
			SortStudent(&stu, num);
			break;
		case EXIT:
			printf("%s\n", "�˳�");
			break;
		default:
			printf("%s\n", "�������");
			break;
		}
	} while (input);
	FILE* pfSort = fopen("sort.txt", "w");
	if (pfSort == NULL)//�ж��Ƿ�򿪳ɹ�
	{
		printf("%s\n", strerror(errno));
		exit(1);
	}
	for (i = 0; i < num; i++)//������Ϣ��sort.txt
	{
		fprintf(pfSort, "%-3d%-3s%.1f %.1f %.2f\n", stu[i].xh, stu[i].name, stu[i].cj1, stu[i].cj2, stu[i].ave);
	}
	fclose(pfSort);
	pfSort = NULL;
	return 0;
}