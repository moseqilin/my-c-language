#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


//void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)//扫雷
//{
//	int i = 0, j = 0;
//	for (i = 0; i < rows; i++)
//	{
//		for (j = 0; j < cols; j++)
//		{
//			board[i][j] = set;
//		}
//	}
//}
//
//void DisplayBoard(char board[ROWS][COLS], int row, int col)
//{
//	int i = 0, j = 0;
//	for (i = 0; i <= row; i++)
//	{
//		printf("%d ", i);
//	}
//	printf("\n");
//	for (i = 1; i <= row; i++)
//	{
//		printf("%d ", i);
//		for (j = 1; j <= col; j++)
//		{
//			printf("%c ", board[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void SetMine(char board[ROWS][COLS], int row, int col)
//{
//	int count = EASY_COUNT;
//	while(count)
//	{
//		int x = rand() % row+1;
//		int y = rand() % col+1;
//		if (board[x][y] == '0')
//		{
//			board[x][y] = '1';
//			count--;
//		}
//	}
//}
//
//int get_mine_count(char mine[ROWS][COLS], int x, int y)
//{
//	return mine[x - 1][y] +
//		mine[x - 1][y - 1] +
//		mine[x][y - 1] +
//		mine[x + 1][y - 1] +
//		mine[x + 1][y] +
//		mine[x + 1][y + 1] +
//		mine[x][y + 1] +
//		mine[x - 1][y + 1] - 8 * '0';
//
//}
//
////void pr(char mine[ROWS][COLS], char show[ROWS][COLS] ,int x, int y, int count)
////{
////	if (show[x][y] != 8)
////	{
////		if(mine[x - 1][y] = '0')
////		{
////			DisplayBoard（show, x, y);
////		}
////			mine[x - 1][y - 1] +
////			mine[x][y - 1] +
////			mine[x + 1][y - 1] +
////			mine[x + 1][y] +
////			mine[x + 1][y + 1] +
////			mine[x][y + 1] +
////			mine[x - 1][y + 1]
////	}
////}
//
//void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
//{
//	int win = 0;
//	int x = 0, y = 0;
//	while (win < row*col-EASY_COUNT)
//	{
//		printf("请输入排查雷的坐标\n");
//		scanf("%d%d", &x, &y);
//		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
//		{
//			if (mine[x][y] == '1')
//			{
//				printf("很遗憾，你被炸死了。\n");
//				DisplayBoard(mine, row, col);
//				break;
//			}
//			else
//			{
//				int count = get_mine_count(mine, x, y);
//				pr(mine,show ,x, y,count);
//				show[x][y] = count + '0';
//				DisplayBoard(show, row, col);
//				win++;
//			}
//		}
//		else
//		{
//			printf("请重新输入");
//		}
//	}
//	if (win = row * col - EASY_COUNT)
//	{
//		printf("扫雷成功\n");
//		DisplayBoard(mine, row, col);
//	}
//}



//三子棋
//void InitBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//}
//
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);
//			if (j < col - 1)
//				printf("|");
//		}
//		printf("\n");
//		if (i < row - 1)
//		{
//			for (j = 0; j < col; j++)
//			{
//				printf("---");
//				if (j < col - 1)
//					printf("|");
//			}
//			printf("\n");
//		}
//	}
//}
//
//void PlayerMove(char board[ROW][COL], int row, int col)
//{
//	int x, y;
//	printf("玩家走.\n");
//	while (1)
//	{
//		printf("要下的坐标：>");
//		scanf("%d%d", &x, &y);
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			if (board[x - 1][y - 1] == ' ')
//			{
//				board[x - 1][y - 1] = '*';
//				break;
//			}
//			else
//			{
//				printf("该坐标已被占用；\n");
//			}
//
//		}
//		else
//		{
//			printf("坐标非法，请重新输入.\n");
//		}
//	}
//}
//
//void ComputerMove(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("电脑走\n");
//	while (1)
//	{
//		x = rand() % row;
//		y = rand() % col;
//		if(board[x][y] == ' ')
//		{
//			board[x][y] = '#';
//			break;
//		}
//	}
//}
//
//int IsFull(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (board[i][j] == ' ')
//				return 0;
//		}
//	}
//	return 1;
//}
//
//char IsWin(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1]&& board[i][1] == board[i][2] && board[i][2] != ' ')
//		{
//			return board[i][2];
//		}
//	}
//	for (i = 0; i < col; i++)
//	{
//		if (board[0][i] == board[1][i]&& board[1][i] == board[2][i] && board[0][i] != ' ')
//		{
//			return board[0][i];
//		}
//	}
//	if (board[0][0] == board[1][1]&& board[1][1] == board[2][2] && board[0][0] != ' ')
//	{
//		return board[0][0];
//	}
//	if (board[0][2] == board[1][1]&& board[1][1] == board[2][0] && board[2][0] != ' ')
//	{
//		return board[0][2];
//	}
//	if (1 == IsFull(board, ROW, COL))
//	{
//		return 'Q';
//	}
//	return 'C';
//}
