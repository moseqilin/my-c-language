#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	FILE* fp = fopen("C:\\Users\\Moqilin\\Desktop\\test_git\\185061815124533.github.io\\02.txt", "wb");
	char ch;
	int i;
	if (fp == NULL)
	{
		printf("Failure to open 02.txtx!\n");
		exit(0);
	}
	for (i = 0; i < 128; i++)
	{
		fputc(i, fp);
	}
	fclose(fp);
	FILE* fp1 = fopen("C:\\Users\\Moqilin\\Desktop\\test_git\\185061815124533.github.io\\02.txt", "rb");
	if (fp1 == NULL)
	{
		printf("Failure to open 02.txtx!\n");
		exit(0);
	}
	//while ((ch = fgetc(fp1)) != EOF)
	ch = fgetc(fp1);
	while(!feof(fp1))
	{
		putchar(ch);
		ch = fgetc(fp1);
	}
	fclose(fp1);
	return 0;
}