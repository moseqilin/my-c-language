#define _CRT_SECURE_NO_WARNINGS 1

#include <windows.h>
#include <stdio.h>
#include <conio.h>



int main(void)
{
	int count = 0;
	int i = 1;
	for (i; i < 5; i++)
	{
		//printf("%d", i);
		int j = 1;
		for (j = 1; j < 5; j++)
		{
			//printf("%d", j);
			int k = 1;
			for (k; k < 5; k++)
			{
				//printf("%d ", k);
				if (i != k && i != j && j != k)
				{
					printf("%d%d%d\n", i, j, k);
					count++;
				}
			}
			//printf("\n%d", count);
		}
	}
	printf("\n%d", count);

	return 0;
}


//int sum_str(char* arr)//用递归，不用库函数实现字符串逆转
//{
//	int count = 0;
//	while (arr[count] != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//
//void resver(char* arr)
//{
//	char tmp = arr[0];
//	//int j = 0;
//	int i = 0;
//	i = sum_str(arr);
//	arr[0] = arr[i-1];
//	arr[i - 1] = '\0';
//	if (sum_str(arr+1) >= 2)
//	{
//		resver(arr + 1);
//	}
//	arr[i - 1] = tmp;
//}
//
//int main(void)
//{
//	char arr[] = "abcdefghij";
//	resver(arr);
//	printf("%s", arr);
//	return 0;
//}


//int main(void)//随机数
//{
//	int s;
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < 10; i++)
//	{
//		s = rand()%3;
//		printf("%d ", s);
//	}
//	return 0;
//}


//void menu()//扫雷
//{
//	printf("*****************************\n");
//	printf("********   1 .play   ********\n");
//	printf("********   0 .exit   ********\n");
//	printf("*****************************\n");
//}
//
//void game()
//{
//	char mine[ROWS][COLS] = { 0 };//9*9{row*col}
//	char show[ROWS][COLS] = { 0 };
//	InitBoard(mine, ROWS, COLS,'0');
//	InitBoard(show, ROWS, COLS,'*');
//
//	//DisplayBoard(mine, ROW, COL);
//	DisplayBoard(show, ROW, COL);
//
//	SetMine(mine, ROW, COL);
//
//	DisplayBoard(mine, ROW, COL);
//	FindMine(mine, show, ROW, COL);
//}
//
//void test()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏.\n");
//			break;
//		default:
//			printf("选择错误，重新选择。\n");
//			break;
//		}
//		
//
//	} while (input);
//}
//
//
//int main()
//{
//	test();
//	return 0;
//}


//void menu()//三子棋游戏
//{
//	printf("**************************************\n");
//	printf("*****    1.play         0.exit  ******\n");
//	printf("**************************************\n");
//}
//
//void game()
//{
//	char ret = 0;
//	char board[ROW][COL] = { 0 };
//	InitBoard(board,ROW,COL);
//	DisplayBoard(board,ROW,COL);
//	while (1)
//	{
//		PlayerMove(board,ROW,COL);
//		DisplayBoard(board, ROW, COL);
//		ret = IsWin(board,ROW,COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//
//
//		ComputerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//	}
//	if (ret == '*')
//	{
//		printf("玩家赢。\n");
//	}
//	else if (ret == '#')
//	{
//		printf("电脑赢。\n");
//	}
//	else
//	{
//		printf("平局。\n");
//	}
//}
//
//void test()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择。");
//			break;
//		}
//	} 
//	while (input);
//}
//
//
//int main()
//{
//	test();
//	return 0;
//}


//int main()//输入很长的数字，计算结果是很长的数字
//{
//	//test();
//	int n = 1;
//	long sum = 1;
//	int a = 2;
//	while (n <= 50)
//	{
//		n = n + 1;
//		sum = sum * a;
//		a = a + 2;
//	}
//	printf("%I64d\n",sum);
//
//	return 0;
//}


