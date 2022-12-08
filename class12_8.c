#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//struct Student        //定义结构体类型
//{
//	int id;            //学号
//	char name[20];    //姓名
//	float score;       //成绩
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
//struct Student        //定义结构体类型
//
//{
//	int id;           //学号
//	char name[20];    //姓名
//	float score;      //成绩
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
//		printf("请输入学生信息：");
//		scanf("%d", &stu1.id);
//		if (stu1.id == -1)  break;
//		scanf("%s", stu1.name);
//		scanf("%d-%d-%d", &stu1.birth.year, &stu1.birth.month, &stu1.birth.month);
//		scanf("%f", &stu1.score);
//		//stu1.birth = birth;       //相同类型的结构变量赋值
//		printf("输入的学生信息为：\n");
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
//struct Student        //定义结构体类型
//
//{
//
//	int id;            //学号
//	char name[20];    //姓名
//	float score;       //成绩
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
//	printf("请输入待删除学生的成绩:\n");
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
//			return i;   //查找成功，返回下标
//	return -1;          //查找失败，返回-1
//}
//
//int Delete(struct Student stu[], int n, float score)
//
//{
//	int i;
//	int k = Search(stu, n, score);
//	if (k == -1)  return n;   //不存在满足条件的数组元素
//	for (i = k; i < n; i++)
//		stu[i] = stu[i + 1];
//	return n - 1;
//
//}



//#include <stdio.h>
//
//struct Student        //定义结构体类型
//{
//	int id;            //学号
//	char name[20];    //姓名
//	float score;       //成绩
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
//	printf("请输入待添加的学生信息:\n");
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
//struct Student        //定义结构体类型
//
//{
//	int id;            //学号
//	char name[20];    //姓名
//	float score;       //成绩
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
//	printf("请输入待查学生的姓名：");
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
////			return i;   //查找成功，返回下标
////	return -1;          //查找失败，返回-1
////}
//
//int SearchName(struct Student stu[], int n, char name[])
//{
//	int i;
//	for (i = 0; i < n; i++)
//		if (strcmp(stu[i].name,name)== 0)
//			return i;   //查找成功，返回下标
//	return -1;
//}

//#include <stdio.h>
//
//struct Student        //定义结构体类型
//{
//	int id;            //学号m
//	char name[20];    //姓名
//	float score;       //成绩
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
//	//冒泡排序
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
//	printf("排序前:\n");
//	Output(stu, n);
//	Sort(stu, n);
//	printf("排序后:\n");
//	Output(stu, n);
//	return 0;
//}

//
//#include <stdio.h>
//#include <string.h>
//struct Student        //定义结构体类型
//{
//	int id;            //学号
//	char name[20];    //姓名
//	float score;       //成绩
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
//struct Student        //定义结构体类型
//
//{
//
//	int id;            //学号
//
//	char name[20];    //姓名
//
//	float score;       //成绩
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
//struct Student        //定义结构体类型
//
//{
//	int id;            //学号
//	char name[20];    //姓名
//	float score;       //成绩
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
//	printf("请输入学生数：");	scanf("%d", &n);
//	pstus = Input(n);   // 申请空间，输入n个学生数据
//	Output(pstus, n);  // 输出
//	free(pstus);      // 释放空间
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
//	// 申请批量空间
//	struct Student* pstus = (struct Student*)calloc(n, sizeof(struct Student));
//	// 用下标法读写批量空间
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
//		pstu++;   // 指向数组中的下一个结构体
//	}
//}


