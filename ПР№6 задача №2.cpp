//*�������� ���������, �������������� ���������� � ����� �� ����� ������� ���������� �� 10 ��������� ������������������� 1,3,5,7,... (��������� ���������� ����� ����� 1)*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int  a[10];
	for (int i = 0; i <10; i++)
	{
		a[i] = i * 2 - 1;
	}
	for (int i = 0; i <10; i++)
	{
		cout << a[i] <<"  ";
	}
	system("pause");
	return 0;
}

