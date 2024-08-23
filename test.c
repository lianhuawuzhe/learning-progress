#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//
//	int(*pf)(int, int) = &add;
//	int sum = (*pf)(2, 3);
//	int arr[10] = { 0 };
//	int a = 0;
//	int* pa = &a;
//	int(* parr)[10] = &arr;
//
//	return 0;
//}

//int main()
//{
//	int(*pf)(int, int);
//	int(*parr[4])(int, int) = {pf};
//
//	return 0;
//}

//int main()
//{
//
//	return 0;
//}
#include<string.h>
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));
	return 0;
}