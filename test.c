#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//size_t
//int main()
//{
//	/*int a = 4;
//	int b = ++a;*/
//	char arr[] = { 'b','i','t' };
//	//char arr[] = "abcdef";
//	int len = strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//int main()
//{
//	if (strlen("abc") - strlen("abcdef")>0)
//		printf(">");
//	else
//		printf("<");
//	return 0;
//}
//int my_strlen(char arr[])
//{
//	int count = 0;
//	while (arr[count] != '\0')
//	{
//		count++;
//	}
//	return count ;
//}
//
//int main()
//{
//	char arr[] = "abceef";
//	int len=my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//int main()
//{
//	char name[20] = { 0 };
//	strcpy(name, "zhangsan");
//	printf("%s\n", name);
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	char arr[] = "bit";
//
//	return 0;
//}
//void my_strcpy(char*p1,char*p2)
//{
//	int i = 0;
//	int sz = 0;
//	while (*(p2 + i) != '\0')
//	{
//		i++;
//		sz++;
//	}
//
//	for (i = 0; i < sz; i++)
//		{
//			*(p1 + i) = *(p2 + i);
//		}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "hello";
//	strcat(arr1, "world");
//	printf("%s", arr1);
//	return 0;
//}
#include<assert.h>
char* my_strcat(char* dest,const char*src)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest!='\0')
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20 ]= "hello ";
	my_strcat(arr1, "world");
	return 0;
}