////int fac1(x)//循环求阶乘
////{
////	int i = 1,num = 1;
////	while (i < x + 1)
////	{
////		num = i * num;
////		i++;
////	}
////	return num;
////}
//
////int fac1(n)//递归求阶乘
////{
////	if (n-1 > 0)
////		return n * fac1(n - 1);
////	else
////		return 1;
////}
//
////int fac1(x)//迭代求阶乘
////{
////	int num = 1;
////kl:
////	if (x != 1)
////	{
////		num = x * num;
////		x--;
////		goto kl;
////	}
////	return num;
////}
//
//
//
//int main() {
//	int n = 10;
//	int num = fac1(n);
//	printf("%d\n",num);
//	return 0;
//}


//int print(char* arr) {//递归求字符串的长度，不能创建临时变量
//	if (*arr != '\0')
//		return 1 + print(arr + 1);
//	else
//		return 0;
//}
//
//int main()
//{ 
//	char num[] = "1234.,mkl";
//	int len = print(num);
//	printf("%d\n", len);
//	return 0;
//}



//void print(int n)//写入一个数字，按顺序将他的每一位打印在屏幕上。递归函数
//{
//	if (n > 9)
//		print(n / 10);
//	printf("%d  ", n % 10);
//}
//
//
//int main()
//{
//	int num = 1232563456;
//	print(num);
//	return 0;
//}



//int main()//函数的链式访问，就是把一个函数的返回值 ，当成另一个函数的参数。
//{
//	printf("%d", printf("%d", printf("%d", printf("%d", 4))));//4111
//	return 0;
//}


//void add(int* num)//每运行一次函数num的值加1
//{
//	(*num)++;
//}
//
//
//int main()
//{
//	int num = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		add(&num);
//		printf("%d  ",num);
//	}
//	return 0;
//}



//int binary_search(int arr[], int k,int sz)//用函数查找有序数组里的一个数
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int center = (left + right) / 2;
//		if (arr[center] > k)
//		{
//			right = center - 1;
//		}
//		else if (arr[center] < k)
//		{
//			left = center+1;
//		}
//		else
//			return center;
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,3,4,6,8,9,10 };
//	int k = 0;
//	int sz = (sizeof(arr) / sizeof(arr[0]));
//	int ret = binary_search(arr, k,sz);
//	
//	if (ret != 0)
//		printf("找到了%d。", ret);
//	else
//		printf("找bu到。");
//	return 0;
//}



//int year(x)//用函数判断1000-2000的年份那些年是闰年；
//{
//	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int a = 0,num = 0;
//	for (a = 1000; a < 2001; a++)
//	{
//		//scanf("%d", &a);
//		num = year(a);
//		if(num == 1)
//			printf("%d  ", a);
//	}
//	return 0;
//}


//void pd(int x)//用函数判断一个数是否是素数
//{
//	int i = 0;
//	for(i = 2;i<=(x/2);i++)
//		if (x % i == 0)
//		{
//			printf("%d不是素数。\n", x);
//			break;
//		}
//	if(i > (x/2))
//		printf("%d是素数。\n", x);
//}
//
//int main()
//{
//	int a = 2;
//	scanf("%d", &a);
//	pd(a);
//	return 0;
//}



//void rp(int* pa, int* pb)//用函数交换两个变量的值
//{
//	int f = 0;
//	f = *pa;
//	*pa = *pb;
//	*pb = f;
//}
//
//int main()
//{
//	int a = 2, b = 3;
//	int* pa = &a;
//	int* pb = &b;
//	//scanf("%d,%d", &a, &b);
//	printf("%d  %d\n", a,b);
//	rp(&a,&b);
//	printf("%d  %d\n", a,b);
//	return 0;
//}



//int get_max(x, y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a =20 , b=90;
//	scanf("%d=%d", &a, &b);
//	int max = get_max(a, b);
//	printf("%d\n", b);
//	return 0;
//}



