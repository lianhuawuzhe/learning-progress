#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int add(int x, int y)
//{
//	return x + y;
//	{
//		int num = 2022;
//	}
//}
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++) 
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d	", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//
//	return 0;
//}

//void test(int arr[])
//void test(int *px,int *py)
//{
//	*px = 3;
//	*py = 4;
//	/*arr[0] = 3;
//	arr[1] = 4*/
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//int arr[2] = { 0 };
//	 //test(arr);
//	test(&a, &b);
//	 return 0;
//}

//int main()
//{
//	int arr[10];
//	char ch[5] = { 'i','s' };
//	double data[20];
//	int n = 10;
//	scanf("%d", &n);
//	int arr2[n];
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i,&arr[i]);
//	}
//	for (i = sz-1; i>=0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
int main()
{
	//int arr1[][4] = {{1,2,3,4},{1,2} };
	//char arr2[5][10];
	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
	//printf("%d\n", arr[2][0]);
	int a = 0;

	for (a = 0; a < 3; a++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			scanf("%d",&arr[a][j]); 
		}
		
	}
	
	for (a = 0; a < 3; a++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[a][j]);
		}
		printf("\n");
	}
	return 0;
}