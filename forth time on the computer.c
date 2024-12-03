#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void sort1(int* p)
//{
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		int j = 0;
//		for (j = 0; j <9 - i; j++)
//		{
//			if (*(p+j)>*(p+j+1))
//			{
//				int t = 0;
//				t = *(p+j);
//				*(p+j) = *(p +j+1);
//				*(p + 1+j) = t;
//			}
//		}
//	}
//}

//void sort2(int* p)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 9; i++)
//	{
//		int min = i;
//		for (j = i + 1; j < 10; j++)
//		{
//			if (*(p + min) > *(p + j))
//			{
//				min=j;//保存最小数的下标
//			}
//		}
//		if (min != i)
//		{
//			int t = 0;
//			t = *(p + min);
//			*(p + min) = *(p + i);
//			*(p + i) = t;
//		}
//	}
//}
//int main()
//{
//	printf("请输入10个整数：");
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//sort1(arr);//起泡法
//	sort2(arr);
//	printf("他们按照从小到大排列是：");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include <string.h>
//
//void sort(char** p1,char** p2, char** p3)
//{
//    char* p4 = NULL;
//    if (strcmp(*p1, *p2) > 0)
//    {
//        p4 = *p1;
//        *p1 = *p2;
//        *p2 = p4;
//    }
//    if (strcmp(*p1, *p3) > 0)
//    {
//        p4 = *p1;
//        *p1 = *p3;
//        *p3 = p4;
//    }
//    if (strcmp(*p2, *p3) > 0)
//    {
//        p4 = *p2;
//        *p2 = *p3;
//        *p3 = p4;
//    }
//}
//int main()
//{
//	char str1[100] = { 0 };
//	char str2[100] = { 0 };
//	char str3[100] = { 0 };
//	printf("请输入三个字符串：\n");
//	fgets(str1, 100, stdin);
//	fgets(str2, 100, stdin);
//	fgets(str3, 100, stdin);
//    char* p1 = str1;
//    char* p2 = str2;
//    char* p3 = str3;
//    sort(&p1, &p2, &p3);
//    
//   //sort(&str1, &str2, &str3);
//	printf("按照由小到大顺序输出是：\n");
//	printf("%s", p1);
//	printf("%s", p2);
//	printf("%s", p3);
//   /* printf("%s", str1);
//    printf("%s", str2);
//    printf("%s", str3);*/
//	return 0;
//}





//void my_scanf(int *p)
//{
//    printf("请输入10个整数：");
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &p[i]);
//    }
//}
//void process(int* p)
//{
//    int max = 0;
//    int i = 0;
//    int min = 0;
//    for (i = 0; i<10; i++)
//    {
//        if (p[max] < p[i])
//        {
//            max = i;
//        }
//    }
//    for (i = 0; i < 10; i++)
//    {
//        if (p[min] > p[i])
//        {
//            min = i;
//        }
//    }
//    if (max == 0)
//    {
//        int x = *(p + min);
//        *(p + min) = *p;
//        *p = x;
//        max = min;
//        int y = *(p + 9);
//        *(p + 9) = *(p + max);
//        *(p + max) = y;
//    }
//    else
//    {
//        int x = *(p + min);
//        *(p + min) = *p;
//        *p = x;
//        int y = *(p + 9);
//        *(p + 9) = *(p + max);
//        *(p + max) = y;
//    }
//}
//void my_printf(int* p)
//{
//    int i = 0;
//    printf("排序后的10个数是：");
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", p[i]);
//    }
//}
//int main()
//{
//    int arr[10] = { 0 };
//    my_scanf(arr);
//    process(arr);
//    my_printf(arr);
//    return 0;
//}
//
//

#include<string.h>
//int cacu(char* p)
//{
//	int i = 0;
//	for (i = 0; *(p+i) != 0; i++);
//	return i;
//	
//}
//
//int main()
//{
//	printf("请输入一个字符串：");
//	char str[100] = { 0 };
//	fgets(str, 100, stdin);
//	str[strcspn(str, "\n")] = '\0';
//	int ret= cacu(str);
//	printf("该字符串长度是：%d\n", ret);
//	printf("该字符串长度是：%d", strlen(str));
//	return 0;
//}








