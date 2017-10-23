//*Дано трехзначное число N. Проверить, будет ли сумма его цифр четным числом. После завершения расчета спросить пользователя не хочет ли он проверить другое число.*//
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
		if (n < 100 || n>999) cout << "число не трехзначное\n";
		else
		{
			int s = n % 10;//единицы
			n /= 10;
			s += n % 10;// десятки
			s += n / 10;//сотни
			if (s % 2 == 0)
				cout << "сумма его цифр четная";
			else
				cout << "сумма его цифр не четная ";
			cout << s;
		}
		cout << "хотите проверить еще число?";
		cin >> n;
	}
	system("pause");
	return 0;
}