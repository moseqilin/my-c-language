#define _CRT_SECURE_NO_WARNINGS 1

/*
题目：输入某年某月某日，判断这一天是这一年的第几天？

程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊情况，闰年且输入月份大于3时需考虑多加一天。
*/

#include <stdio.h>

int main(void)
{
	int year, month, day, sum = 0;
	scanf("%d,%d,%d", &year, &month, &day);//日期格式为：2021，2，7
	switch (month)
	{
	case 1:
		sum = 0;
		break;
	case 2:
		sum = 31;
		break;
	case 3:
		sum = 31 + 28;
		break;
	case 4:
		sum = 31 + 28 + 31;
		break;
	case 5:
		sum = 31 + 28 + 31 + 30;
		break;
	case 6:
		sum = 31 + 28 + 31 + 30 + 31;
		break;
	case 7:
		sum = 31 + 28 + 31 + 30 + 31 + 30;
		break;
	case 8:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31;
		break;
	case 9:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
		break;
	case 10:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
		break;
	case 11:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
		break;
	case 12:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
		break;
	default:
		break;
	}
	sum = sum + day;
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	{
		if (month > 2)
		{
			sum++;
		}
	}
	printf("这是这一年的第 %d 天。", sum);
	return 0;
}