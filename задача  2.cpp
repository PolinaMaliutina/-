//*2.	���� ������� �������������� a � b. ����� ��� �������  S=a*b � �������� P = 2*(a+b).*//
#include<iostream>//���� -�����
#include<locale.h>
#include<windows.h>
using  namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");// ���. ��.
	float a,b;
	cin >> a >> b;//��������� � ����� � �,b
	float p, s;
	s = a*b;
	p = 2 * (a + b);
	cout << "������� �������� =" << s << endl << "�������� ��������="<< p << endl;  
	system("pause");// pause
	return 0;

}