//#include <string.h>
//#include<stdio.h>
//void sort(char (*p1)[100], char (*p2)[100], char (*p3)[100])
//{
//    char str[100];
//    char (*p4)[100] = &str;
//    if (strcmp(*p1, *p2) > 0)
//    {
//        p4 = *p1;
//        *p1 = *p2;
//        *p2 = p4;
//    }
//    if (strcmp(*p1, *p3) > 0)
//    {
//        p4 = *p1;
//        *p1 = *p2;
//        *p2 = p4;
//    }
//    if (strcmp(*p2, *p3) > 0)
//    {
//        p4 = *p1;
//        *p1 = *p2;
//        *p2 = p4;
//    }
//}
//int main()
//{
//    char str1[100] = { 0 };
//    char str2[100] = { 0 };
//    char str3[100] = { 0 };
//    printf("请输入三个字符串：\n");
//    fgets(str1, 100, stdin);
//    fgets(str2, 100, stdin);
//    fgets(str3, 100, stdin);
//    /* char* p1 = str1;
//     char* p2 = str2;
//     char* p3 = str3;
//     sort(&p1, &p2, &p3);*/
//
//    sort(&str1, &str2, &str3);
//    printf("按照由小到大顺序输出是：\n");
//    /*printf("%s", p1);
//    printf("%s", p2);
//    printf("%s", p3);*/
//    printf("%s", str1);
//    printf("%s", str2);
//    printf("%s", str3);
//    return 0;
//}


//void part_copy(char*p,char*p1)
//{
//	int m = 0;
//	printf("请输入m:");
//	scanf("%d", &m);
//	int i = 0;
//	for (i = 0; *(p + m - 1 + i)!=0; i++)
//	{
//		*(p1 + i) = *(p + m - 1+i);
//	}
//	*(p1 + i) = '\0';
//	
//}
//int main()
//{
//	char str[] = "i love your sister";
//	char str1[100] = { 0 };
//	part_copy(str,str1);
//	printf("得到的字符串是：%s", str1);
//	return 0;
//}
// 
// 
//int a = 0;//大写
//int b = 0;//小写
//int c = 0;//空格
//int d = 0;//数字
//int e = 0;//其他字符
//void cacu(char* p,int x)
//{
//	int i = 0;
//	for (i = 0; i < x ; i++)
//	{
//		if (p[i] == 32)
//			c += 1;
//		else if ((p[i] >= 65 && p[i] <= 90))
//			a += 1;
//		else if (p[i] >= 97 && p[i] <= 122)
//			b += 1;
//		else if (p[i]  >47&& p[i] <58)
//			d += 1;
//		else 
//	        e += 1;
//		 
//	 }
//}
//int main()
//{
//	char str[100] = { 0 };
//	printf("请输入一个字符串：");
//	fgets(str, 100, stdin);
//	str[strcspn(str, "\n")] = '\0';
//	int length = strlen(str);
//	cacu(str,length);
//	printf("大写字母有%d个，小写字母有%d个，空格有%d个,数字有%d个，其他字符有%d个", a, b, c, d, e);
//	return 0;
//}


//void nixu(int* p,int n)
//{
//	int i = 0;
//	for (i = 0; i < (n - 1) / 2; i++)
//	{
//		int j = n - 1 - i;
//		int t = *(p + i);
//		*(p + i) = *(p + j);
//		*(p + j) = t;
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入要输入数的个数n:");
//	scanf("%d", &n);
//	int arr[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	nixu(arr,n);
//	printf("逆序排列是：");
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
// 
// 
// 
// 
// 
//int my_strcmp(char* p1, char* p2,int x,int y)
//{
//	int i = 0;
//	for (i = 0; i < x && i < y; i++)
//	{
//		if (*(p1 + i) > *(p2 + i))
//			return (*(p1 + i) - *(p2 + i));
//		if (*(p1 + i) < *(p2 + i))
//			return (*(p1 + i) - *(p2 + i));
//	}
//	if (x == y)
//		return 0;
//	if (x > y)
//		return *(p1 + i);
//	if (x < y)
//		return -*(p2 + i);
//}
//int main()
//{
//	char s1[99] = { 0 };
//	char s2[99] = { 0 };
//	char* p1 = s1;
//	char* p2 = s2;
//	printf("请输入两个字符串:\n");
//	fgets(p1, 99, stdin);
//	fgets(p2, 99, stdin);
//	p1[strcspn(p1, "\n")] = '\0';
//    p2[strcspn(p2, "\n")] = '\0';
//	int x = strlen(p1);
//	int y = strlen(p2);
//	printf("%d", my_strcmp(p1, p2,x,y));
//	return 0;
//}

//void my_copy(char form[], char to[])
//{
//    char* p1 = form;
//    char* p2 = to;
//    while (*p2++ = *p1++);
//}
//int main()
//{
//    char str1[] = "i am a student";
//    char str2[] = "i am from china";
//    my_copy(str1, str2);
//    printf("%s\n", str1);
//    printf("%s", str2);
//    return 0;
//}

void my_copy(char *p1, char *p2)
{
	while (*p2++ = *p1++);
}
int main()
{
	char *p1 = "i am a student";
	char str[]="i am from china";
	char* p2 = str;
	my_copy(p1, p2);
	printf("%s\n", p1);
	printf("%s", p2);
	return 0;
}
