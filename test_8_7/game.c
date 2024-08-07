#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------ɨ����Ϸ-----\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);

		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------ɨ����Ϸ-----\n");
}

void setmine(char board[ROWS][COLS], int row, int col) 
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_count(char board[ROWS][COLS], int x, int y)
{
	return
		board[x - 1][y - 1] +
		board[x - 1][y] +
		board[x - 1][y + 1] +
		board[x][y - 1] +
		board[x][y + 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
		board[x + 1][y + 1] - 8 * '0';
}
void Find(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;

	int win = 0;
	while (win<row*col- EASY_COUNT)
	{
		printf("������Ҫ�Ų�����꣺\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("�������ѱ��Ų飬�����ظ�");
			}
			else
			{
				if (mine[x][y] == '1')
				{
					printf("�˼����㱻ը����\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else
				{
					win++;
					int count = get_count(mine, x, y);
					show[x][y] = count + '0';
					DisplayBoard(show, ROW, COL);

				}
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("�ϵǣ���Ӯ��\n");
		DisplayBoard(mine, ROW, COL);


	}
}