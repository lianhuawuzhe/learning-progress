#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	/*int a = -7;
//	int b=a << 1;
//
//	printf("a=%d\n", a);
//	printf("b=%d", b);*/
//	int a = -7;
//	int b = a >> 1;
//	printf("a=%d\n", a);
//	printf("%b=%d", b);
//	return 0;
//}

//int main()
//{
//	int a = 3; //00000000000000000000000000000011
//	int b = -5;//10000000000000000000000000000101
//			   11111111111111111111111111111010
//			   11111111111111111111111111111011
//	           11111111111111111111111111111000
//	           10000000000000000000000000001000
//	int c = a ^ b;
//	printf("c=%d", c);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("a=%d,b=%d\n", a, b);
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = a | 0;
//	printf("%d", b);
//
//
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	a = a + 5;
//	a += 5;
//	a = a >> 1;
//	a >>= 1;
//	return 0;
//}
//int main()
//{
//	//int f = 3;
//	////if (f)
//	////{
//
//	////}
//	////if (!f)
//	////{
//
//	////}
//	////int b = -f;
//	//printf("%p", &f);
//	//int* p = &f;
//	int a = 0;
//	/*int n = sizeof(a);
//	int ret = sizeof(int );
//	printf("%d %d\n", n,ret);
//	int arr[5] = { 0 };
//	printf("%d", sizeof(arr));*/
//
//	printf("%d\n", ~a);
//	return 0;
//}

//int main()
//{
//	int a = 13;
//	a |= (1 << 4);
//	//a |= 2;
//	printf("%d\n", a);
//	a &= (~(1 << 4));
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	//int a = 3;
//	////int b = ++a;
//	//int b = a++;
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d", a);
//
//	return 0;
//}
int main()
{
	int a = (int)3.14;
	srand((unsigned int)time(NULL));
	printf("%d", a);
	return 0;
}