#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("a=%d b=%d\n", a,b);
//	printf("a=%d b=%d\n", b,a);
//
//	return 0;
//}


//int Add(int x, int y)
//{
//    int z = 0;
//    z = x + y;
//    return z;
//}
//int main()
//{
//	int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int c = Add(a, b);
//    printf("%d\n", c);
//    return 0;
//
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	//for (i = 100; i <= 200; i++)
//	for (i = 101; i <= 200; i+=2)
//
//	{
//		int flag = 1;
//		int j = 0;
//		//for (j = 2; j <= i - 1; j++)
//		for (j = 2; j <= sqrt(i); j++)
//
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("count=%d", count);

//

//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//
//	return 1;
//}
//
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//
//	return 0;
//}

int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//if (year % 4 == 0)
		//{
		//	if (year % 100 != 0)
		//	{
		//		printf("%d\n", year);
		//	}
		//}
		//else if (year % 400 == 0)
		//{
		//	printf("%d\n", year);
		//}
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			printf("%d ", year);
		}
	}
	return 0;
}