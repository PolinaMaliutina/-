//*4.	���� ����� ����� ���� a. ����� ����� ���� V = a3 � ������� ��� �����������  S=6*a2 *//
#include<iostream>//���� -�����
#include<locale.h>
#include<windows.h>
using  namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");// ���. ��.
	float a;
	cin >> a;
	float v, s;
	v = a*a*a;
	s = 6 * (a*a);
	cout << "����� ���� =" << v << endl << "������� ����������� =" << s << endl;
	system("pause");
	return 0;

}