//*���� ����������� ����� N. ���������, ����� �� ����� ��� ���� ������ ������. ����� ���������� ������� �������� ������������ �� ����� �� �� ��������� ������ �����.*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int k;
	for (int n=1; n !=0;cin >>n)
	{		
		if (n < 100 || n>999) cout << "����� �� �����������\n";
		else
		{
			int s = n % 10;//�������
			n /= 10;
			s += n % 10;// �������
			s += n / 10;//�����
			if (s % 2 == 0)
				cout << "����� ��� ���� ������";
			else
				cout << "����� ��� ���� �� ������ ";
			cout << s;
		}
		cout << "������ ��������� ��� �����?";
		cin >> n;
	}
	system("pause");
	return 0;
}