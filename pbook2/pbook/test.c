#define _CRT_SECURE_NO_WARNINGS 1
#include "AddressBook.h"

void TestAddressBook()
{
	Addressbook addbook;
	int input=0;
	do
	{
		printf("============================================");
		printf("===1.�����ϵ��=====2��ɾ����ϵ��===========\n");
		printf("===3.��ѯ��ϵ��=====4������ͨѶ¼===========\n");
		printf("===5������ͨѶ¼============================\n");
		printf("============================================\n");
		printf("============================================\n");
		scanf("%d", &input);
		if (input == 1)
		{
			Addressinfo info;
			printf("�������������绰�����䣬�Ա�\n");
			scanf("%s", info._name);
			scanf("%s", info._tel);
			scanf("%d", info._age);
			char Age[10];
			scanf("%s", Age);

			if (strcmp(Age, "��"))
			
			{
				info._age = 0;
			}
			else
			{
				info._age = 1;

			}


		}
	} while (input >= 0);
	
	Addressinit(&addbook);
	/*
	Addressinfo info1 = { "�¶���", "16602909256", 19, man };
	AddressAdd(&addbook, &info1);
	Addressinfo info2 = { "���Թ�", "12321312326", 19, man };*/
	//AddressAdd(&addbook, &info2);
//	AddressSave(&addbook,"Save.txt");
	//AddressLode(&addbook, "Save.txt");
//	printressbook(&addbook);
}
int main()
{
	TestAddressBook();
	
	return 0;
}
