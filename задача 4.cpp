//*7.	���� ��� ����� a � b. ����� �� ������� ��������������: S=(a + b)/2.*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	float a, b;
	cin >> a>> b;
	float s;
	s = (a + b) / 2;
	cout << "������� �������������� =" << s << endl;
	system("pause");
	return 0;
}