#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
enum SEX
{
	man,
	women,

};

typedef struct Addressbookinfo
{
	char _name[24];
	char _tel[20];
	int _age;
	enum SEX _sex;
}Addressinfo;
//#define MAX_size 14
typedef struct Addressbook
{
	Addressinfo* Bookarrray;
	size_t size;
	size_t _capacity;
}Addressbook;
void Addressinit(Addressbook* pbook);
void AddressAdd(Addressbook* pbook, Addressinfo* pinfo);
void AddressBookDel(Addressbook* pbook, const char* name);
void printressbook(Addressbook* pbook);
void AddressSave(Addressbook* pbook, const char* fliename);
void AddressLode(Addressbook* pbook,const char* fliename);


