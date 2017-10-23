//*5.	Определить, является ли целое число N двузначным числом.*//
#include<iostream>
#include<locale.h>
#include<windows.h>
using namespace std;//использовать подключение пространства имен std
int main()
{
	setlocale(LC_ALL, "RUS");// РУС. ЯЗ.
	float n;
	cin >> n;
	{
		if ((10 <= n) && (n < 100)) cout << "n-двузначное число"; else cout << "n-недвузначное число";
	}
	system("pause");// pause
	return 0;
}