#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}
//i/*nt main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0;
//}*/

//void bubble_sort(int arr[])
//void bubble_sort(int arr[],int sz)
//
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for(j = 0;j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	printf("%p\n", &arr);
//	//printf("%d\n", n);
//	printf("%p\n", &arr+1);
//	printf("---------\n");
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("---------\n");
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	return 0;
//}

int main()
{
	int arr[3][4] = { 0 };

	int sz=sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
	/*int sz = sizeof(arr);
	printf("%d\n", sz);*/
	printf("%p\n", arr);
	printf("%p\n", arr + 1);

	return 0;
}