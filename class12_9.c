#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//struct Student        //����ṹ������
//{
//	int id;            //ѧ��
//	char name[20];    //����
//	float score;       //�ɼ�
//
//};
//
//
//int main()
//{
//	struct Student stu1;
//	printf("%X,%d\n", &stu1, sizeof(stu1));
//	printf("%X,%d\n", &stu1.id, sizeof(stu1.id));
//	printf("%X,%d\n", &stu1.name, sizeof(stu1.name));
//	printf("%X,%d\n", &stu1.score, sizeof(stu1.score));
//	return 0;
//
//}

//
//#include <stdio.h>
//#include <string.h>
//struct Student        //����ṹ������
//
//{
//	int id;           //ѧ��
//	char name[20];    //����
//	float score;      //�ɼ�
//
//};
//
//
//
//int main()
//{
//	struct Student stu1, stu2;
//	stu1.id = 1;
//	strcpy(stu1.name, "Tom");
//	stu1.score = 95.5;
//	stu2 = stu1;
//	printf("%d, %s, %f\n", stu1.id, stu1.name, stu1.score);
//	printf("%d, %s, %f\n", stu2.id, stu2.name, stu2.score);
//	return 0;
//}

//#include <stdio.h>

//#include <string.h>
//
//
//
//struct Date
//{	
//	int year;
//	int month;
//	int day;
//};
//
//struct exStudent
//{	int id;
//	char name[20];
//	struct Date birth;
//	float score;
//};
//int main()
//{
//	struct exStudent stu1, stu2;
//	stu1.id = 101;
//	strcpy(stu1.name, "Tom");
//	stu1.birth.year = 1998;
//	stu1.birth.month = 12;
//	stu1.birth.day = 10;
//	stu1.score = 95.5;
//	stu2 = stu1;
//	printf("%d, %s, %d-%d-%d, %f\n", stu2.id, stu2.name, stu2.birth.year,
//		stu2.birth.month, stu2.birth.month, stu2.score);
//	return 0;
//
//}

//
//#include <stdio.h>
//
//
//
//struct Date
//{
//	int year;
//	int month;
//	int day;
//
//};
//
//struct exStudent
//{
//	int id;
//	char name[20];
//	struct Date birth;
//	float score;
//
//};
//
//
//
//int main()
//{
//	//struct Date birth;
//	struct exStudent stu1;
//
//	while (1)
//	{
//		printf("������ѧ����Ϣ��");
//		scanf("%d", &stu1.id);
//		if (stu1.id == -1)  break;
//		scanf("%s", stu1.name);
//		scanf("%d-%d-%d", &stu1.birth.year, &stu1.birth.month, &stu1.birth.month);
//		scanf("%f", &stu1.score);
//		//stu1.birth = birth;       //��ͬ���͵Ľṹ������ֵ
//		printf("�����ѧ����ϢΪ��\n");
//		printf("%d, %s, %d-%d-%d, %f\n", stu1.id, stu1.name, stu1.birth.year,
//			stu1.birth.month, stu1.birth.month, stu1.score);
//
//	}
//
//
//
//	return 0;
//
//}

//#include <stdio.h>
//
//struct Student        //����ṹ������
//
//{
//
//	int id;            //ѧ��
//	char name[20];    //����
//	float score;       //�ɼ�
//
//};
//
//void Output(struct Student stu[], int n);
//int Search(struct Student stu[], int n, float score);
//int Delete(struct Student stu[], int n, float score);
//
//
//
//int main()
//
//{	struct Student stu[10] = { {101, "Tom",    86},
//							{103, "Jerry",  68},
//							{105, "Mickey", 77},
//							{107, "Donald", 90} };
//	int n = 4;
//	Output(stu, n);
//	printf("�������ɾ��ѧ���ĳɼ�:\n");
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (stu[i].score < 70)
//		{
//			n = Delete(stu, n, stu[i].score);
//		}
//	}
//	Output(stu, n);
//	return 0;
//
//}
//
//void Output(struct Student stu[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		printf("%d,%s,%f\n", stu[i].id, stu[i].name, stu[i].score);
//
//}
//
//
//
//int Search(struct Student stu[], int n, float score)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		if (stu[i].score == score)
//			return i;   //���ҳɹ��������±�
//	return -1;          //����ʧ�ܣ�����-1
//}
//
//int Delete(struct Student stu[], int n, float score)
//
//{
//	int i;
//	int k = Search(stu, n, score);
//	if (k == -1)  return n;   //��������������������Ԫ��
//	for (i = k; i < n; i++)
//		stu[i] = stu[i + 1];
//	return n - 1;
//
//}



//#include <stdio.h>
//
//struct Student        //����ṹ������
//{
//	int id;            //ѧ��
//	char name[20];    //����
//	float score;       //�ɼ�
//
//};
//void Output(struct Student stu[], int n);
//int Insert(struct Student stu[], int n, struct Student stu1);
//
//int main()
//{
//	struct Student stu[10] = { {101, "Tom",    86},
//							{103, "Jerry",  68},
//							{105, "Mickey", 77},
//							{107, "Donald", 90} };
//	int n = 4;
//	struct Student stu1;
//	Output(stu, n);
//	printf("���������ӵ�ѧ����Ϣ:\n");
//	scanf("%d%s%f", &stu1.id, stu1.name, &stu1.score);
//	n = Insert(stu, n, stu1);
//	Output(stu, n);
//	return 0;
//}
//
//void Output(struct Student stu[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		printf("%d,%s,%f\n", stu[i].id, stu[i].name, stu[i].score);
//}
//
//
//
//int Insert(struct Student stu[], int n, struct Student stu1)
//{
//	int i;
//	for (i = n - 1; i >= 0 && stu[i].id > stu1.id; i--)
//		stu[i + 1] = stu[i];
//	stu[i + 1] = stu1;
//	return n + 1;
//}

