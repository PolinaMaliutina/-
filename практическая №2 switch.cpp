//*14.	���� ����� �����  �. ������� �� ����� ������ �������� ������, ��������������� ����� �.(1-�����, 2-�������������������, 3-�����������������, 4-������, 5-�������). ���� � �� ����� � ��������� 1-5, �� ������� ������ �������.*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int k;
	cin >> k;
	switch (k)
	{
	case 1: cout << "�����" << endl; break;
	case 2: cout << "�� �����������������" << endl; break;
	case 3: cout << "�����������������" << endl; break;
	case 4:cout << "������" << endl; break;
	case 5: cout << "�������" << endl; break;
	default:cout << "������" << endl; break;}
			//cout << "k=" << k << endl;
			system("pause");
		return 0;
	
}
