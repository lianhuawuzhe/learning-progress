#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str1[] = "China";
//	printf("%s\n", strlwr(str1));
//	printf("%s\n", strupr(str1));
//	printf("%d", strlen(str1));
//	return 0;
//}

#include<ctype.h>
//void toLower(char* str)
//{
//    for (int i = 0; str[i]; i++) 
//    {
//        str[i] = tolower(str[i]);
//    }
//}
//
//int main() 
//{
//    char str1[] = "China";
//    toLower(str1);
//    printf("%s", str1);
//    return 0;
//}
//int cacu(int a)
//{
//	if (a == 0 || a == 1)
//		return 1;
//	else
//		return a * cacu(a-1);
//}
//int main()
//{
//	int a = 0;
//	printf("������һ������");
//	scanf("%d", &a);
//	int b = cacu(a);
//	printf("%d�Ľ׳���%d", a, b);
//	return 0;
//}

//v/*oid print(int*p)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d  ", *(p + i));
//	}
//}
//
//
//void my_scanf(int* p)
//{
//	int i = 0;
//	for (i = 0;i < 10; i++)
//	{
//		scanf("%d",p+i);
//	}
//}*/


//
//void sort2(int arr[])//ѡ��1
//{
//	int i, j, t;
//	for (i = 0; i < 9; i++)
//	{
//		for (j=8-i; j>-1; j--)
//		{
//			if (*(arr + j) > *(arr + 9 - i))
//			{
//				t = *(arr + j);
//				*(arr + j) = *(arr+9-i);
//				*(arr + 9 - i) = t;
//
//			}
//		}
//	}
//}
//void sort2(int* p)//ѡ��2
//{
//	int i, j, t;
//	for (i = 0; i < 9; i++)
//	{
//		for (j = i+1; j<10; j++)
//		{
//			if (p[i] > p[j])
//			{
//				t = p[i];
//				p[i] = p[j];
//				p[j] = t;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("������ʮ������");
//	my_scanf(arr);
//	
//	sort2(arr);
//	printf("��ð�ݷ��õ��������ǣ�");
//	print(arr);
//	return 0;
//}


//int cacu(int n)
//{
//	if (n > 2)
//		return cacu(n - 1) + cacu(n - 2);
//	else
//		return n;
//}
//int main()
//{
//	int n = 0;
//	printf("�����������");
//	scanf("%d", &n);
//	int ret=cacu(n);
//	printf("����%d������", ret);
//	return 0;
//}


//int f(int step)
//{
//	if (step > 2)	return f(step - 1) + f(step - 2);
//	else 		return step;
//}
//
//int main(void)
//{
//	int n;
//	int f(int step);
//	printf("Please input the number of steps:");
//	scanf("%d", &n);
//	printf("There are %d methods.\n", f(n));
//	return 0;
//}


//void move(char  getone, char  putone) 
//{
//    printf("%c--->%c\n", getone, putone);
//}
//
//void hanoi(int n, char X, char Y, char Z)
//{
//    if (n == 1)  move(X, Z);
//    else
//    {
//        hanoi(n - 1, X, Z, Y);
//        move(X, Z);
//        hanoi(n - 1, Y, X, Z);
//    }
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    hanoi(n, 'A', 'B', 'C');
//    return 0;
//}


//
//void sort(char array[][4], int n);
//int main(void)
//{
//    char  str[5][4] =
//    { "CHN","JPN","USA","RUS","FRA" };
//    int i;
//    sort(str, 5);
//    printf("The sorted is:\n");
//    for (i = 0; i < 5; i++)
//        printf("%s\n", str[i]);
//}
//
//void sort(char array[][4], int n)
//{
//    int i, j;
//    char t[4];
//    for (i = 0; i < n - 1; i++)
//    {
//        for (j = i + 1; j < n; j++)
//        {
//            if (strcmp(array[j], array[i]) < 0)
//            {
//                strcpy(t, array[i]);
//                strcpy(array[i], array[j]);
//                strcpy(array[j], t);
//            }
//              
//        }
//       
//    }
//}

int main()
{
	/*char str[14];
	str[] = "i love china";*/
	char* a, str[10];
	a = str;
	scanf("%s", a);
	printf("%s", a);
	return 0;
}