#include "AddressBook.h"

void Addressinit(Addressbook* pbook)

{
	assert(pbook);
	pbook->size = 0;
	pbook->_capacity = 2;
	pbook->Bookarrray = malloc(sizeof(Addressinfo)* 2 * sizeof(int));
	assert(pbook->Bookarrray);

}
void AddressAdd(Addressbook* pbook, Addressinfo* pinfo)
{

	assert(pbook);
	assert(pinfo);

	if (pbook->size == pbook->Bookarrray)
	{
		pbook->Bookarrray = realloc(pbook->Bookarrray, pbook->_capacity * 2);
		pbook->_capacity *=2;

	}
	else
	{
		strcpy(pbook->Bookarrray[pbook->size]._name, pinfo->_name);
		strcpy(pbook->Bookarrray[pbook->size]._tel, pinfo->_tel);
		pbook->Bookarrray[pbook->size]._age, pinfo->_age;
		pbook->Bookarrray[pbook->size]._sex, pinfo->_sex;
		pbook->size++;
	}

}
void printressbook(Addressbook* pbook)
{
	assert(pbook);
	for (size_t i = 0; i < pbook->size; ++i)
	{
		printf("===========================\n");
		printf("name:%s   tel:%s     age:%d     sex:%d\n", pbook->Bookarrray[i]._name, pbook->Bookarrray[i]._tel, pbook->Bookarrray[i]._sex, pbook->Bookarrray[i]._sex);
		printf("\n");
	
	}




}
void AddressSave(Addressbook* pbook, const char* filename)
{
	FILE* cp = fopen(filename, "w");
	for (size_t i = 0; i < pbook->size; ++i)
	{
		fwrite(&(pbook->Bookarrray[i]), sizeof(Addressinfo),1,cp);

	}
	Addressinfo end;
	end._age = 0;
	fwrite(&end, sizeof(Addressinfo), 1, cp);
	}
void AddressLode(Addressbook* pbook,const char* filename)
{
	FILE* cp = fopen(filename, "r");
	assert(pbook);
	Addressinfo info;
	while (1)
	
	{
		fread(&info, sizeof(Addressinfo),1 , cp);
		if (info._age == 0)
		{
			break;
		}
		else
		{
			AddressAdd(pbook,&info);
		}
	}



}