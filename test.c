#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void swap(int*p1,int*p2)
//{
//	int a = *p1;
//	*p1 = *p2;
//	*p2 = a;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int* p1 = &a;
//	int* p2 = &b;
//	scanf("%d %d", p1, p2);
//	if (a > b)
//		swap(p1, p2);
//	printf("max=%d,min=%d", b, a);
//	return 0;
//}
//void swap(int* p1, int* p2)
//{
//	int* p = NULL;
//	p = p1;
//	p1 = p2;
//	p2 = p;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int* p1 = &a;
//	int* p2 = &b;
//	scanf("%d %d", p1, p2);
//	if (a < b)
//	{
//		swap(p1, p2);
//	}
//	printf("max=%d,min=%d", *p1, *p2);
//	return 0;
//}
//void swap(int* p4, int* p5)
//{
//	int p = 0;
//	p = *p4;
//	*p4 = *p5;
//	*p5 = p;
//}
//void sort(int* p1, int* p2, int* p3)
//{
//	if (*p1 > *p2)
//		swap(p1, p2);
//	if (*p2 > *p3)
//		swap(p2, p3);
//	if (*p1 > *p2)
//		swap(p1, p2);
//}
//int main()
//{
//	int a, b, c;
//	int* p1 = &a, * p2 = &b, * p3 = &c;
//	scanf("%d %d %d", p1, p2, p3);
//	sort(p1, p2, p3);
//	printf("%d %d %d", *p1, *p2, *p3);
//	return 0;
//}
//void sort(int* p,int n)
//{
//	int i = 0;
//	int t = 0;
//	int m = (n - 1) / 2;
//	for (i = 0; i < m; i++)
//	{
//		t = *(p + i);
//		*(p + i) = *(p + n - i - 1);
//		*(p + n - i - 1) = t;
//	}
//}
//int main()
//{
//	int i = 0;
//	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	sort(a, 10);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(a + i));
//	}
//	return 0;
//}


//int main(void)
//{
//	int* p, array[3] = { 5,6,7 }, a, b, c;
//	p = array;
//	a = sizeof(p); 
//	b = sizeof(&array[0]);
//	c = sizeof(array);  
//	printf("%10d,%10d,%10d\n", p, &array[0], array);
//	printf("%10d,%10d,%10d", a, b, c);
//	return 0;
//}

//void sort(int x[], int n)
//{
//	int i, j, k, t;
//	for (i = 0; i < n - 1; i++)
//	{
//		k = i;
//		for (j = i + 1; j < n; j++)
//			if (x[j] < x[k])   k = j;//找到i之后的最小值并赋给k
//		if (k != i)
//		{
//			t = x[i];
//			x[i] = x[k];
//			x[k] = t;
//		}
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int a[10] = { 0 };
//	printf("请输入十个整数：");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", a+i);
//	}
//	sort(a, 10);
//	printf("排序后的数组是：");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//	return 0;
//}
//void my_double(int* p, int n)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) *= 2;
//	}
//}
//int main()
//{
//	int a[10] = { 0 };
//	int* p = a;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", p + i);
//	}
//	my_double(p, 10);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	return 0;
//}


//int main()
//{
//	char str[14] = "i love china";
//	printf("%s\n", str);
//	char* p = str;
//	printf("%s", p);
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//    // Declare and initialize the string
//    char str[] = "i love china";
//
//    // Print the string using the array
//    printf("%s\n", str);
//
//    // Declare a pointer p and point it to the first character of str
//    char* p = str;
//
//    // Print the string using the pointer
//    printf("%s\n", p);
//
//    return 0;
//}

//int main()
//{
//	char a[] = "house";
//	char* b = a;
//	b[2] = 'r';
//	printf("%s", b);
//	return 0;
//}

//int main()
//{
//	char a[] = "i am lianhua";
//	char b[30] = { 0 };
//	char* p1 = a;
//	char* p2 = b;
//	int i = 0;
//	for (i =0; *(p1+i) != '\0'; i++)
//	{
//		*(p2 + i) = *(p1 + i);
//	}
//	*(p2 + i) = '\0';
//	printf("%s\n", p1);
//	printf("%s", p2);
//	return 0;
//}

int main()
{

	return 0;
}