//int main()//网站地址：http://msdn.microsoft.com
//{
//	char arr[] = "sadfd";//http://www.cplusplus.com/
//	//memset(arr, '9', 3);//https://zh.cppreference.com/w/%E9%A6%96%E9%A1%B5   c语言的中文学习网站，比较权威
//	char arr1[] = "        ";
//	strcpy(arr1, arr);
//	printf("%s\n", arr1);
//}


//int main()//电脑关机
//{
//	char car[] = { 0 };
//	system("shutdown -s -t 60");
//	scanf("%s", car);
//	if (strcmp(car, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		system("exit()");
//	}
//	return 0;
//}

//void game()//猜数字游戏
//{
//	int ret,f, guss = 0;
//	ret = rand()%100+1;
//	//printf("%d\n", ret);
//	while (1)
//	{
//		scanf("%d",&guss);
//		if (ret > guss)
//			printf("%s", "猜小了。");
//		else if (ret < guss)
//			printf("%s", "猜大了。");
//		else if (ret == guss)
//		{
//			printf("%s", "猜对了。\n");
//			break;
//		}
//		/*else
//			printf("输入错误。");*/
//	}
//}
//
//void menu()
//{
//	printf("*******************************\n");
//	printf("***     1 Play     0 Exit   ***\n");
//	printf("*******************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选泽>:");
//		scanf("%d", &input);
//		if(input)
//			game();
//
//	} while (input);
//	return 0;
//}

//int main()//打印九九乘法表
//{
//	int i = 1, j = 1;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j < i + 1; j++)
//			printf("%d * %d == %-2d  ", j, i,i*j);
//		printf("\n");
//	}
//	return 0;
//}



//int main()//寻找数组中的最大值
//{
//	int arr[] = { 1,5,43,8,90,7 };
//	int max = 1;
//	int i = (sizeof(arr)/sizeof(arr[0]))-1,j=0;
//	for (j = 0; j < i; j = j++)
//	{
//		if (max < arr[j])
//			max = arr[j];
//		else
//			max = max;
//	}
//	printf("%d\n", max);
//	return 0;
//}



//int main()
//{
//	int nums[] = { 1,3,4,89,5,6,8,9 };
//	int target = 98;
//	int i, j=0;
//	for (i = 0; i < 7; i++)
//	{
//		for(j=i+1; j < 8; j++)
//			if (nums[i] + nums[j] == target)
//				printf("%d  %d\n", i, j);
//	}
//}



//int main()
//{
//	int i = 0;
//	
//	for (i = 101; i < 201; i= i+2)
//	{
//		int j = 2;
//		for(j= 2;j < i;j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//				
//		}
//		if(j == i)
//			printf("%d   ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int year;
//	int count = 0;
//	for (year = 1000; year < 2001; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			printf("%d  ",year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}



//int main()// 求两个数的最大公约数】 
//{
//	int a, b,c,i,f;
//	scanf("%d+%d", &a, &b);
//	if (a > b)
//	{
//		c = a;
//		while (i= c % b)
//		{
//			c = b;
//			b = i;
//		}
//		printf("%d\n", i);
//	}
//	else
//	{
//		c = b;
//		while (i = c % a)
//		{
//			c = a;
//			a = i;
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}



//int main()//100以内求3的倍数
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}



