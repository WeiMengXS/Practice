#define _CRT_SECURE_NO_WARNINGS 1
#include "AddressBook.h"

void TestAddressBook()
{
	Addressbook addbook;
	int input=0;
	do
	{
		printf("============================================");
		printf("===1.添加联系人=====2，删除联系人===========\n");
		printf("===3.查询联系人=====4，备份通讯录===========\n");
		printf("===5。导入通讯录============================\n");
		printf("============================================\n");
		printf("============================================\n");
		scanf("%d", &input);
		if (input == 1)
		{
			Addressinfo info;
			printf("请输入姓名，电话，年龄，性别\n");
			scanf("%s", info._name);
			scanf("%s", info._tel);
			scanf("%d", info._age);
			char Age[10];
			scanf("%s", Age);

			if (strcmp(Age, "男"))
			
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
	Addressinfo info1 = { "陈东瑞", "16602909256", 19, man };
	AddressAdd(&addbook, &info1);
	Addressinfo info2 = { "蔡自桂", "12321312326", 19, man };*/
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
