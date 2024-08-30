#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"


void initcontact(contact* pc)
{
	assert(pc);
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));

}

void add(contact* pc)//con的地址
{
	assert(pc);
	if (pc->count == MAX)
	{
		printf("通讯录已满\n");
		return;
	}
	
		printf("请输入名字：\n");
		scanf("%s", pc->data[pc->count].name);//name数组名就是地址
		printf("请输入年龄：\n");
		scanf("%d", &(pc->data[pc->count].age));
		printf("请输入性别：\n");
		scanf("%s", pc->data[pc->count].sex);
		printf("请输入电话：\n");
		scanf("%s", pc->data[pc->count].tele);
		printf("请输入地址：\n");
		scanf("%s", pc->data[pc->count].addr);
		pc->count++;
		printf("增加成功\n");
	
}
void show(const contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pc->count; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr
		);
	}
}
static int find(contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (0==strcmp(pc->data[i].name, name))
		{
			return i;
		}
			
	}
	return -1;
}
void del(contact* pc)
{
	char name[MAX_NAME] = { 0 };
	assert(pc);
	int i = 0;
	if (pc->count == 0)
	{
		printf("通讯录为空，无信息可删除\n");
		return;
	}
	printf("请输入要删除人的名字:\n");
	scanf("%s", name);
	int pos=find(pc, name);
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	for (i = pos; i < pc->count-1; i++)
	{
		pc->data[i] = pc->data[i + 1];//这里不太懂
	}
	pc->count--;
	printf("删除成功\n");
	
}

void search(contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("请输入查找人的名字:\n");
	scanf("%s", name);
	int pos = find(pc, name);
	if (pos == -1)
	{
		printf("此人不存在\n");
		return;
	}
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
	
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	
}

void modify(contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改人的名字:\n");
	scanf("%s", name);
	int pos = find(pc, name);
	if (pos == -1)
	{
		printf("此人不存在\n");
		return;
	}
	printf("修改人信息已经找到，开始修改");
	printf("请输入新的名字：\n");
	scanf("%s", pc->data[pos].name);
	printf("请输入新的年龄：\n");
	scanf("%d", &(pc->data[pos].age));
	printf("请输入新的性别：\n");
	scanf("%s", pc->data[pos].sex);
	printf("请输入新的电话：\n");
	scanf("%s", pc->data[pos].tele);
	printf("请输入新的地址：\n");
	scanf("%s", pc->data[pos].addr);
	printf("修改成功\n");
}


int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((peoinfo*)e1)->name, ((peoinfo*)e2)->name);
}
void sort(contact* pc)
{
	assert(pc);
	printf("按名字排序");
	qsort(pc->data, pc->count, sizeof(peoinfo), cmp_by_name);//不太懂
	printf("排序成功\n");
}