#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#define N 30

typedef struct date
{
	int year;
	int month;
	int day;
}DATE;

typedef struct student
{
	long studentID;
	char studentName[10];
	char studentSex;
	DATE birthday;
	int    score[4];
	float aver;
}STUDENT;
void InputScore(STUDENT stu[], int n, int m);
void AverScore(STUDENT stu[], int n, int m);
void WritetoFile(STUDENT stu[], int n, int m);//输出n个学生的学号，姓名，性别，出生日期及门课程的成绩到文件score.txt

int main(void)
{
	STUDENT stu[N];
	int n;
	printf("How many student?");
	scanf("%d", &n);
	InputScore(stu, n, 4);//从键盘上输入n个学生的学号，姓名，性别，出生日期及门课程的成绩到结构体数组stu中；
	AverScore(stu, n, 4);//计算n个学生m门课程的平均分，存入数组stu的成员aver中
	WritetoFile(stu, n, 4);//输出n个学生的学号，姓名，性别，出生日期及门课程的成绩到文件score.txt
	return 0;
}

//从键盘上输入n个学生的学号，姓名，性别，出生日期及门课程的成绩到结构体数组stu中；
void InputScore(STUDENT stu[], int n, int m)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		printf("Input record %d: \n", i + 1);
		scanf("%ld", &stu[i].studentID);
		scanf("%s", &stu[i].studentName);
		scanf(" %c", &stu[i].studentSex);

		scanf("%d", &stu[i].birthday.year);
		scanf("%d", &stu[i].birthday.month);
		scanf("%d", &stu[i].birthday.day);
		for (j = 0; j < m; j++)
		{
			scanf("%d", &stu[i].score[j]);
		}
	}
}


//计算n个学生m门课程的平均分，存入数组stu的成员aver中
void AverScore(STUDENT stu[], int n, int m)
{
	int i, j, sum;
	for (i = 0; i < n; i++)
	{
		sum = 0;
		for (j = 0; j < m; j++)
		{
			sum = sum + stu[i].score[j];
		}
		stu->aver = (float)sum / m;
	}
}


void WritetoFile(STUDENT stu[], int n, int m)//输出n个学生的学号，姓名，性别，出生日期及门课程的成绩到文件score.txt
{
	FILE* fp = fopen("scor.txt", "w");
	int i, j;
	if (fp == NULL)
	{
		printf("Failure to open score.txt!\n");
		exit(0);
	}
	fprintf(fp, "%d\t%d\n", n, m);
	for (i = 0; i < n; i++)
	{
		fprintf(fp, "%10ld%8s%3c%6d/%02d/%02d", stu[i].studentID,
			stu[i].studentName,
			stu[i].studentSex,
			stu[i].birthday.year,
			stu[i].birthday.month,
			stu[i].birthday.day);
		for (j = 0; j < m; j++)
		{
			fprintf(fp,"%4d", stu[i].score[j]);
		}
		fprintf(fp,"%6.lf\n", stu[i].aver);
	}
	fclose(fp);
}
//10012357 屠夫 M 1980 5 17 61 72 89 90