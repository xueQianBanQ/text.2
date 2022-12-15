#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>	
#include <stdlib.h>	
#define  LEN 180
void Print(FILE* pf)
{
	char ch = fgetc(pf);
	while (ch != EOF)
	{
		putchar(ch);
		ch = fgetc(pf);
	}
	printf("\n");
}
int main()
{
	FILE* fp1, * fp2;
	char str[LEN];
	if ((fp1 = fopen("a.txt", "a+")) == NULL)  //打开文件f1.txt
	{
		printf("无法打开a.txt!\n");
		exit(1);
	}
	printf("这是file1\n");
	rewind(fp1);
	Print(fp1);
	if ((fp2 = fopen("b.txt", "r")) == NULL) //打开文件f2.txt
	{
		printf("无法打开 b.txt!\n");
		exit(1);
	}
	printf("这是file2\n");
	Print(fp2);
	rewind(fp2);
	while (!feof(fp2))
	{
		fgets(str, LEN, fp2);    //读文件f2.txt 
		fputs(str, fp1);	       //将str追加在fp1的后面
	}
	printf("这是连接后file1\n");
	rewind(fp1);
	Print(fp1);
	fclose(fp1);
	fclose(fp2);
	return 0;

}

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//struct student
//{
//	int num;
//	char name[10];
//	float score;
//};
//int main()
//{
//	struct student stus[10];
//	struct student stu = {0};
//	int i, n;//n记录学生数
//	printf("Input student number:\n");
//	scanf("%d", &n);
//	printf("输入学生信息\n");
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d%s%f", &stus[i].num, stus[i].name, &stus[i].score);
//	}
//	printf("\nstus\n");
//	printf("学号\t姓名\t成绩\t\n");
//	for (i = 0; i < n; i++)
//	{
//		printf("%d\t%s\t%f\t\n", stus[i].num, stus[i].name, stus[i].score);
//	}
//	FILE* pf = fopen("bb.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		exit(1);
//	}
//	for (i = 0; i < n; i++)
//	{
//		fprintf(pf, "%d %s %f\n", stus[i].num, stus[i].name, stus[i].score);
//	}
//	fclose(pf);
//	pf = NULL;
//	pf = fopen("bb.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		exit(1);
//	}
//	for (i = 0; i < n; i++)
//	{
//		fscanf(pf, "%d%s%f", &stu.num, stu.name, &stu.score);
//		printf("%d\t%s\t%f\t\n", stu.num, stu.name, stu.score);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//struct student
//{
//	int num;
//	char name[10];
//	float score;
//};
//int main()
//{
//	struct student stus[10];
//	int i = 0, n = 0;//n记录学生数
//
//
//	FILE* pf = fopen("aa.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		exit(1);
//	}
//	while(!feof(pf))
//	{
//		fscanf(pf, "%d%s%f", &stus[i].num, stus[i].name, &stus[i].score);
//		n++;
//		i++;
//	}
//	printf("学号\t姓名\t成绩\t\n");
//	for (i = 0; i < n; i++)
//	{
//		printf("%d\t%s\t%f\n", stus[i].num, stus[i].name, stus[i].score);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}