//*5.	���� ����� ����� a, b, c �������������� ���������������. ����� ��� ����� V = a*b*c � ������� ������� ����������� S = 2*(a*b+b*c+a*c).*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	float a, b, c;
	cin >> a >> b >> c;
	float v, s;
	v = a*b*c;
	s = 2 * (a*b + b*c + a*c);
	cout << "����� ���������������=" << v << endl << "������� ������� ����������� =" << s << endl;
	system("pause");
	return 0;
}
