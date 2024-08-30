#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"
void menu()
{
	printf("******************************\n");
	printf("*****1.add      2.del ********\n");
	printf("*****3.search   4.modify******\n");
	printf("*****4.show     5.sort********\n");
	printf("*****0.exit     **************\n");
	printf("******************************\n");
}

int main()
{
	menu();
	int input = 0;
	contact con;
	initcontact(&con);


	do
	{
		menu;
		printf("ÇëÑ¡Ôñ£º\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			add(&con);
			break;
		case 2:
			del(&con);
			break;
		case 3:
			search(&con);
			break;
		case 4:
			modify(&con);
			break;
		case 5:
			show(&con);
			break;
		case 6:
			sort(&con);
			break;
		case 0:
			destory(&con);
			printf("ÍË³ö³ÌÐò\n");
			break;
		default:
			printf("Ñ¡Ôñ´íÎó\n");
		}
	} while (input);
}