#define _CRT_SECURE_NO_WARNINGS 1

//题目：企业发放的奖金根据利润提成。
//
//利润(I)低于或等于10万元时，奖金可提10% ；"0"
//利润高于10万元，低于20万元时，低于10万元的部分按10% 提成，高于10万元的部分，可提成7.5 % ；"1"
//20万到40万之间时，高于20万元的部分，可提成5 % ；"2"
//40万到60万之间时高于40万元的部分，可提成3 % ；"3"
//60万到100万之间时，高于60万元的部分，可提成1.5 % ；"4"
//高于100万元时，超过100万元的部分按1 % 提成。"5"
//从键盘输入当月利润I，求应发放奖金总数？

/*
1.输入企业获得的利润
2.获得奖金总数
*/

#include <stdio.h>


double people_salary(int salary)
{
	int salary1 = 100000;
	int salary2 = 200000;
	int salary3 = 400000;
	int salary4 = 600000;
	//int salary5 = 800000;
	int salary6 = 1000000;
	double people_money1 = 0, people_money2 = 0, people_money3 = 0, people_money4= 0, people_money5 = 0, people_money6 = 0;
	if (salary <= salary1)//利润(I)低于或等于10万元时，奖金可提10% ；"0"
	{
		people_money1 = salary * 0.1;
		return people_money1;
	}
	if (salary1 < salary && salary < salary2)//利润高于10万元，低于20万元时，低于10万元的部分按10% 提成，高于10万元的部分，可提成7.5 % ；"1"
	{
		people_money1 = salary1 * 0.1;
		people_money2 = people_money1 + (salary-salary1)*0.075;
		return people_money2;
	}
	if (salary2 <= salary && salary < salary3)//20万到40万之间时，高于20万元的部分，可提成5 % ；"2"
	{
		people_money1 = salary1 * 0.1;
		people_money2 = people_money1 + (salary2 - salary1) * 0.075;
		people_money3 = people_money2 + (salary-salary2)*0.05;
		return people_money3;
	}//OK

	if (salary3 <= salary && salary < salary4)//40万到60万之间时高于40万元的部分，可提成3 % ；"3"
	{
		people_money1 = salary1 * 0.1;
		people_money2 = people_money1 + (salary2 - salary1) * 0.075;
		people_money3 = people_money2 + (salary3 - salary2) * 0.05;
		people_money4 = people_money3 + (salary - salary3) * 0.03;
		return people_money4;
	}
	if (salary4 <= salary && salary < salary6)//60万到100万之间时，高于60万元的部分，可提成1.5 % ；"4"
	{
		people_money1 = salary1 * 0.1;
		people_money2 = people_money1 + (salary2 - salary1) * 0.075;
		people_money3 = people_money2 + (salary3 - salary2) * 0.05;
		people_money4 = people_money3 + (salary4 - salary3) * 0.03;
		people_money5 = people_money4 + (salary - salary4) * 0.015;
		return people_money5;
	}
	if (salary6 <= salary)//高于100万元时，超过100万元的部分按1 % 提成。"5"
	{
		people_money1 = salary1 * 0.1;
		people_money2 = people_money1 + (salary2 - salary1) * 0.075;
		people_money3 = people_money2 + (salary3 - salary2) * 0.05;
		people_money4 = people_money3 + (salary4 - salary3) * 0.03;
		people_money5 = people_money4 + (salary6 - salary4) * 0.015;
		people_money6 = people_money5 + (salary - salary6) * 0.01;
		return people_money6;
	}
	return 0.0;
}

int main(void)
{
	int salary;
	double grain;
	scanf("%d", &salary);
	grain = people_salary(salary);
	printf("当企业利润是%d，个人所得奖金是%f", salary, grain);
	return 0;
}