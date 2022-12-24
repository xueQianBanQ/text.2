#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	char arr[30] = { 0 };
//	char ch;
//	int i = 0;
//	while ((ch = getchar()) != '#')
//	{
//		arr[i] = ch;
//		i++;
//	}
//	FILE* pf = fopen("D:\\a.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		exit(1);
//	}
//	fputs(arr, pf);
//	fclose(pf);
//	pf = NULL;
//	pf = fopen("D:\\a.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		exit(1);
//	}
//	char buffer[30] = { 0 };
//	fgets(buffer, 30, pf);
//	printf("%s\n", buffer);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


#include <stdio.h>

struct Course
{
	int ClassNum;
	char Name[30];
	float credit;
};
int main()
{
	struct Course JiXin[3] = { 0 };
	printf("请输入课程信息\n");
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入课程号:>");
		scanf("%d", &JiXin[i].ClassNum);
		printf("请输入课程名:>");
		scanf("%s", JiXin[i].Name);
		printf("请输入学分:>");
		scanf("%f", &JiXin[i].credit);
	}
	printf("没排序前>\n");
	printf("课程号\t课程名称\t学分\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d\t%s\t\t%.2f\n", JiXin[i].ClassNum, JiXin[i].Name, JiXin[i].credit);
	}
	//冒泡排序
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2 - i; j++)
		{
			if (JiXin[j].credit < JiXin[j + 1].credit)
			{
				struct Course temp = JiXin[j];
				JiXin[j] = JiXin[j + 1];
				JiXin[j + 1] = temp;
			}
		}
	}
	printf("排序后>\n");
	printf("课程号\t课程名称\t学分\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d\t%s\t\t%.2f\n", JiXin[i].ClassNum, JiXin[i].Name, JiXin[i].credit);
	}
	return 0;
}