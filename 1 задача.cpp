/*1.	���� ������� �������� �. ������� ��� �������� P=4*a � ������� S=a2*/
#include<iostream>//���� -�����
#include<locale.h>
#include<windows.h>
using   namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");// ���. ��.
	float a;
	cin >> a;//��������� � ����� � � 
	float p, s;
	p = 4 * a;
	s = a* a;
	cout << "�������� �������� =" << p << endl << "������� ��������=" << s << endl;
	system("pause");// pause
	return 0;
}