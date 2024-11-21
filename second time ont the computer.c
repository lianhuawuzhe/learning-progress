#define _CRT_SECURE_NO_WARNINGS
//教材第5章习题第3题
//穷举法
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数");
//	scanf("m=%d,n=%d", &m, &n);
//	a = (m > n ? m : n);//a大
//	b = (m < n ? m : n);
//	int i = 0;
//	for (i = b; i>=1; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("最大公约数是：%d\n", i);
//			break;
//		}
//	}
//	printf("最小公倍数是：%d", a * b/i);
//
//	return 0;
//}

//辗转相除法
//int divisor(int a, int b)
//{
//	while (b >= 1)
//	{
//		int r = a % b;
//		if (r == 0)
//		{
//			return b;
//		}
//		else
//		{
//			a = b;
//			b = r;
//		}
//	}
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数");
//	scanf("m=%d,n=%d", &m, &n);
//	a = (m > n ? m : n);//a大
//	b = (m < n ? m : n);
//	int r = 0;
//	r = a % b;
//	int p = divisor(a, b);
//	printf("最大公约数是：%d\n", p);
//	printf("最小公倍数是：%d\n", a*b/p);
//
//	return 0;
//}
//void caculate(char*p,int x)
//{
//    int i = 0;
//    int a = 0;//字母
//    int b = 0;//空格
//    int c = 0;//数字
//    int d = 1;//其他字符
//    for (i = 0; i < x + 1; i++)
//    {
//        if (p[i] == 32)
//            b += 1;
//        else if ((p[i] >= 65 && p[i] <= 90) || (p[i ] >= 97 && p[i ] <= 122))
//            a += 1;
//        else if (p[i]  >47&& p[i] <58)
//            c += 1;
//        else if(p[i]!=NULL)
//            d += 1;
//
//    }
//    printf("您输入的字符串中，字母数为%d\n", a);
//    printf("您输入的字符串中，空格数为%d\n", b);
//    printf("您输入的字符串中，数字数为%d\n", c);
//    printf("您输入的字符串中，其他字符数为%d\n", d);
// }
//
//int main() 
//{
//    int length = 0;
//    char str[9999] = { 0 };
//    printf("请输入一串字符\n");
//    gets(str);
//    length = strlen(str);
//    caculate(str, length);
//    return 0;
//}


//int main()
//{
//    int i = 0;
//    printf("三位数中所以水仙花数是：\n");
//    for (i = 100; i < 1000; i++)
//    {
//        int a = i % 100;
//        int b = i / 100;//百位
//        int c = a / 10;//十位
//        int d = a % 10;//个位
//        if (i == b * b * b + c * c * c + d * d * d)
//            printf("%d ", i);
//    }
//}
//void findfactors(int x)
//{
//    int j = 0;
//    int count = 0;
//    int p = 0;
//    int sum = 0;
//    int factors[999] = { 0 };
//    for (j = 1; j < x; j++)
//    {
//        if (x % j == 0)
//        {
//            factors[count] = j;
//            count++;
//        }
//    }
//    for (p = 0; p < count; p++)
//    {
//        sum += factors[p];
//    }
//    if (sum == x)
//    {
//        printf("%d its factors are ",x);
//        for (p = 0; p < count-1; p++)
//            printf("%d,", factors[p]);
//        printf("%d\n", factors[count-1]);
//    }
//}
//void findwanshu()
//{
//    int i = 0;
//    for (i = 1; i < 1000; i++)
//    {
//        findfactors(i);
//    }
//}
//int main()
//{
//	findwanshu();
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 5; i++)
//	{
//		for (j = 1; j < 5-i;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//	for (i = 5; i < 8; i++)
//	{
//		for (j = 1; j < i-3; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 15-2*i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//	return 0;
//}

