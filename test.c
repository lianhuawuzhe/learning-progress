#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int tmp= arr1[i] ;
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//		
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}
void init(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
		arr[i] = 0;

}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0;i<sz;i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		right--;
//		left++;
//	}
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//unsigned int Add(unsigned int x, unsigned int y)
//{
//	return x + y;
//}
//int main()
//{
//	unsigned int x = 0;
//	unsigned int y = 0;
//	scanf("%d %d", &x, &y);
//	unsigned int ret=Add(x, y);
//	printf("%u\n", ret);
//	return 0;
//}

