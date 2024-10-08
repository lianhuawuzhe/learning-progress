#pragma once //防止头文件重复加载
#define ROW 3
#define COL 3
#include<stdlib.h>
#include<time.h>

void InitBoard(char board[ROW][COL], int row, int col);

void DisplayBoard(char board[ROW][COL],int row, int col);

void PlayerMove(char board[ROW][COL],int row,int col);

void CmputerMove(char board[ROW][COL],int row,int col);

char IsWin(char board [ROW][ COL],int row,int col);
