#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <time.h>
#include<stdlib.h>
//void fun(int a[])
//{
//	printf("%zu\n", sizeof(a));
//}
//
//int main()
//{
//	int a[10] = { 0 };
//	printf("%zu\n", sizeof(a[1]));
//	fun(a);
//	return 0;
//}

void menu()
{
	printf("************************\n");
	printf("****** 1. play   *******\n");
	printf("****** 0. exit   *******\n");
	printf("************************\n");

}

void game()
{
	int guess = 0;
	//RAND_MAX;
	int ret = rand() % 100 + 1;
	//printf("%d\n", ret);
	
	while (1)
	{
		printf("请猜数字\n");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择;>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("猜数字\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择");
			break;
		}
	} while (input);

	return 0;
}