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
		printf("������� �����: ");
		itoa(i, buffer, 10);
		printf("���������� �����: %s\n", buffer);
		itoa(i, buffer, 16);
		printf("����������������� �����: %s\n", buffer);
		itoa(i, buffer, 2);
		printf("������� �����: %s\n", buffer);
		return 0;
	
	system("pause");
	return 0;
}