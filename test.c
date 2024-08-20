#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'p';
//	printf("%c\n", ch);
//	const char* p = "abcdef";
//	//*p = 'w';
//	printf("%s\n", p);
//	return 0;
//}
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if (p1 == p2)
//	{
//		printf("p1==p2\n");
//	}
//	else
//		printf("p1!=p2");
//	if (arr1 == arr2)
//		printf("arr1==arr2");
//	else
//		printf(arr1 != arr2);
//
//	return 0;
//}
//int main()
//{
//	//int* arr1[6] = { 0 };
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", * (parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	//int* p1[10];
//	//int(*p2[10]);
//	/*int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);*/
//	int arr[10] = { 0 };
//	int* p = arr;
//	int (*p2)[10] = &arr;
//	return 0;
//}
//int main()
//{
//	char* arr[5] = { 0 };
//	char(*pc)[5] = &arr;
//	char ch = 'e';
//	char* p1 = &ch;
//	char** p2 = &p1;
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(*p+i));
//	}
//	return 0;
//}

//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");;
//	}
//}
//void print2(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}
//void print3(int* p)
//{
//
//}
//int main()
//{
//	int date[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	print3(date);
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	/*int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d", *pa);
//	printf("%p\n", &add);
//	printf("%p\n", add);*/
//	int(*pf)(int, int) = &add;
//	int ret=(*pf)(2, 3);
//	printf("%d", ret);
//
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//void calc(int(*pf)(int ,int))
//{
//	int a = 3;
//	int b = 5;
//	int ret = pf(a, b);
//	printf("%d\n", ret);
//}
//int main()
//{
//	calc(add);
//	return 0;
//}
//int test(const char* str)
//{
//	printf("test()\n");
//	return 0;
//}
//int main()
//{
//	//printf("%p\n", &test);
//	//printf("%p\n", test);
//	int(*pf)(const char*) = test;
//	printf("%d\n", sizeof(pf));
//	(*pf)("abc");
//	pf("abc");
//	return 0;
//}
//int main()
//{
//	(*(void(*)())0)();
//	void(*signal);
//	return 0;
//}

void menu()
{
	printf("*************************\n");
	printf("****1.add *****2.sub ****\n");
	printf("****3.mul *****4.div*****\n");
	printf("*********0.exit  ********\n");
	printf("*************************\n");
}
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	do
	{
		menu();
		printf("请选择:\n");
		scanf("%d", &input);
		
		switch (input)
		{
			
		case 1:
			printf("请输入两个操作数:\n");
			scanf("%d %d", &x, &y);
			ret = add(x, y);
			printf("%d\n", ret);
			break;
		case 2:
			printf("请输入两个操作数:\n");
			scanf("%d %d", &x, &y);
			ret = sub(x, y);
			printf("%d\n", ret);
			break;
		case 3:
			printf("请输入两个操作数:\n");
			scanf("%d %d", &x, &y);
			ret = mul(x, y);
			printf("%d\n", ret);
			break;
		case 4:
			printf("请输入两个操作数:\n");
			scanf("%d %d", &x, &y);
			ret = div(x, y);
			printf("%d\n", ret);
			break;
		case 0:
			printf("退出计算器\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}