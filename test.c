#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int test()
//{
//	int a = 3;
//	if (a == 3)
//		return 0;
//	else
//		return 1;
//
//}
//int main()
//{
//	int r = test();
//	prntf("%d\n", r);
//
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	if (5 == a)
//		printf("hi\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("奇数");
//	else
//		printf("no\n");
//}

//int main()
//{
//	int a = 0;
//	while (a < 100)
//	{
//		a++;
//		if (a % 2 == 1)
//			printf("%d\n", a);
//	}
//
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d\n", &day);
//	//if (1 == day)
//		//printf("星期1");
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday");
//		break;
//	case 6:
//	case 7:
//		printf("weekend");
//		break;
//	default:
//		printf("选择错误");
//		break;
//
//	}
//	return 0;
//}
// 

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++;
//			break;
//		}
//	case 4:
//		m++;
//			break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		printf("%d\n", a);
//		a++;
//	}
//
//	return 0;
//}

int main()
{
	int i = 1;
	while (i <= 10)
	{
		i++;
		if (i == 5)
			//break;
			continue;
		printf("%d", i);
	}
	return 0;
}


