#define _CRT_SECURE_NO_WARNINGS
//�̲ĵ�5��ϰ���3��
//��ٷ�
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int a = 0;
//	int b = 0;
//	printf("������������");
//	scanf("m=%d,n=%d", &m, &n);
//	a = (m > n ? m : n);//a��
//	b = (m < n ? m : n);
//	int i = 0;
//	for (i = b; i>=1; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("���Լ���ǣ�%d\n", i);
//			break;
//		}
//	}
//	printf("��С�������ǣ�%d", a * b/i);
//
//	return 0;
//}

//շת�����
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
//	printf("������������");
//	scanf("m=%d,n=%d", &m, &n);
//	a = (m > n ? m : n);//a��
//	b = (m < n ? m : n);
//	int r = 0;
//	r = a % b;
//	int p = divisor(a, b);
//	printf("���Լ���ǣ�%d\n", p);
//	printf("��С�������ǣ�%d\n", a*b/p);
//
//	return 0;
//}
//void caculate(char*p,int x)
//{
//    int i = 0;
//    int a = 0;//��ĸ
//    int b = 0;//�ո�
//    int c = 0;//����
//    int d = 1;//�����ַ�
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
//    printf("��������ַ����У���ĸ��Ϊ%d\n", a);
//    printf("��������ַ����У��ո���Ϊ%d\n", b);
//    printf("��������ַ����У�������Ϊ%d\n", c);
//    printf("��������ַ����У������ַ���Ϊ%d\n", d);
// }
//
//int main() 
//{
//    int length = 0;
//    char str[9999] = { 0 };
//    printf("������һ���ַ�\n");
//    gets(str);
//    length = strlen(str);
//    caculate(str, length);
//    return 0;
//}


//int main()
//{
//    int i = 0;
//    printf("��λ��������ˮ�ɻ����ǣ�\n");
//    for (i = 100; i < 1000; i++)
//    {
//        int a = i % 100;
//        int b = i / 100;//��λ
//        int c = a / 10;//ʮλ
//        int d = a % 10;//��λ
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
//	printf("����������е�9������");
//	while (i<=8)
//	{
//		scanf("%d", &arr[i]);
//		i ++;
//	}
//	printf("���ľ�����\n");
//	int x=0;
//	for (x = 0; x <= 8; x++)
//	{
//		printf("%-4d ", arr[x]);
//		if (x == 2 || x == 5 || x == 8)
//			printf("\n");
//
//	}
//	sum = arr[0] + arr[2] + arr[4] + arr[6] + arr[8];
//	printf("\n����Խ���Ԫ�غ�Ϊ��%d", sum);
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
//	printf("�������������");
//	for (x = 0; x < 5; x++)
//	{
//		scanf("%d",)
//	}
//	return 0;
//}

//int main()
//{char str[3][80] = { 0 };
//	printf("�������һ���ַ���\n");
//	gets(str[0]);
//	printf("������ڶ����ַ���\n");
//	gets(str[1]);
//	printf("������������ַ���\n");
//	gets(str[2]);
//
//	int i = 0;
//	int j = 0;
//	int a = 0;//��д��ĸ
//	int b = 0;//Сд��ĸ
//	int c = 0;//�ո�
//	int d = 0;//����
//	int e = 0;//�����ַ�
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
//	printf("��д��ĸ��%d����Сд��ĸ��%d�����ո���%d����������%d���������ַ���%d��", a, b, c, d, e);
//	return 0;
//}
// 
// 
// 
//q��߽磬�ʼ��0��y�ұ߽�,�ʼ��15��xĿ��
//void find_destination(int q, int y, int x, int* p)
//{
//    int i = (q + y) / 2;  // �м�����
//    if (q > y) 
//    {
//        printf("δ�ҵ���Ԫ��\n"); // ��߽�����ұ߽磬��ʾ����ʧ��
//        return 1;
//    }
//    if (x == p[i]) 
//    {
//        printf("�����ҵ�Ԫ���ǵ�%d��\n", i + 1);
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
//    printf("������Ҫ���ҵ�����");
//    scanf("%d", &b);
//    find_destination(0, length - 1, b, a);
//    return 0;
//}


//#define NUM_STU
//#define NUM_SUB
//typedef struct 
//{
//    char name[50] = { 0 };//ѧ������
//    int scores[NUM_SUB] = { 0 };// 3�ſεĳɼ�
//    float average=0.0;//ƽ���ɼ�
//} Student;
//void Input()
//{
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("�������%d��ѧ��������", i+1);
//        fgets(Students[i].name, sizeof(students[i].name), stdin);
//        students[i].name[strcspn(students[i].name, "\n")] = '\0';  // ȥ�����з�
//
//        printf("������ %s �� 3 �ſγɼ���\n", students[i].name);
//        for (int j = 0; j < NUM_SUBJECTS; j++) {
//            printf("�� %d �ſγɼ�: ", j + 1);
//            scanf("%d", &students[i].scores[j]);
//        }
//        getchar();  // ��ȡ������ʣ��Ļ��з�
//    }
//}
//int main()
//{
//    Input();//����ɼ�
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
//    printf("������������");
//    fgets(name, sizeof(name), stdin);
//    name[strcspn(name, "\n")] = '\0'; //ȥ�����з�
//    printf("�������������֤��ţ�");
//    fgets(idcard, sizeof(idcard), stdin);
//    idcard[strcspn(idcard, "\n")] = '\0';  
//    strncpy(areacode, idcard, 6);
//    areacode[6] = '\0';  //�ַ�������
//    strncpy(birthday, idcard + 6, 8);
//    birthday[8] = '\0';  
//    printf("���������: %s\n", areacode);
//    printf("������: %s\n", name);
//    printf("����������: %s\n", birthday);
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
//	printf("�������������\n");
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("ԭ�����ǣ�");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	ttt(arr,length);
//	printf("���ú�������ǣ�");
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
    printf("������Ҫ��������֣�");
    scanf("%d", &num);
    sorted(arr, &size, num);
    printf("���������飺\n");
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
//        return 1; //A��ǰ
//    }
//    else if (studentA->average > studentB->average)
//    {
//        return -1; //A�ں�
//    }
//    return 0; //A����
//}
//int main()
//{
//    Student students[NUM_STUDENTS] = { 0 };
//    for (int i = 0; i < NUM_STUDENTS; i++)
//    {
//        printf("������� %d ��ѧ��������: ", i + 1);
//        fgets(students[i].name, NUM_NAME, stdin);
//        students[i].name[strcspn(students[i].name, "\n")] = '\0';///������з������������ӡ�����з�
//        printf("������%s��3�ſγɼ�:\n", students[i].name);
//        for (int j = 0; j < 3; j++) 
//        {
//            printf("Coures%d�ɼ�: ", j + 1);
//            scanf("%f", &students[i].scores[j]);
//        }
//        getchar(); //������з���������һ��fgets��ȡ
//        aver(&students[i]);
//    }
//    qsort(students, NUM_STUDENTS, sizeof(Student), compare);
//    printf("ѧ�������ɼ����£�\n");
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