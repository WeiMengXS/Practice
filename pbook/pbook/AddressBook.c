#include "AddressBook.h"

void Addressinit(Addressbook* pbook)

{
	assert(pbook);
	pbook->size = 0;
	for (size_t i = 0; i < MAX_size; i++)
	{
		pbook->Bookarrray[i]._name[0] = '\0';
		pbook->Bookarrray[i]._tel[0] = '\0';
		pbook->Bookarrray[i]._age=0;
		pbook->Bookarrray[i]._name[0] = man;
	}

}
void AddressAdd(Addressbook* pbook, Addressinfo* pinfo)
{

	assert(pbook);
	assert(pinfo);

	if (pbook->size == MAX_size)
	{
		printf("resss book full");

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