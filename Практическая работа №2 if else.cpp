//*5.	����������, �������� �� ����� ����� N ���������� ������.*//
#include<iostream>
#include<locale.h>
#include<windows.h>
using namespace std;//������������ ����������� ������������ ���� std
int main()
{
	setlocale(LC_ALL, "RUS");// ���. ��.
	float n;
	cin >> n;
	{
		if ((10 <= n) && (n < 100)) cout << "n-���������� �����"; else cout << "n-������������ �����";
	}
	system("pause");// pause
	return 0;
}