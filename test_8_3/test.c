#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "game.h"
void menu()
{
	printf("*******************************\n");
	printf("********1.play  0.exit ********\n");
	printf("*******************************\n");
}


void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board,ROW,COL);
	DisplayBoard(board,ROW,COL);
	while (1)
	{
		PlayerMove(board,ROW,COL);
		ret = IsWin(board, ROW, COL); 
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		
		CmputerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL); 
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("��Ӯ��");
	}
	else if(ret=='#')
	{
		printf("����Ӯ��");
	}
	else
	{
		printf("ƽ��");
	}
}


int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;

		}
	} while (input);

	return 0;
}