//int main()//让数组里的数进行排序
//{
//	int arr[] = { 4,30,8,900,5,0,1,76,67,90,12,45,32 };
//	int i = 1,sz,rec,num,max;
//	sz = (sizeof(arr)/sizeof(arr[0])) - 1;
//	max = sz+2;
//at:
//	while (max)
//	{
//		if (arr[i] > arr[i - 1] && arr[i] < arr[i + 1])
//		{
//			i++;
//			//printf("i1");
//		}
//		//else if (arr[i] < arr[i + 1])
//		//{
//		//	i++;
//		//	printf("i2");
//		//}
//		else
//		{
//			while (arr[i] < arr[i - 1] || arr[i] > arr[i + 1])
//			{
//				if (arr[i] < arr[i - 1])
//				{
//					rec = arr[i];
//					arr[i] = arr[i - 1];
//					arr[i - 1] = rec;
//					//printf("i3");
//					if (arr[i] < arr[i - 1])
//					{
//						i--;
//						goto at;
//					}
//				}
//				else if (arr[i] > arr[i + 1])
//				{
//					rec = arr[i];
//					arr[i] = arr[i + 1];
//					arr[i + 1] = rec;
//					//printf("i4");
//					if (arr[i] < arr[i - 1])
//					{
//						i--;
//						goto at;
//					}
//				}
//				i++;
//			}
//		}
//		max--;
//		//printf("%d\n", arr);
//	};
//	for (num = 0; num < sz+1; num++)
//		printf("%d\n", arr[num]);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	char passeord[20] = { 0 };
//	
//	for (i = 0; i <= 3; i++)
//	{
//		scanf("%s", passeord);
//		if (strcmp(passeord, "123456") == 0)
//		{
//			printf("登录成功");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	};
//	if (i > 3)
//	{
//		printf("退出");
//	}
//
//	return 0;
//}



//int main()
//{
//	int num = 0;
//	char arr2[20] = { 0 };
//	while(num<=3)
//	{
//		scanf("%s", arr2);
//		if (strcmp(arr2, "12345") == 0)
//		{
//			printf("恭喜你，登录成功");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//		num++;
//	};
//	if (num > 3)
//	{
//		printf("退出");
//	}
//	return 0;
//}



//int main()
//{
//	int left, right, sz;
//	char arr1[] = "Welcome to China.";
//	char arr2[] = "*****************";
//	left = 0;
//	sz = strlen(arr1);
//	right = sz - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		Sleep(5);
//		printf("%s\n", arr2);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	int left,right,sz,i;
//	int y = 4904567687;
//	int arr[] = { 1,3,5,7,34,67,345,900,4904,4600,4900,3543886 };
//	left = 0;
//	sz = sizeof(arr) / sizeof(arr[i  - 1]);
//	right = sz - 1;
//	while(right >= left)
//	{
//		i = (left + right) / 2;
//		if (y > arr[i])
//		{
//			left = i+1;
//		}
//		else if (y < arr[i])
//		{
//			right = i-1 ;
//		}
//		else
//		{
//			printf("zdl  %d\n", i);
//			break;
//		}
//	}
//	if(left > right)
//	{
//		printf("zbd");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int j = 1;
//	int k = 1;
//	int f = 0;
//	for (k = 1; k <= 10; k++)//k =1,2,3
//	{
//		j = k * j;
//		f = j + f;//f = 2
//		//printf("%d\n", j);
//	}
//	printf("%d\n",f );
//	return 0;
//}





//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}



//int main()
//{
//	int a = -10;

//	printf("%p\n", &a);
//	int* p = -10;
//	printf("%p\n", p);
//	return 0;
//}

//int main()
//{
//	char uo[40] = { 0 };
//	system("shutdown -s -t 60");
//ag:
//	printf("你的电脑将在60秒内关机，如果想取消关机，请输入‘我是猪’。\n");
//	scanf("%s", uo);
//	if(strcmp(uo,"我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto ag;
//	}
//	return 0;
//}


//printf("%d\n", 6 / 2);//除法，取商
//printf("%d\n", 6 % 2);//除法，取模

//{
//	int arr[7] = { 1,2,3,45,7,9,10 };
//	int i = 0;
//	while (i < 7)
//	{
//		printf("%d\n", i);
//		printf("%d\n", arr[i]);
//		i++;
//	}
//}


//enum Sex
//{
//	mail,
//	femail,
//	secert
//};
//enum Color
//{
//	red,
//	blue,
//	yellow
//};
//int main()
//{
//	enum Sex c = mail;
//	enum Color d = red;
//	d = yellow;
//	printf("%d%d\n", c, d);
//	return 0;
//}\[][l'kkljb