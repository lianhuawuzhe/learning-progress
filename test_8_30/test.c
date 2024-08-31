#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

enum option
{
	Exit,
	Add,
	Del,
	Search,
	Modify,
	Show,
	Sort,
};
void menu()
{
	printf("******************************\n");
	printf("*****1.add      2.del ********\n");
	printf("*****3.search   4.modify******\n");
	printf("*****5.show     6.sort********\n");
	printf("*****0.exit     **************\n");
	printf("******************************\n");
}

int main()
{
	int input = 0;
	contact con;
	initcontact(&con);


	do
	{
		menu();

		printf("ÇëÑ¡Ôñ£º\n");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			add(&con);
			break;
		case Del:
			del(&con);
			break;
		case Search:
			search(&con);
			break;
		case Modify:
			modify(&con);
			break;
		case Show:
			show(&con);
			break;
		case Sort:
			sort(&con);
			break;
		case Exit:
			save(&con);
			destory(&con);
			printf("ÍË³ö³ÌÐò\n");
			break;
		default:
			printf("Ñ¡Ôñ´íÎó\n");
		}
	} while (input);
}