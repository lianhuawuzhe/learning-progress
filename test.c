#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int fun(char x, float y)
//{
//	;
//}
//int main()
//{
//	double a = 1.234e04;
//	printf("%f", a);
//	fun(32, 1);
//	return 0;
//}
//int main()
//{
//	int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		j = i * 10 + 6;
//		if (j % 3 != 0)
//			continue;
//		printf("%d ", j);
//	}
//	return 0;
//}

//void delnum(char* s)
//{
//	int i, j;
//	for (i = 0,j=0; s[i] != '\0'; i++)
//	{
//		if (!(s[i]>=48&&s[i]<=57))
//		{
//			s[j] = s[i];
//			j++;
//		}
//	}
//	s[j] = '\0';
//}
//int main()
//{
//	char item[80] = "";
//	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®£º");
//	gets(item);
//	delnum(item);
//	printf("%s\n", item);
//	return 0;
//}

//int main()
//{
//	/*int m = 5;
//	int y = 2;
//	y += y -= m = y;
//	printf("%d ", m);
//	printf("%d", y);*/
//	/*int s = 6;
//	printf("%d", s % 2 + (s + 1) % 2);*/
//	int a = 0;
//	int b = 0;
//	printf("%d", (a = 2, b = 5, a++, ++b, a + b));
//	return 0;
//}

//#define N 5
//int main() {
//	void swap(int p, int q);
//	int max2(int x, int y);
//	void swapArray(int array[], int i, int j);
//	int a = 20, b = 50, c = 30, m1, t1;
//	int num[N] = { 3,6,1,9,4 }, m2, i;
//	swap(a, b); printf("%d %d\n", a, b);
//	t1 = a; a = b; b = t1;
//	printf("%d %d\n", a, b);
//	m1 = max2(max2(a, b), c);
//	printf("%d\n", m1);
//	for (i = 1, m2 = num[0]; i < N; i++)
//		if (max2(m2, num[i]) > m2)
//			m2 = max2(m2, num[i]);
//	printf("%d\n", m2);
//	swap(num[0], num[1]);
//	for (i = 0; i < N; i++)
//		printf("%d", num[i]); printf("\n");
//	swapArray(num, 0, 1);
//	for (i = 0; i < N; i++)
//		printf("%d", num[i]);
//	return 0;
//}
//void swap(int p, int q) {
//	int t; t = p; p = q; q = t;
//}
//int max2(int x, int y) {
//	return(x > y ? x : y);
//}
//void swapArray(int array[], int i, int j) {
//	int t;
//	t = array[i];
//	array[i] = array[j];
//	array[j] = t;
//}

//void fun(int* b, int n, int* s) {
//	int i;
//	for (i = 0; i <= n; i++)
//		*s = *s + *(b + i);
//}
//int func(int a, int b, int* c) {
//	a++;
//	b = b + 2;
//	*c = a + b;
//	return b;
//}
//int main() {
//	int x = 1, y = 1, z = 1, a[] = { 1,2,3,4,5 };
//	fun(a, 4, &x);
//	printf("%d,%d,%d\n", x, y, z);
//	y = func(x, y, &z);
//	printf("%d,%d,%d\n", x, y, z);
//	fun(a, 3, &y);
//	printf("%d,%d,%d\n", x, y, z);
//	z = func(y, z, &x);
//	printf("%d,%d,%d\n", x, y, z);
//	fun(a + 1, 2, &z);
//	printf("%d,%d,%d\n", x, y, z);
//	x = func(z, x, &y);
//	printf("%d,%d,%d", x, y, z);
//	return 0;
//}
#include<string.h>
//int main()
//{
//	int a = 3, b = 100, * px = &a;
//	float c = 3.1415926;
//	char s[] = "WishGood\0Luck!", * py = s;
//	printf("%d\n", *px);
//	printf("b=%d\n", ++b);
//	printf("%4.2f\n", c);
//	printf("%s\n", py);
//	printf("%d\n", s[5] == *(py + 6));
//	printf("%d\n", sizeof(s));
//	printf("%d\n", strlen(s));
//	printf("%d", sizeof(s) - strlen(s));
//	return 0;
//}

//int main()
//{
//	char s[] = "i love china";
//	printf("%d ", strlen(s));
//	printf("%d", sizeof(s));
//	return 0;
//}

//int main()
//{
//	int a[6] = { 1,2,3,4,5,6 }, i, j, k, m;
//	for (i = 5; i >= 0; i--) 
//	{
//		k = a[5];
//		for (j = 4; j >= 0; j--)
//			a[j + 1] = a[j];
//		a[0] = k;
//		for (m = 0; m < 6; m++)
//			printf("%d", a[m]);
//		printf("\n");
//	}
//	return 0;
//}


//int main() 
//{
//	char s[100]; 
//	int c, i; 
//	scanf("%c", &c);
//	scanf("%d", &i);
//	scanf("%s", &s);
//	printf("%c,%d,%s\n", c, i, s);
//}

//int main()
//{
//	int x = 0;
//	int y = -1;
//	scanf("%d", &x);
//	if (x >= 0);
//	if (x > 0)y = 1;
//	else y = 0;
//	printf("%d", y);
//	return 0;
//}

//int main()
//{
//	int a = 1, b = 2, c = 2, t;
//	while (a < b < c) 
//	{
//		t = a; //t=1,t=2
//		a = b;//a=2,a=1
//		b = t;//b=1,b=2
//		c--; //c=1,c=0
//	}
//	printf("%d,%d,%d\n", a, b, c);
//}

//int main() 
//{
//	int j, k = 0;
//	for (j = 1; j < 10; j += 2)
//		k += j + 1;
//	printf("%d\n", k);
//}
//
//int main() 
//{
//	char a[] = "abcdefg",b[10] = "abcdefg";
//	printf("%d %d\n", sizeof(a), sizeof(b));
//}

//int main()
//{
//	char str[] = "xyz", * ps = str;
//	while (*ps) 
//		ps++;
//	for (ps--; ps - str >= 0; ps--) 
//		puts(ps);
//
//	return 0;
//
//}

void fun(int* b, int n, int* s)
{
	int i;
	for (i = 0; i <= n; i++)
		*s = *s + *(b + i);
}
int func(int a, int b, int* c)
{
	a++;
	b = b + 2;
	*c = a + b;
	return b;
}

int main() 
{
	int x = 1, y = 1, z = 1, a[] = { 1,2,3,4,5 };//4
	fun(a, 4, &x);
	printf("%d,%d,%d\n", x, y, z);//16 1 1
	y = func(x, y, &z);
	printf("%d,%d,%d\n", x, y, z);//
	fun(a, 3, &y);
	printf("%d,%d,%d\n", x, y, z);
	z = func(y, z, &x);
	printf("%d,%d,%d\n", x, y, z);
	fun(a + 1, 2, &z);
	printf("%d,%d,%d\n", x, y, z);
	x = func(z, x, &y);
	printf("%d,%d,%d", x, y, z);
	return 0;
}