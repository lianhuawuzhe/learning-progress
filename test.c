#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a = 0;
//	int* pi = &a;
//	float* pf = &a;
//	return 0;
//}
//int main()
//{
//	int* p;
//	*p = 10;
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	return  &a;
//}
//int main()
//{
//	int* p = test();
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	return 0;
//	//int* p2 = NULL;
//	if (p != NULL)
//	{
//		*p = 100;
//	}
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	print("haha\n");
//	if (p != NULL)
//		printf("%d", *p);
//	return 0;
//
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*for (i = 0; i < sz; i++)
//	{
//		arr[i] = 1;
//	}*/
//
//	/*int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		*p = 1;
//		p++;
//	}*/
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d", &arr[9] - &arr[0]);
//
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '0')
//	{
//		count++;
//		str++;
//
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - start);
//}
//int main()
//{
//	int len=my_strlen("abcdef");
//	printf("%d", len);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	int sz=sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
//void test(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr, 10);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//*pa = 20;
//	int** ppa = &pa;
//	**ppa = 20;
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//int arr[10];
//	int* parr[10] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(parr[i]));
//	}
//
//	return 0;
//}
//{
	/*int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}*/

	//int arr1[4] = { 1,2,3,4 };
	//int arr2[4] = { 2,3,4,5 };
	//int arr3[4] = { 3,4,5,6 };
	//int*parr[3]={ arr1, arr2, arr3 };
	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%d ", parr[i][j]);
	//	}
	//	printf("\n");
	//}
//	return 0;
//}
//struct Peo
//{
//	char name[20];
//	int high;
//	char tele[12];
//	char sex[5];
//
//}p3,p4;
//struct st
//{
//	struct Peo p;
//	int num;
//	float f;
//};
//
//void print2(struct Peo* sp)
//{
//	printf("%s %d %s %s", sp->name, sp->high);
//}
//void print1(struct Peo p)
//{
//	printf("%s %d %s",p.name);
//}
//int main()
//{
//	struct Peo p1 = {"liamhua",168,"18166667777","male"};
//	struct st s = { {"lili",1212131,"242423","male"},100,3.14f };
//	printf("%s %d %s %s\n", p1.name, p1.high, p1.tele, p1.sex);
//	print1(p1);
//	print2(&p1);
//	                                                                  
//	return 0;
//}
//int count(unsigned int n)
//{
//	//int count = 0;
//	//while (n)
//	//{
//	//	if ((n % 2) == 1)
//	//	{
//	//		count++;
//	//	}
//	//	n /= 2;
//	//}
//	//return count;
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int count(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int n = count(a);
//	printf("%d", n);
//	return 0;
//}

//int differ(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//			count++;
//	}
//	return count;
//}
//int differ(int m, int n)
//{
//	int count = 0;
//	int ret = m ^ n;
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	return 0;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = differ(m, n);
//	printf("%d", ret);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//
//	}
//	printf("\n");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (scanf("%d",&n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//
//					printf("*");
//				}
//				else if (i + j == n - 1)
//				{
//					printf("*");
//				}
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

int leap(int y)
{
	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
}
int main()
{
	int y = 0;
	int m = 0;
	int d = 0;
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	while (scanf("%d %d", &y, &m) == 2)
	{
		int d = days[m];
		if (leap(y) == 1&&(m==2))
		{
			d++;
		}
		printf("%d\n", d);
	}
	return 0;
}