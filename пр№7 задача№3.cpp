//*45.	��������� ��������� ������ N x N ���������� �������    �� ��������� [-10; 10]
 � ����� ������������ � ����������� ������� � ������ ������ � �������� �� �������.*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
#include<stdio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int a[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) {
			a[i][j] = rand() % 21 - 10;
		}
	}


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) {
			cout << a[i][j] << "  ";
		} cout << endl;
	}
	cout << endl;


	
	for (int i = 0; i < 5; i++)
	{int min = a[i][0];
	int max = a[i][0];
		{
			for (int j = 0; j < 5; j++)
			{
				if (a[i][j] < min) min = a[i][j];
				if (a[i][j] > max) max = a[i][j];
			}
			for (int j = 0; j < 5; j++) {
				if (a[i][j] == max) a[i][j] = min;
			}
				for (int j = 0; j < 5; j++) {
				if (a[i][j] == min) a[i][j] = max;
			}

		}

		cout << "min" << i << "������=" << min <<"    " << "max" << i << "������=" << max << endl;
		
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) {
			cout << a[i][j] << "  ";
		} cout << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}