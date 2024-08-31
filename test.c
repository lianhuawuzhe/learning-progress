#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//#define mon 1;
//#define tues;
//enum day
//{
//	mon=1,
//	tues,
//	wed,
//	thur,
//	fri,
//	sat,
//	sun,
//
//};
//
//int main()
//{
//	enum day d = fri;
//	printf("%d\n", d);
//	printf("%d\n", mon);
//	printf("%d\n", tues);
//	printf("%d\n", wed);
//
//	return 0;
//}
//
////enum option
////{
////	exit,
////	add,
////	del,
////	search,
////
////};
//
//case add:


//union un
//{
//	int a;
//	char c;
//
//};
//
//int main()
//{
//	union un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.a));
//	printf("%p\n", &(u.c));
//
//	return 0;
//}

//int check()
//{
//	/*int a = 1;
//	return *(char*)&a;*/
//
//	union un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	//01 00 00 00 Ð¡¶Ë
//	//00 00 00 01
//	int ret = check();
//	if (ret == 1)
//	{
//		printf("Ð¡¶Ë");
//	}
//	else
//		printf("´ó¶Ë");
//	return 0;
//}


//union un
//{
//	char arr[9];
//	int i;
//};
//int main()
//{
//	printf("%d\n", sizeof(union un));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int arr[10];
//	return 0;
//}
#include<errno.h>
#include<string.h>
#include<stdlib.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p=(int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//
//		printf("%d ", *(p + i));
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p =(int*) calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	int*ptr=(int*)realloc(p, 80);
//	if (ptr != NULL)
//		p = ptr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		p[i] = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int m = 0;
//	while (scanf("%d %d", &n, &m) == 2)
//	{
//		/*int min = n < m ? n : m;
//		int max = n > m ? n : m;
//		int i = min;
//		int j = max;
//		while (1)
//		{
//			if (n% i == 0 && m % i == 0)
//				break;
//			i--;
//		}
//		while (1)
//		{
//			if (j % m == 0 && j % n == 0)
//				break;
//			j++;
//		}*/
//		int i = n;
//		int j = m;
//		int r = 0;
//		while (r=i%j)
//		{
//			i = j; 
//			j = r;
//
//		}
//		
//		printf("%d", m*n/j+ j);
//	}
//	return 0;
//}

//int main()
//{
//	int n =0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i==0 || i == n - 1 || j == 0 || j == n - 1)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//struct s
//{
//	int n;
//	int arr[];
//};
//int main()
//{
//
//	int sz = sizeof(struct s);
//	printf("%d", sz);
//}
//struct s
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct s* ps = (struct s*)malloc(sizeof(struct s));
//	if (ps == NULL)
//		return 1;
//	ps->n = 100;
//	(ps->arr) = (int*)malloc(40);
//
//
//
//	return 0;
//}

//FILE

//int main()
//{
//	FILE*pf=fopen("mo.txt", "r");
//	if (pf == NULL)
//
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fputc('a', pf);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//struct s
//{
//	char arr[10];
//	int age;
//	float score;
//};
//int main()
//{
//	struct s S = { "lianhua",25,50.5f };
//	FILE* pf = fopen("test,txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//}

int main()
{

	return 0;
}