//#include <stdio.h>
//#include <string.h>
//struct Student        //����ṹ������
//
//{
//	int id;            //ѧ��
//	char name[20];    //����
//	float score;       //�ɼ�
//
//};
//void Output(struct Student stu[], int n);
////int Search(struct Student stu[], int n, int id);
//
//int main()
//{
//	struct Student stu[10] = { {101, "Tom",    86},
//	{103, "Jerry",  68},
//	{105, "Mickey", 77},
//	{107, "Donald", 90} };
//	int n = 4, k;
//	char name[20];
//	Output(stu, n);
//	printf("���������ѧ����������");
//	scanf("%s", &name);
//	k = SearchName(stu, n, name);
//	if (k != -1)
//		printf("%d,%s,%f\n", stu[k].id, stu[k].name, stu[k].score);
//	else
//		printf("No found!");
//	return 0;
//
//}
//
//void Output(struct Student stu[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		printf("%d,%s,%f\n", stu[i].id, stu[i].name, stu[i].score);
//}
//
////int Search(struct Student stu[], int n, int id)
////{
////	int i;
////	for (i = 0; i < n; i++)
////		if (stu[i].id == id)
////			return i;   //���ҳɹ��������±�
////	return -1;          //����ʧ�ܣ�����-1
////}
//
//int SearchName(struct Student stu[], int n, char name[])
//{
//	int i;
//	for (i = 0; i < n; i++)
//		if (strcmp(stu[i].name,name)== 0)
//			return i;   //���ҳɹ��������±�
//	return -1;
//}

//#include <stdio.h>
//
//struct Student        //����ṹ������
//{
//	int id;            //ѧ��m
//	char name[20];    //����
//	float score;       //�ɼ�
//
//};
//
//void Output(struct Student stu[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		printf("%d,%s,%f\n", stu[i].id, stu[i].name, stu[i].score);
//}
//
//void Sort(struct Student stu[], int n)
//{
//	int i = 0;
//	int j = 0;
//	//ð������
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (stu[i].id > stu[i + 1].id)
//			{
//				struct Student temp = stu[i];
//				stu[i] = stu[i + 1];
//				stu[i + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	struct Student stu[10] = {
//		{103, "Jerry",  68},
//		{101, "Tom",    86},
//		{107, "Donald", 90},
//		{105, "Mickey", 77} };
//	int n = 4;
//	printf("����ǰ:\n");
//	Output(stu, n);
//	Sort(stu, n);
//	printf("�����:\n");
//	Output(stu, n);
//	return 0;
//}

//
//#include <stdio.h>
//#include <string.h>
//struct Student        //����ṹ������
//{
//	int id;            //ѧ��
//	char name[20];    //����
//	float score;       //�ɼ�
//};
//
//int main()
//{
//	struct Student stu1, stu2;
//	struct Student* pstu;
//	pstu = &stu1;
//	pstu->id = 101; strcpy(pstu->name, "Tom"); pstu->score = 68;
//	pstu = &stu2;
//	(*pstu).id = 103; strcpy((*pstu).name, "Jerry"); (*pstu).score = 86;
//	printf("%d,%s,%f\n", stu1.id, stu1.name, stu1.score);
//	printf("%d,%s,%f\n", pstu->id, pstu->name, pstu->score);
//	return 0;
//}

//#include <stdio.h>
//
//#include <stdlib.h>
//
//struct Student        //����ṹ������
//
//{
//
//	int id;            //ѧ��
//
//	char name[20];    //����
//
//	float score;       //�ɼ�
//
//};
//
//
//
//int main()
//
//{
//
//	struct Student* pstu;
//
//	//printf("%X\n", pstu);
//	pstu = (struct Student*)malloc(sizeof(struct Student));
//	printf("%X\n", pstu);
//
//	scanf("%d%s%f", &pstu->id, pstu->name, &pstu->score);
//
//	printf("%d\t%s\t%f\n", pstu->id, pstu->name, pstu->score);
//
//	free(pstu);
//	//pstu = NULL;
//	printf("%X\n", pstu);
//
//	printf("%d\t%s\t%f\n", pstu->id, pstu->name, pstu->score);
//
//
//
//	return 0;
//
//}

//
//#include <stdio.h>
//#include <stdlib.h>
//struct Student        //����ṹ������
//
//{
//	int id;            //ѧ��
//	char name[20];    //����
//	float score;       //�ɼ�
//
//};
//struct Student* Input(int n);
//void Output(struct Student stu[], int n);
//
//
//
//int main()
//
//{
//	struct Student* pstus;	int n;
//	printf("������ѧ������");	scanf("%d", &n);
//	pstus = Input(n);   // ����ռ䣬����n��ѧ������
//	Output(pstus, n);  // ���
//	free(pstus);      // �ͷſռ�
//	pstus = NULL;
//
//	return 0;
//
//}
//
//
//
//struct Student* Input(int n)
//{
//	int i;
//	// ���������ռ�
//	struct Student* pstus = (struct Student*)calloc(n, sizeof(struct Student));
//	// ���±귨��д�����ռ�
//	for (i = 0; i < n; i++)
//		scanf("%d%s%f", &pstus[i].id, pstus[i].name, &pstus[i].score);
//	return pstus;
//}
//
//
//
//void Output(struct Student stu[], int n)
//{
//	struct Student* pstu;
//	pstu = stu;
//	while (pstu < stu + n)
//	{
//		printf("%d,%s,%f\n", pstu->id, pstu->name, pstu->score);
//		pstu++;   // ָ�������е���һ���ṹ��
//	}
//}


