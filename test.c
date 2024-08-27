#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i + j < n - 1)
//				{
//					printf("  ");
//				}
//				else
//				{
//					printf("* ");
//				}
//			}
//
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	double price = 0.0;
//	int m = 0;
//	int d = 0;
//	int flag = 0;
//	scanf("%d %d %d %d", &price, &m, &d, &flag);
//	if (m == 11 && d == 11)
//	{
//		price = price * 0.7 - flag * 50;
//	}
//	else if (m == 12 && d == 12)
//	{
//		price = price * 0.8 - flag * 50;
//	}
//	else
//	{
//		price = price  - flag * 50;
//
//	}
//	if(price<0.0)
//		printf
//
//	return 0;


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a < 6; a++)
//	{
//		for (b = 1; b < 6; b++)
//		{
//			for (c = 1; c < 6; c++)
//			{
//				for (d = 1; d < 6; d++)
//				{
//					for (e = 1; e < 6; e++)
//					{
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1)
//							)
//						{
//							if(a*b*c*d*e==120)
//							printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
//
//						}
//					}
//				}
//			}
//		}
//	}
//}

//int main()
//{
//	
//	int killer = 0;
//
//	for (killer = 'a'; killer < "e"; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c')
//			+ (killer == 'd') + (killer != 'd') == 3)
//			printf("%c", killer);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (i >=2 && j > 0)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%3d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include<string.h>
#include<assert.h>

//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}

//void left_move(char arr[], int k)
//{
	/*int i = 0;
	int len = strlen(arr);
	for (i = 0; i < k; i++)
	{
		char tmp = arr[0];
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[len - 1] = tmp;

	}*/
//	int len = strlen(arr);
//	k %= len;
//	reverse(arr, arr + k - 1);
//	reverse(arr + k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s", arr);
//	return 0;
//}
struct Point
{
	int x;
	int y;
};
struct Point find(int arr[3][3], int row, int col, int k)
{
	int x = 0;
	int y = col - 1;
	struct Point p = { -1,-1 };
	while (x<=row-1&&y>=0)
	{
		if (k < arr[x][y])
		{
			y--;
		}
		else if (k > arr[x][y])
		{
			x++;
		}
		else
		{
			p.x = x;
			p.y = y;
			return p;
		}
	}
	return p;
}
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 0;
	scanf("%d", &k);
	struct Point ret = find(arr, 3, 3, k);
	printf("%d %d", ret.x,ret.y);
	return 0;
}

//int main()
//{
//
//	return 0;
//}