//*��� ������� ������� ������� ���  1 ������ � ��� ������ ���� ��������. � ������ ��������� ���� �������� �� �������� ���� ������� � ��������� � ���� ������� ��������, ������� ��� ����������� ���. �������� ���������, ������������, ������� ����� ����� �� ����� � 16 ���.*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
int sum = 1;
	for (int i = 1;i < 17;)
	{
		i++;
		sum += sum * 2 + i;
	}
	cout << sum << "�������� � 16 ���" << endl;
	system("pause");
	return 0;
}