#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	int i = 0;
//	FILE* pf = fopen("log.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return EXIT_FAILURE;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf,"file:%s i=%d\n",__FILE__, i);
//	} 
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	printf("%d\n", __STDC__);
//	return 0;
//}
//#define max 100
//#define str "hello bit"
//int main()
//{
//	printf("%d\n", max);
//	printf("%s\n", "hello bit");
//	return 0;
//}

//#define CASE break;case
//int main()
//{
//	switch ()
//	{
//	case 1:
//		break;
//	case 2:
//	CASE 3:
//
//
//	}
//	return 0;
//}
//#define sq(x) x*x
//int main()
//{
//
//	int r = sq(5);
//	printf("%d", r);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("the value of a is %d", a);
//
//}


//int main()
//{
//#if 1
//	printf("hehe\n");
//#endif
//	return 0;
//}

#include<stddef.h>
//struct s
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//#define OFFSETOF(type,m_name) (size_t)&(((type*)0)->m_name)
//int main()
//{
//	struct s S = { 0 };
//	//printf("%d", offsetof(struct s, c1));
//
//	printf("%d\n", OFFSETOF(struct s, c1));
//	printf("%d\n", OFFSETOF(struct s, i));
//	printf("%d\n", OFFSETOF(struct s, c2));
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//
//	}
//	return 0
//}

//int main()
//{
//	char arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int i = 0;
//	return 0;
//}

int main()
{
	char c;
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	return 0;
}