//int main()
//{
//	int arr[9] = { 0 };
//	int i = 0;
//	int sum = 0;
//	printf("请输入矩阵中的9个数：");
//	while (i<=8)
//	{
//		scanf("%d", &arr[i]);
//		i ++;
//	}
//	printf("您的矩阵是\n");
//	int x=0;
//	for (x = 0; x <= 8; x++)
//	{
//		printf("%-4d ", arr[x]);
//		if (x == 2 || x == 5 || x == 8)
//			printf("\n");
//
//	}
//	sum = arr[0] + arr[2] + arr[4] + arr[6] + arr[8];
//	printf("\n矩阵对角线元素和为：%d", sum);
//	return 0;
//}
// 
// 
//int main()
//{
//	int a[11] = { 1,4,6,9,13,16,19,28,40,100 };
//
//	return 0;
//}


//int main()
//{
//	int x = 0;
//	int arr[5] = { 0 };
//	printf("请输入五个数：");
//	for (x = 0; x < 5; x++)
//	{
//		scanf("%d",)
//	}
//	return 0;
//}

//int main()
//{char str[3][80] = { 0 };
//	printf("请输入第一行字符：\n");
//	gets(str[0]);
//	printf("请输入第二行字符：\n");
//	gets(str[1]);
//	printf("请输入第三行字符：\n");
//	gets(str[2]);
//
//	int i = 0;
//	int j = 0;
//	int a = 0;//大写字母
//	int b = 0;//小写字母
//	int c = 0;//空格
//	int d = 0;//数字
//	int e = 0;//其他字符
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 80; j++)
//		{
//			if (str[i][j] >= 65 && str[i][j] <= 90)
//				a++;
//			else if (str[i][j] >= 97 && str[i][j] <= 122)
//				b++;
//			else if (str[i][j] >= 48 && str[i][j] <= 57)
//				d++;
//			else if (str[i][j] == 32)
//				c++;
//			else if(str[i][j]!=NULL)
//				e++;
//			
//		}
//	}
//	printf("大写字母有%d个，小写字母有%d个，空格有%d个，数字有%d个，其他字符有%d个", a, b, c, d, e);
//	return 0;
//}
// 
// 
// 
//q左边界，最开始是0，y右边界,最开始是15，x目标
//void find_destination(int q, int y, int x, int* p)
//{
//    int i = (q + y) / 2;  // 中间索引
//    if (q > y) 
//    {
//        printf("未找到该元素\n"); // 左边界大于右边界，表示查找失败
//        return 1;
//    }
//    if (x == p[i]) 
//    {
//        printf("您查找的元素是第%d个\n", i + 1);
//    }
//    else if (x > p[i]) 
//    {
//        find_destination(q, i - 1, x, p);
//    }
//    else 
//    {
//        find_destination(i + 1, y, x, p);
//    }
//}
//
//int main()
//{
//    int a[15] = { 219, 114, 93, 82, 71, 64, 48, 37, 30, 23, 15, 13, 9, 7, 4 };
//    int b = 0;
//    int length = sizeof(a) / sizeof(int);
//    printf("请输入要查找的数：");
//    scanf("%d", &b);
//    find_destination(0, length - 1, b, a);
//    return 0;
//}


//#define NUM_STU
//#define NUM_SUB
//typedef struct 
//{
//    char name[50] = { 0 };//学生姓名
//    int scores[NUM_SUB] = { 0 };// 3门课的成绩
//    float average=0.0;//平均成绩
//} Student;
//void Input()
//{
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("请输入第%d个学生的姓名", i+1);
//        fgets(Students[i].name, sizeof(students[i].name), stdin);
//        students[i].name[strcspn(students[i].name, "\n")] = '\0';  // 去掉换行符
//
//        printf("请输入 %s 的 3 门课成绩：\n", students[i].name);
//        for (int j = 0; j < NUM_SUBJECTS; j++) {
//            printf("第 %d 门课成绩: ", j + 1);
//            scanf("%d", &students[i].scores[j]);
//        }
//        getchar();  // 读取并丢弃剩余的换行符
//    }
//}
//int main()
//{
//    Input();//输入成绩
//
//
//	return 0;
//}

