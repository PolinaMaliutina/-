/*1.	Дана сторона квадрата а. Найдите его периметр P=4*a и площадь S=a2*/
#include<iostream>//ввод -вывод
#include<locale.h>
#include<windows.h>
using   namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");// РУС. ЯЗ.
	float a;
	cin >> a;//считываем с клавы в а 
	float p, s;
	p = 4 * a;
	s = a* a;
	cout << "периметр квадрата =" << p << endl << "Площадь квадрата=" << s << endl;
	system("pause");// pause
	return 0;
}