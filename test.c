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
		printf("�������\n");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶���\n");
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
		printf("��ѡ��;>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("������\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��");
			break;
		}
	} while (input);

	return 0;
}