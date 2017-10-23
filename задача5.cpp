//*5.	Даны длины ребер a, b, c прямоугольного параллелепипеда. Найти его объем V = a*b*c и площадь боковой поверхности S = 2*(a*b+b*c+a*c).*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	float a, b, c;
	cin >> a >> b >> c;
	float v, s;
	v = a*b*c;
	s = 2 * (a*b + b*c + a*c);
	cout << "обьем параллелепипеда=" << v << endl << "Площадь боковой поверхности =" << s << endl;
	system("pause");
	return 0;
}
