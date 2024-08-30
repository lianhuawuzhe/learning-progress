#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
typedef struct peoinfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}peoinfo;

typedef struct contact
{
	peoinfo data[MAX];
	int count;
}contact;

void initcontact(contact* pc);

void add(contact* pc);

void show(const contact*pc);

void del(contact* pc);

void search(contact* pc);

void modify(contact* pc);

void sort(contact* pc);