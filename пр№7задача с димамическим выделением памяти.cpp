//*2.	��������� ������ �������� N x N (N<10)   �� ���������� �������: A(i, j) = 2 * i + j / 2 ;*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int num;                            // ������ �������
	cout << "������� ������������� ��������: ";
	cin >> num;                         //��������� �� ������������ ������� �������
	int **p_darr = new int[num];      	//��������� ������ ��� �������
	for (int i = 0; i < num; i++) { 
		for (int j = 0; j < num; j++) { //���������� ������� � ����� �������� ��� ��������� 
			int a[1][1];
			a[i][j] = (2 * i) + (j / 2);
		}
		p_darr[i] = i;
		cout << "�������� " << i << " �������a ist" << p_darr[i] << endl;
	}
	delete[]p_darr;                     //������� ������
	system("pause");
	return 0;
}