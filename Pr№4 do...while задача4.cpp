//*������� � ������� ��������� ������� �� 20   ������� ������, ��� � ���������� ����, � ��� 2 ������. �������� ���������, ������������ ����� ������� ���� ���������� ��������� ������� �������� 100, ���� � ������ ���� ���� ������� 12 �������.*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int i = 1;// ������� ����
	int sum = 12;// ������� �����
	do
	{
		i++;
		sum += sum + 22;
	} while (sum < 100);
	cout << "������ 100 ��������� ������� �" << i << "����" << endl << "sum=" << sum << endl;
	system("pause");
	return 0;
}