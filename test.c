#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total+=empty / 2;
//		empty=empty / 2 + empty % 2;
//	}
//
//	printf("%d\n", total);
//	return 0;
//}
//int x = 1;
//do {
//	printf("%2d\n", x++);
//
//} while (x--);
//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//int main()
//{
//	test();
//	printf("%d", a);
//	return 0;
//}
//int a = 0, c = 0;
//do {
//	--c;
//	a = a - 1;
//
//}while(a>0)
//for (x = 0, y = 0; (y = 123) && (x < 4); x++)
//	;
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a > b ? a : b);
//	while (1)
//	{
//		if (m % a == 0 && m % b == 0)
//		{
//			break;
//		}
//		m++;
//	}
//	printf("%d", m);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//int m = (a > b ? a : b);
//	int i = 1;
//	/*for (i = 1;i>=1; i++);
//	{
//		if ((i * a) % b == 0)
//		{
//			break;
//		}
//	}*/
//	while ((a * i) % b)
//	{
//		i++;
//	}
//	printf("%d", i * a);
//	return 0;
//}
#include<assert.h>
void reverse(char* left, char* right)
{
	assert(left);
	assert(right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = *left;
		left++;
		right--;
	}
}
int main()
{
	char arr[101] = { 0 };
	gets(arr);
	/*int left = 0;
	int right=sizeof*/
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	char* start = arr;
	while (*start!='\0')
	{
		char* end = start;
		while (*end != ' ')
		{
			end++;
		}
		reverse(start, end - 1);
		end++;
		start = end;
	}

	return 0;
}