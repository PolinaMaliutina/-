//*2.	Даны стороны прямоугольника a и b. Найти его площадь  S=a*b и периметр P = 2*(a+b).*//
#include<iostream>//ввод -вывод
#include<locale.h>
#include<windows.h>
using  namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");// РУС. ЯЗ.
	float a,b;
	cin >> a >> b;//считываем с клавы в а,b
	float p, s;
	s = a*b;
	p = 2 * (a + b);
	cout << "Плащадь квадрата =" << s << endl << "Периметр квадрата="<< p << endl;  
	system("pause");// pause
	return 0;

}