//*��������� ������ ������ �������������� � �������������� ������� �� ��������� [-10, 10] � ������� ��� � �������. �������� ����� ��������� ������� �� ��������������� � �������� ������� ������ �� ����� � �������.*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int a[30];
	for (int i = 0; i < 30; i++)
	{
		a[i] = rand() % 21 - 10;
	}
	cout << "������1= ";
	for (int i = 0; i < 30; i++)
		cout << a[i] << "  ";

	cout << endl << "������2= ";
	for (int i = 0; i < 30; i++)
	{
		 cout <<  a[i] * (-1) << "  ";
	}
	for (int i = 0; i < 30; i++)
		cout << a[i] << "  ";

		system("pause");
		return 0;
	}