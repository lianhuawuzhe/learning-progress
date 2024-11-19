#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//3章7题
//int main()
//{
//	float r = 0.0;
//	float h = 0.0;
//	float C = 0.0;
//	float S1 = 0.0;
//	float S2 = 0.0;
//	float V1 = 0.0;
//	float V2 = 0.0;
//	printf("请输入圆的半径和圆柱的高:");
//	scanf("%f %f",&r,&h);
//	C = 2 * 3.14 * r ;
//	S1 = 3.14 * r * r;
//	S2 = 4 * 3.14 * r * r;
//	V1 = (4 / 3.0) * 3.14 * r * r * r;
//	V2 = 3.14 * r * r * h;
//	printf("圆的周长是:%.2f\n", C);
//	printf("圆的面积是:%.2f\n",S1);
//	printf("圆球表面积是:%.2f\n",S2);
//	printf("圆球体积是:%.2f\n",V1);
//	printf("圆柱体积是:%.2f\n",V2);
//
//	return 0;
//}



//第四章4题
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入三个数:");
//	scanf("%d %d %d",&a,&b,&c);
//	int max = a;
//	if (max <= b)
//	{
//		max = b;
//		if (max <= c)
//			max = c;
//	}
//	else if (max <= c)
//	{
//		max = c;
//	}
//
//	printf("三个数中最大的是:%d",max);
//
//	return 0;
//}


//第四章第六题
//int main()
//{
//	double a = 0.0;
//	printf("请输入x的值：");
//	scanf("%lf",&a);
//	if (a < 1)
//		printf("y=%f", a);
//	else if (a >= 1 && a < 10)
//		printf("y=%f", 2*a - 1);
//	else
//		printf("y=%f", 3*a - 11);
//	return 0;
//}



//四章习题第8题
//int main()
//{
//	int a = 0;
//	printf("请输入成绩：");
//	scanf("%d", &a);
//	if (a >=90)
//		printf("成绩等级为：%c", 'A');
//	else if (a >=80&&a<=89)
//		printf("成绩等级为：%c", 'B');
//	else if (a >=70&&a<=79)
//		printf("成绩等级为：%c", 'C'); 
//	else if (a >=60&&a<=69)
//		printf("成绩等级为：%c", 'D');
//	else
//		printf("成绩等级为：%c", 'E');
//
//	return 0;
//}

//第四章习题第10题
  



//第四章习题第12题
//#include<math.h>
//int main()
//{
//	float a = 0.0;
//	float b = 0.0;
//	printf("请输入一点坐标:");
//	scanf("%f %f",&a,&b);
//	float c = 0.0;
//	float d = 0.0;
//	float e = 0.0;
//	float f = 0.0;
//	c = (a + 2) * (a + 2) + (b + 2) * (b + 2);
//	d = (a - 2) * (a - 2) + (b - 2) * (b - 2);
//	e = (a + 2) * (a + 2) + (b - 2) * (b - 2);
//	f = (a - 2) * (a - 2) + (b + 2) * (b + 2);
//	if (c <= 1 || d <= 1 || e <= 1 || f <= 1)
//		printf("该点建筑高度是：%d", 10);
//	else
//		printf("该点建筑高度是：%d", 0);
//	return 0;
//}


//题目12
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int count = 0;
//	printf("请输入年、月、日：");
//	scanf("%d %d %d", &a, &b, &c);
//	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
//	{
//		switch (b)
//		{
//		case 1:
//			count = c;
//			break;
//		case 2:
//			count = c + 31;
//			break;
//		case 3:
//			count = c + 31 + 29;
//			break;
//		case 4:
//			count = c + 31 + 29 + 31;
//			break;
//		case 5:
//			count = c + 31 + 29 + 31 + 30;
//			break;
//		case 6:
//			count = c + 31 + 29 + 31 + 30 + 31;
//			break;
//		case 7:
//			count= c + 31 + 29 + 31 + 30 + 31+30;
//			break;
//		case 8:
//			count = c + 31 + 29 + 31 + 30 + 31 + 30+31;
//			break;
//		case 9:
//			count = c + 31 + 29 + 31 + 30 + 31 + 30 + 31+31;
//			break;
//		case 10:
//			count = c + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31+30;
//			break;
//		case 11:
//			count = c + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31+30+31;
//			break;
//		case 12:
//			count = c + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31+30+31+30;
//			break;
//		}
//	}
//	else
//	{
//		switch (b)
//		{
//		case 1:
//			count = c;
//			break;
//		case 2:
//			count = c + 31;
//			break;
//		case 3:
//			count = c + 31 + 28;
//			break;
//		case 4:
//			count = c + 31 + 28 + 31;
//			break;
//		case 5:
//			count = c + 31 + 28 + 31 + 30;
//			break;
//		case 6:
//			count = c + 31 + 28 + 31 + 30 + 31;
//			break;
//		case 7:
//			count = c + 31 + 28 + 31 + 30 + 31 + 30;
//			break;
//		case 8:
//			count = c + 31 + 28 + 31 + 30 + 31 + 30 + 31;
//			break;
//		case 9:
//			count = c + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
//			break;
//		case 10:
//			count = c + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
//			break;
//		case 11:
//			count = c + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
//			break;
//		case 12:
//			count = c + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
//			break;
//
//		}
//
//
//	}
//	printf("这是这一年的第%d天",count);
//	return 0;
//}



