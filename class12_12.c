#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>	
//#include <stdlib.h>	
//void Fgetc(FILE* pf);
//
//int main()
//{
//	FILE* fp;
//	char fname[100];                  //带路径的文件名
//	printf("请输入带路径的文件名:");
//	scanf("%s", fname);
//	if ((fp = fopen(fname, "r")) == NULL)  //打开文件
//	{
//		printf("无法打开文件!\n");
//		exit(1);
//	}
//
//	Fgetc(fp);
//	if (fclose(fp))                     //关闭文件
//		printf("无法打开文件!\n");
//	return 0;
//
//}
//
//void Fgetc(FILE* fp)
//{
//	char ch = fgetc(fp);	                   //读取文件字符
//	while (ch != EOF)                //输出文件内容
//	{
//		putchar(ch);	              //显示字符
//		ch = fgetc(fp);	              //读取文件字符
//	}
//	printf("\n");
//}



//#include <stdio.h>
//struct S
//{
//	int i;
//	char a;
//};
//int main()
//{
//	struct S s1 = { 1, 'a' };
//	struct S s2 = s1;
//	return 0;
//}

#include <stdio.h>	
#include <stdlib.h>	

void Fgetc(FILE* fp)
{
	char ch = fgetc(fp);	                   //读取文件字符
	while (ch != EOF)                //输出文件内容
	{
		putchar(ch);	              //显示字符
		ch = fgetc(fp);	              //读取文件字符
	}
	printf("\n");
}

int main()
{
	FILE* pSourceFile, * pDestFile;
	char  fSourceName[80], fDestName[80];
	int ch;
	printf("输入源文件名:");
	scanf("%s", fSourceName);
	printf("输入目的文件名:");
	scanf("%s", fDestName);
	//打开源文件
	if ((pSourceFile = fopen(fSourceName, "r")) == NULL)
	{
		printf("Cannot open source file!\n");
		exit(1);
	}
	//打开目标文件
	if ((pDestFile = fopen(fDestName, "w")) == NULL)
	{
		printf("Cannot open dest file!\n");
		exit(1);
	}
	ch = fgetc(pSourceFile);		    //读取文件字符
	while (feof(pSourceFile) == 0)
	{
		fputc(ch, pDestFile);		//将字符写入目标文件
		ch = fgetc(pSourceFile);		//读取文件字符
	}
	fclose(pSourceFile);	        //关闭源文件
	fclose(pDestFile);		        //关闭目标文件
	pSourceFile = fopen(fSourceName, "r");
	pDestFile = fopen(fDestName, "r");
	Fgetc(pSourceFile);
	Fgetc(pDestFile);
	fclose(pSourceFile);	        //关闭源文件
	fclose(pDestFile);
	pSourceFile = NULL;
	pDestFile = NULL;
	return 0;

}