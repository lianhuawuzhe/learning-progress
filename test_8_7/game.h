#pragma once //防止头文件重复加载

#include<stdio.h>
#include<time.h>
#include<stdlib.h>


#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS ROW+2

#define EASY_COUNT 10

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);

void DisplayBoard(char board[ROWS][COLS], int row, int col);

void setmine(char board[ROWS][COLS], int row, int col);

void Find(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);