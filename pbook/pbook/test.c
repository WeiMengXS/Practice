#define _CRT_SECURE_NO_WARNINGS 1
#include "AddressBook.h"

void TestAddressBook()
{
	Addressbook addbook;
	Addressinit(&addbook);
	
	Addressinfo info1 = { "³Â¶«Èð", "16602909256", 19, man };
	AddressAdd(&addbook, &info1);

}
int main()
{
	TestAddressBook();
	
	return 0;
}
