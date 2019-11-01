#define _CRT_SECURE_NO_WARNINGS 1
#include "AddressBook.h"

void TestAddressBook()
{
	Addressbook addbook;
	Addressinit(&addbook);
	/*
	Addressinfo info1 = { "³Â¶«Èð", "16602909256", 19, man };
	AddressAdd(&addbook, &info1);
	Addressinfo info2 = { "²Ì×Ô¹ð", "12321312326", 19, man };*/
	//AddressAdd(&addbook, &info2);
//	AddressSave(&addbook,"Save.txt");
	AddressLode(&addbook, "Save.txt");
	printressbook(&addbook);
}
int main()
{
	TestAddressBook();
	
	return 0;
}
