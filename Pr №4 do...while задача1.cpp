//*���� ����� �����  �. ������� �� ����� ������ �������� ������, ��������������� ����� �.(1-�����, 2-�������������������, 3-�����������������, 4-������, 5-�������). ���� � �� ����� � ��������� 1-5, �� ������� ������ �������. ����� ���������� ������� �������� ������������ �� ����� �� �� ��������� ������ �����.*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
		int k1 = 7, k;
		do {			
		cin >> k;
		switch (k)
		{
		case 1: cout << "�����" << endl; break;
		case 2: cout << "�� �����������������" << endl; break;
		case 3: cout << "�����������������" << endl; break;
		case 4:cout << "������" << endl; break;
		case 5: cout << "�������" << endl; break;
		default:cout << "������" << endl; break;
		};
		cout << "������ ��������� ��� �����?";
		cin >> k1;
	} while (k1!= 0);
	//cout << "k=" << k << endl;
	system("pause");
	return 0;
}