//第三章习题第6题

int main()
{
	char c1 = 'C';
	char c2 = 'h';
	char c3 = 'i';
	char c4 = 'n';
	char c5 = 'a';
	char arr[] = { c1,c2,c3,c4,c5 };
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		arr[i]+=4;
	}
	printf("%c %c %c %c %c\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	putchar(arr[0]);
	putchar(arr[1]);
	putchar(arr[2]);
	putchar(arr[3]);
	putchar(arr[4]);

	return 0;
}




//第四章习题第10题
//int main()
//{
//	int i = 0;
//	float count = 0;
//	printf("请输入利润：");
//	scanf("%d", &i);
//	if (i <= 100000)
//		count = 0.1 * i;
//	else if (i > 100000 && i <= 200000)
//		count = 10000 + (i - 100000) * 0.075;
//	else if (i > 200000 && i <= 400000)
//		count = 10000 + 7500 + (i - 200000) * 0.05;
//	else if (i > 400000 && i <= 600000)
//		count = 10000 + 7500 + 10000 + (i - 400000) * 0.03;
//	else if (i > 600000 % i <= 1000000)
//		count = 10000 + 7500 + 10000 + 6000 + (i - 600000) * 0.015;
//	else
//		count = 10000 + 7500 + 10000 + 6000 + 6000 + (i - 1000000) * 0.01;
//	printf("应发奖金为：%f", count);
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int b = 0;
//	float count = 0;
//	printf("请输入利润：");
//	scanf("%d", &i);
//	if (i <= 100000)
//		b = 1;
//	else if (i > 100000 && i <= 200000)
//		b = 2;
//	else if (i > 200000 && i <= 400000)
//		b = 3;
//	else if (i > 400000 && i <= 600000)
//		b = 4;
//	else if (i > 600000 % i <= 1000000)
//		b = 5;
//
//
//	switch (b)
//	{
//	case 1:
//		count = 0.1 * i;
//		break;
//	case 2:
//		count = 10000 + (i - 100000) * 0.075;
//		break;
//	case 3:
//		count = 10000 + 7500 + (i - 200000) * 0.05;
//		break; 
//	case 4:
//		count = 10000 + 7500 + 10000 + (i - 400000) * 0.03;
//		break; 
//	case 5:
//		count = 10000 + 7500 + 10000 + 6000 + (i - 600000) * 0.015;
//		break;
//	default:
//		count = 10000 + 7500 + 10000 + 6000 + 6000 + (i - 1000000) * 0.01;
//		break;
//	}
//
//	printf("应发奖金为：%f", count);
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int count = 0;
//	printf("请输入年、月、日：");
//	scanf("%d %d %d", &a, &b, &c);
//	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
//	{
//		switch (b)
//		{
//		case 1:
//			count = c;
//			break;
//		case 2:
//			count = c + 31;
//			break;
//		case 3:
//			count = c + 31 + 29;
//			break;
//		case 4:
//			count = c + 31 + 29 + 31;
//			break;
//		case 5:
//			count = c + 31 + 29 + 31 + 30;
//			break;
//		case 6:
//			count = c + 31 + 29 + 31 + 30 + 31;
//			break;
//		case 7:
//			count= c + 31 + 29 + 31 + 30 + 31+30;
//			break;
//		case 8:
//			count = c + 31 + 29 + 31 + 30 + 31 + 30+31;
//			break;
//		case 9:
//			count = c + 31 + 29 + 31 + 30 + 31 + 30 + 31+31;
//			break;
//		case 10:
//			count = c + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31+30;
//			break;
//		case 11:
//			count = c + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31+30+31;
//			break;
//		case 12:
//			count = c + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31+30+31+30;
//			break;
//		}
//	}
//	else
//	{
//		switch (b)
//		{
//		case 1:
//			count = c;
//			break;
//		case 2:
//			count = c + 31;
//			break;
//		case 3:
//			count = c + 31 + 28;
//			break;
//		case 4:
//			count = c + 31 + 28 + 31;
//			break;
//		case 5:
//			count = c + 31 + 28 + 31 + 30;
//			break;
//		case 6:
//			count = c + 31 + 28 + 31 + 30 + 31;
//			break;
//		case 7:
//			count = c + 31 + 28 + 31 + 30 + 31 + 30;
//			break;
//		case 8:
//			count = c + 31 + 28 + 31 + 30 + 31 + 30 + 31;
//			break;
//		case 9:
//			count = c + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
//			break;
//		case 10:
//			count = c + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
//			break;
//		case 11:
//			count = c + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
//			break;
//		case 12:
//			count = c + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
//			break;
//
//		}
//
//
//	}
//	printf("这是这一年的第%d天",count);
//	return 0;
//}
//

#include <stdio.h>
int main() 
{
	int year, month, day;
	int count = 0;
	int days_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; 

	printf("请输入年、月、日：");
	scanf("%d %d %d", &year, &month, &day);

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		days_month[1] = 29;
	}

	for (int i = 0; i < month - 1; i++)
	{
		count += days_month[i];
	}
	count += day;
	printf("这是这一年的第%d天\n", count);
	return 0;
}
