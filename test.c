#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void weq()
//{
//	printf("hihi\n");
//}
//void rty()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		weq();
//	}
//}
//int main()
//{
//	rty();
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x +y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	return 0;
//}


//int  main()
//{
//	/*int len = strlen("abcdef");
//	printf("%d\n", len);
//
//	printf("%d\n", strlen("abcdef"));*/
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}


//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	int n = test();
//	return 0;
//}

//void test(void)
//{
//	printf("hihi\n");
//}
//int main()
//{
//	test(100);
//	test();
//	return 0;
//}


//int Add(int, int);
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum=Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x+y;
//}


void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	/*while (num)
	{
		printf("%d", num % 10);
		num = num / 10;
	}*/
	print(num);

	return 0;
}