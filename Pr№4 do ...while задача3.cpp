//*����� �����  ���� ����� ����� �� 1 �� �. (�������� � �������� � ����������).*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	float a;
	cin >> a;
	int i = 0;// ������� �����
	int sum = 0;// ������� �����
	do
	{
		i++;
		sum += i;
	} while (i < a);
	cout << "����� ����� �� 1 �� � =" << sum << endl;
	system("pause");
	return 0;
}