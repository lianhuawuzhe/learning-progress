#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void test(int n)
//{
//	int num = 10;
//	int arr[30];
//	if (n <= 10000)
//		test(n + 1);
//}
//int main()
//{
//	test(1);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n)
//	{
//		default:
//			break;
//		case 1:
//			printf("hihi\n");
//			break;
//		case 2:
//			printf("haha\n");
//			break;
//	}
//}


//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1:b = 30;
//	case 2:b = 20;
//	case 3:b = 16;
//	default:b = 0;
//
//	}
//	return 0;
//}
//void swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		/*tmp = a;
//		a = b;
//		b = tmp*//*;*/
//		swap(&a, &b);
//	}
//	if (a < c)
//	{
//		/*tmp = a;
//		a = c;
//		c = tmp;*/
//		swap(&a, &c);
//	}
//	if (b < c)
//	{
//		/*tmp = b;
//		b = c;
//		c = tmp;*/
//		swap(&b, &c);
//	} 
//	printf("%d %d %d",a, b, c);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	scanf("%d %d", &n, &m);
//	for (i = n; i >= 1; i--)
//	{
//		if (n % i == 0 && m % i == 0)
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	while(a%b)
//	{
//		int c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	scanf("%d %d", &a, &b);
	for (i = a; i >= a; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			printf("%d", i);
			break;
		}
	}
	return 0;
}