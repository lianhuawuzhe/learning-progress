#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void bubble_sort(int arr[], int sz)
//{
//	int flag = 1;
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}

//int cmp_int(const void* e1, const void* e2)
//{
//	return  (*(int*)e1 - *(int*)e2);
//		
//
//}
//
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	//bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//#include<string.h>
//#include<stdlib.h>
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//int cmp_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age- ((struct stu*)e2)->age;
//}
//void test2()
//{
//	struct stu s[] = { {"lianhua",18},{"zhangsan",17},{"lisi",19} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_by_age);
//
//	//qsort(s, sz, sizeof(s[0]), cmp_by_name);
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//void qsort(void* base,
//	size_t num,
//	size_t width, 
//	int(* compare)(const void* e1, const void* e2));



//int main()
//{
//	int a = 10;
//	char* pa = &a;
//	void* pv = &a;
//	return 0;
//}

void swap(char* buf1, char** buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp=*buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;

	}
}
void bubble_sort(void*base,int sz,int width, int(*compare)(const void* e1, const void* e2))
{
	int flag = 1;
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j <sz-1-i ; j++)
		{
			if (cmp((char*)base + j * width),cmp((char*)base + (j +1)* width)>0)
			{
				swap(((char*)base + j * width), ((char*)base + (j + 1) * width), width);
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	test3();
	return 0;
}