#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"


void initcontact(contact* pc)
{
	assert(pc);
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));

}

void add(contact* pc)//con�ĵ�ַ
{
	assert(pc);
	if (pc->count == MAX)
	{
		printf("ͨѶ¼����\n");
		return;
	}
	
		printf("���������֣�\n");
		scanf("%s", pc->data[pc->count].name);//name���������ǵ�ַ
		printf("���������䣺\n");
		scanf("%d", &(pc->data[pc->count].age));
		printf("�������Ա�\n");
		scanf("%s", pc->data[pc->count].sex);
		printf("������绰��\n");
		scanf("%s", pc->data[pc->count].tele);
		printf("�������ַ��\n");
		scanf("%s", pc->data[pc->count].addr);
		pc->count++;
		printf("���ӳɹ�\n");
	
}
void show(const contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
		printf("ͨѶ¼Ϊ�գ�����Ϣ��ɾ��\n");
		return;
	}
	printf("������Ҫɾ���˵�����:\n");
	scanf("%s", name);
	int pos=find(pc, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	for (i = pos; i < pc->count-1; i++)
	{
		pc->data[i] = pc->data[i + 1];//���ﲻ̫��
	}
	pc->count--;
	printf("ɾ���ɹ�\n");
	
}

void search(contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("����������˵�����:\n");
	scanf("%s", name);
	int pos = find(pc, name);
	if (pos == -1)
	{
		printf("���˲�����\n");
		return;
	}
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	
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
	printf("������Ҫ�޸��˵�����:\n");
	scanf("%s", name);
	int pos = find(pc, name);
	if (pos == -1)
	{
		printf("���˲�����\n");
		return;
	}
	printf("�޸�����Ϣ�Ѿ��ҵ�����ʼ�޸�");
	printf("�������µ����֣�\n");
	scanf("%s", pc->data[pos].name);
	printf("�������µ����䣺\n");
	scanf("%d", &(pc->data[pos].age));
	printf("�������µ��Ա�\n");
	scanf("%s", pc->data[pos].sex);
	printf("�������µĵ绰��\n");
	scanf("%s", pc->data[pos].tele);
	printf("�������µĵ�ַ��\n");
	scanf("%s", pc->data[pos].addr);
	printf("�޸ĳɹ�\n");
}


int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((peoinfo*)e1)->name, ((peoinfo*)e2)->name);
}
void sort(contact* pc)
{
	assert(pc);
	printf("����������");
	qsort(pc->data, pc->count, sizeof(peoinfo), cmp_by_name);//��̫��
	printf("����ɹ�\n");
}