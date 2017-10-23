#include<locale.h>
#include<Windows.h>
#include<string>
#include<tchar.h>
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	/* itoa example */
		int i;
		char *_gcvt;
		int
		char buffer[33];
		printf("введите число: ");
		itoa(i, buffer, 10);
		printf("десятичная дробь: %s\n", buffer);
		itoa(i, buffer, 16);
		printf("шестнадцатиричная дробь: %s\n", buffer);
		itoa(i, buffer, 2);
		printf("двочная дробь: %s\n", buffer);
		return 0;
	
	system("pause");
	return 0;
}