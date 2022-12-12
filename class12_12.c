#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>	
//#include <stdlib.h>	
//void Fgetc(FILE* pf);
//
//int main()
//{
//	FILE* fp;
//	char fname[100];                  //��·�����ļ���
//	printf("�������·�����ļ���:");
//	scanf("%s", fname);
//	if ((fp = fopen(fname, "r")) == NULL)  //���ļ�
//	{
//		printf("�޷����ļ�!\n");
//		exit(1);
//	}
//
//	Fgetc(fp);
//	if (fclose(fp))                     //�ر��ļ�
//		printf("�޷����ļ�!\n");
//	return 0;
//
//}
//
//void Fgetc(FILE* fp)
//{
//	char ch = fgetc(fp);	                   //��ȡ�ļ��ַ�
//	while (ch != EOF)                //����ļ�����
//	{
//		putchar(ch);	              //��ʾ�ַ�
//		ch = fgetc(fp);	              //��ȡ�ļ��ַ�
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
	char ch = fgetc(fp);	                   //��ȡ�ļ��ַ�
	while (ch != EOF)                //����ļ�����
	{
		putchar(ch);	              //��ʾ�ַ�
		ch = fgetc(fp);	              //��ȡ�ļ��ַ�
	}
	printf("\n");
}

int main()
{
	FILE* pSourceFile, * pDestFile;
	char  fSourceName[80], fDestName[80];
	int ch;
	printf("����Դ�ļ���:");
	scanf("%s", fSourceName);
	printf("����Ŀ���ļ���:");
	scanf("%s", fDestName);
	//��Դ�ļ�
	if ((pSourceFile = fopen(fSourceName, "r")) == NULL)
	{
		printf("Cannot open source file!\n");
		exit(1);
	}
	//��Ŀ���ļ�
	if ((pDestFile = fopen(fDestName, "w")) == NULL)
	{
		printf("Cannot open dest file!\n");
		exit(1);
	}
	ch = fgetc(pSourceFile);		    //��ȡ�ļ��ַ�
	while (feof(pSourceFile) == 0)
	{
		fputc(ch, pDestFile);		//���ַ�д��Ŀ���ļ�
		ch = fgetc(pSourceFile);		//��ȡ�ļ��ַ�
	}
	fclose(pSourceFile);	        //�ر�Դ�ļ�
	fclose(pDestFile);		        //�ر�Ŀ���ļ�
	pSourceFile = fopen(fSourceName, "r");
	pDestFile = fopen(fDestName, "r");
	Fgetc(pSourceFile);
	Fgetc(pDestFile);
	fclose(pSourceFile);	        //�ر�Դ�ļ�
	fclose(pDestFile);
	pSourceFile = NULL;
	pDestFile = NULL;
	return 0;

}