//#include <string.h>
//
//int main() 
//{
//    char name[100];       
//    char idcard[19];   
//    char areacode[7];    
//    char birthday[9];
//    printf("请输入姓名：");
//    fgets(name, sizeof(name), stdin);
//    name[strcspn(name, "\n")] = '\0'; //去掉换行符
//    printf("请输入您的身份证编号：");
//    fgets(idcard, sizeof(idcard), stdin);
//    idcard[strcspn(idcard, "\n")] = '\0';  
//    strncpy(areacode, idcard, 6);
//    areacode[6] = '\0';  //字符串结束
//    strncpy(birthday, idcard + 6, 8);
//    birthday[8] = '\0';  
//    printf("地区编号是: %s\n", areacode);
//    printf("姓名是: %s\n", name);
//    printf("出生日期是: %s\n", birthday);
//
//    return 0;
//}

//void ttt(int* p,int x)
//{
//	int i = 0;
//	int j = x - 1;
//	int t = 0;
//	for (i = 0, j = x - 1; i < j; i++, j--)
//	{
//		t = p[i];
//		p[i] = p[j];
//		p[j] = t;
//
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[5] = {0};
//	int length = sizeof(arr) / sizeof(int);
//	printf("请输入五个数：\n");
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("原数组是：");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	ttt(arr,length);
//	printf("逆置后的数组是：");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

#include<stdio.h>
void sorted(int arr[], int* size, int num)
{
    int i = 0;
    int j = 0;
    if (num < arr[0])
    {
        for (i = *size; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = num;
        (*size)++;  
    }
    else if (num >= arr[*size - 1])
    {
        arr[*size] = num;  
        (*size)++; 
    }
    else 
    {
        for (i = 1; i < *size; i++)
        {
            if (arr[i - 1] <= num && arr[i] > num)
                j = i;
        }
        int temp1 = 0;
        for (i = j, temp1 = arr[j]; i < *size; i++)
        {
            int temp2 = arr[i + 1];
            arr[i + 1] = temp1;
            temp1 = temp2;
        }
        arr[j] = num;
        (*size)++;
    }
}


int main()
{
    int arr[11] = {1,4,6,9,13,16,19,28,40,100};
    int num=0;
    int size = 10;
    printf("请输入要插入的数字：");
    scanf("%d", &num);
    sorted(arr, &size, num);
    printf("插入后的数组：\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
//#include<stdio.h>
//#include <string.h>
//#define NUM_STUDENTS 10
//#define NUM_NAME 50
//
//typedef struct 
//{
//    char name[NUM_NAME];
//    float scores[3];
//    float average;
//} Student;
//
//void aver(Student* student)
//{
//    student->average = (student->scores[0] + student->scores[1] + student->scores[2]) / 3.0;
//}
//
//int compare(const void* a, const void* b) 
//{
//    Student* studentA = (Student*)a;
//    Student* studentB = (Student*)b;
//
//    if (studentA->average < studentB->average)
//    {
//        return 1; //A在前
//    }
//    else if (studentA->average > studentB->average)
//    {
//        return -1; //A在后
//    }
//    return 0; //A不变
//}
//int main()
//{
//    Student students[NUM_STUDENTS] = { 0 };
//    for (int i = 0; i < NUM_STUDENTS; i++)
//    {
//        printf("请输入第 %d 个学生的姓名: ", i + 1);
//        fgets(students[i].name, NUM_NAME, stdin);
//        students[i].name[strcspn(students[i].name, "\n")] = '\0';///清除换行符，避免下面打印出换行符
//        printf("请输入%s的3门课成绩:\n", students[i].name);
//        for (int j = 0; j < 3; j++) 
//        {
//            printf("Coures%d成绩: ", j + 1);
//            scanf("%f", &students[i].scores[j]);
//        }
//        getchar(); //清除换行符，避免下一次fgets读取
//        aver(&students[i]);
//    }
//    qsort(students, NUM_STUDENTS, sizeof(Student), compare);
//    printf("学生姓名成绩如下：\n");
//    printf("Name\tCourse1\tCourse2\tCourse3\tAverage\n");
//    for (int i = 0; i < NUM_STUDENTS; i++) 
//    {
//        printf("%s\t%.2f\t%.2f\t%.2f\t%.2f\n", 
//            students[i].name,
//            students[i].scores[0],
//            students[i].scores[1],
//            students[i].scores[2],
//            students[i].average);
//    }
//    return 0;
//}
