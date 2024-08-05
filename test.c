#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1)='\0';
//	if (my_strlen(str + 1) >= 2)
//		reverse(str + 1);
//	*(str + len - 1) = tmp;
//
//
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//void reverse(char arr[], int left, int right)
//{
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	if(left<right)
//		reverse(arr, left + 1, right - 1);
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	reverse(arr,0,right);
//	printf("%s\n", arr);
//
//	return 0;
//}

//int Digtsum(unsigned int n)
//{
//	if (n > 9)
//		return Digtsum(n / 10) + n % 10;
//	else
//		return n;
//
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int sum = Digtsum(n);
//	printf("%d", sum);
//
//	return 0;
//}

//double Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Pow(n,-k);
//
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}

int main()
{
	int num = 10;
	int arr[10] = { 0 };
	printf("%d", sizeof(arr));
	printf("%d", sizeof(int [10]));
	return 0;
}
