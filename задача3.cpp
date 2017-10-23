//*4.	Дана длина ребра куба a. Найти объем куба V = a3 и площадь его поверхности  S=6*a2 *//
#include<iostream>//ввод -вывод
#include<locale.h>
#include<windows.h>
using  namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");// РУС. ЯЗ.
	float a;
	cin >> a;
	float v, s;
	v = a*a*a;
	s = 6 * (a*a);
	cout << "Обьем куба =" << v << endl << "площадь поверхности =" << s << endl;
	system("pause");
	return 0;

}