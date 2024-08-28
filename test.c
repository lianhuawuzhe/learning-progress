#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int judge(char arr1[], char arr2[])
//{
//	int len = strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		char tmp = arr1[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[len - 1] = tmp;
//		if (strcmp(arr2, arr1) == 0)
//		{
//			return 1;
//		}
//	}
//}

//#include<string.h>
//int judge(char arr1[], char arr2[])
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//		return 0;
//	strncat(arr1, arr1, len1);
//	char*ret=strstr(arr1, arr2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret=judge(arr1, arr2);
//	if (ret == 1)
//		printf("ok");
//	else
//		printf("no");
//	return 0;
//}

//int main()
//{
//	int m = 0;//col
//	int n = 0;//row
//	scanf("%d %d", &n, &m);
//	int arr[10][10] = { 0 };
//	int i = 0; int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%2d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10][10];
//	int i = 0;
//	int j = 0;
//	int flag = 1;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				flag = 0;
//				goto end;
//			}
//		}
//	}
//end:
//	if (flag == 0)
//		printf("no");
//	else
//		printf("yes");
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	int flag1 = 0;
//	int flag2 = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (i > 0)
//		{
//			if (arr[i] > arr[i - 1])
//			{
//				flag1 = 1;
//			}
//			else if(arr[i] < arr[i - 1])
//			{
//				flag2 = 1;
//			}
//			else
//			{
//
//			}
//		}
//	}
//	if (flag1 + flag2 <= 1)
//	{
//		printf("sorted");
//	}
//	else
//	{
//		printf("unsorted");
//
//	}
//	return 0;
//}

//struct st
//{
//	char name[20];
//	int age;
//}s1,s2;

//struct
//{
//	int a;
//	char b;
//	float c;
//}x; 
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20],*p;
//int main()
//{
//	p = &x;
//	return 0;
//}


//struct note
//{
//	int date;
//	struct note* next;
//};
//int main()
//{
//	sizeof(struct note);
//	return 0;
//}
//
//typedef struct
//{
//	int data;
//	note* next;
//}note;
//
//
//
//int main()
//{
//
//	return 0;
//}

//struct point
//{
//	int x;
//	int y;
//}p1={2,3};

int main()
{

}