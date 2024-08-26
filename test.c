#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
//int my_strcmp(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	while (*p1 == *p2)
//	{
//		if (*p1 == '0')
//			return 0;
//		p1++;
//		p2++;
//	}
//	/*if (*p1 > *p2)
//	
//		return 1;
//	
//	else
//		return -1;*/
//
//	return (*p1 - *p2);
//}
//int main()
//{
//	char arr1[20] = "zhangsan";
//	char arr2[] = "zhangsanfeng";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret < 0)
//		printf("<");
//	else if(ret>0)
//		printf(">");
//	else
//		printf("==");
//	return 0;
//}

//int main()
//{
//	char arr[4] = { 0 };
//	strcpy(arr, "hello");
//	printf("%s", arr);
//	return 0;
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 5);
//	printf("%s", arr1);
//
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abc";
//	int ret = strncmp(arr1, arr2, 3);
//	printf("%d", ret);
//	if (ret == 0)
//	{
//		printf("==");
//	}
//	return 0;
//}

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = str1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1!='\0'&&*s2!='\0'&& * s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)p;
//		}
//		p++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char email[] = "habshja@jdj.com";
//	char substr[] = "jdj";
//	char*ret=my_strstr(email, substr);
//	if (ret == NULL)
//		printf("×Ó´®²»´æÔÚ");
//	else
//		printf("%s\n", ret);
//	return 0;
//}

//int main()
//{
//	const char *sep= "@.";
//	char email[] = "3518926591@qq.com";
//	char cp[30] = { 0 };
//	strcpy(cp, email);
//
//	char*ret=strtok(cp, sep);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//
//
//	return 0;
//}

//int main()
//{
//	/*printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));*/
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//
//	}
//	return 0;
//}

#include<ctype.h>

//int main()
//{
//	int a = isspace('w');
//	printf("%d\n", a);
//	int b = isdigit('0');
//	printf("%d\n", b);
//	return 0;
//}

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, 28);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	memcpy(arr2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest= *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//			
//
//		}
//	}
//}
//
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr1 + 2, arr1, 20);
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		printf("%d ", arr1[i]);
//		 }
//	return 0;
//}
// 
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,3,2 };
//	int ret=memcmp(arr1, arr2, 12);
//	printf("%d", ret);
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s",arr);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 40);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

#include<math.h>
int change(int *n)
{
	int i = 0;
	int sum = 0;
	while (*n )
	{
		int m = *n % 10;
		if (m % 2 == 0)
		{
			sum += 0 * pow(10, i);
			i++;
		}
		else
		{
			sum += 1 * pow(10, i);
			i++;
		}
		*n /= 10;
	}
	return sum;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret=change(&n);
	printf("%d", ret);
	return 0;
}