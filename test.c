#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a = 0;
//	printf("%d", sizeof a);
//	printf("%d", sizeof );
//
//	return 0;
//}
//void test1(int arr[])
//{
//
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof (arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//int main()
//{
//	if (3.0 == 5.0)
//	{
//
//	}if("abc"=="abcdef")
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("%d", c);
//	//if(c)
//	return 0;
//
//}
//leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 0;
//	int max = (a > b) ? a : b;
//	if (a > 5)
//		b = 3;
//	else
//		b = -3;
//	(a > 5) ? (b = 3) : (b = -3);
//	b = (a > 5 ? 3 : -3);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	arr[7] = 8;
//	7[arr] = 9;
//	return 0;
//}
//int add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	return 0;
//}

//struct stu
//{
//	char name[20] ;
//	int age;
//	double score;
//};
//void set_stu(struct stu* ps)
//{
//	/*strcpy((*ps).name, "lianhua");
//	(*ps).age = 18;
//	(*ps).score = 100.0;*/
//	strcpy(ps->name, "lianhua");
//	ps->age = 20;
//	ps->score = 100.0;
//}
//void print_stu(struct stu ss)
//{
//	printf("%s %d %lf", ss.name, ss.age, ss.score);
//}
//int main()
//{
//	struct stu s = { 0 };
//	set_stu(&s);
//	print_stu(s);
//
//	return 0;
//}

//int main()
//{
//	//3 + 5 / 2;	
//	char a = 5;
//	//000000000000000000000000000000101
//	char b = 126;
//	//000000000000000000000000001111110
//	//111111111111111111111111110000001
//	//111111111111111111111111110000011
//	//111111111111111111111111110000011
//	//111111111111111111111111110000010
//	//100000000000000000000000001111101
//	//111111111111111111111100000000010
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}
////int main()
////{
////	char c = -1;
////
////	return 0;
////}

//int main()
//{
//	char a = 0xb6;//10110110
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(-c));
//	printf("%u\n", sizeof(-c));
//
//	return 0;
//}

//int main()
//{
//	//3 + 2 * 4 + 5;
//	int c = 2;
//	int d=c + --c;
//	printf("%d", d);
//	return 0;
//}

//int fun()
//{
//	static int count = 1;
//	return 0;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d", answer);
//	return 0;
//}
int main()
{
	int a = 1;
	int b = (++a) + (++a) + (++a);
	printf("%d", b);
	return 0;
}