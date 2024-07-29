#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int fac(int n)
//{
//	/*if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);*/
//
//	if (n <= 1)
//		return 1;
//	else
//	{
//		int j = 0;
//		int df = 1;
//		for (j = 1; j <= n; j++)
//		{
//			df = j * df;
//		}
//		return df;
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d", ret);
//
//	return 0;
//}
//int count = 0;
//
//int Fib(n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//int ret=Fib(n)
//	printf("%d\n", Fib(n));
//	printf("%d\n", count);
//}
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", Fib(n));
	//printf("%d\n", count);
}

