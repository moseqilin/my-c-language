#define _CRT_SECURE_NO_WARNINGS 1
//求一个三位数，将此三位数倒序输出，
//忽略正负号

//#include <stdio.h>
//#include <math.h>
//
//int main(void)
//{
//	int a, b, c;
//	double x1 = 0;
//	double x2 = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int d = 0;
//	if (b * b - 4 * a * c > 0)
//	{
//		d = 1;
//		x1 = (double)((-b + sqrt(b * b - 4 * a * c)) / (2 * a));
//		x2 = (double)(-b - sqrt(b * b - 4 * a * c)) / (2 * a);
//	}
//	if (d)
//	{
//		printf("方程的两个解分别是：\n%f\n%f", x1, x2);
//	}
//	return 0;
//}


//
//#include <stdio.h>
////求任意两个整形的和
//
//int main(void)
//{
//	int x1, x2;
//	scanf("%d %d", &x1, &x2);
//	printf("%d", x1 + x2);
//	return 0;
//}


//#include <stdio.h>
////枚举类型
//int f;
//int main(void)
//{
//	enum response{no = 1,yes = 'ss',none = 0};
//	printf("%d",f);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	double f = 90.8;
//	f = 80.9l;
//	printf("%f", f);
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>

//int main(void)
//{
//	FILE* fp = fopen("C:\\Users\\Moqilin\\Desktop\\test_git\\185061815124533.github.io\\02.txt", "ab+");
//	int fputc(int c ,FILE * fp);
//	int fclose(FILE * fp);
//}

int main(void)
{
	FILE* fp = fopen("C:\\Users\\Moqilin\\Dektop\\test_git\\185061815124533.github.io\\0.txt", "w");
	char ch;
	if (fp == NULL)
	{
		printf("Failure to open demo .txt!\n");
		exit(0);//如果文件打开失败，则退出程序
	}
	ch = getchar();
	while (ch != '\n')
	{
		fputc(ch, fp);
		ch = getchar();
	}
	fclose(fp);
	return 0;
}