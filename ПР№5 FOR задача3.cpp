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
	int sum=0;
	for (int i = 0;i<a;cin >> a)
	{
		i++;
		sum += i;
	}
	cout << "����� ����� �� 1 �� � =" << sum << endl;
	system("pause");
	return 0;
}