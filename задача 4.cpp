//*7.	Даны два числа a и b. Найти их среднее арифметическое: S=(a + b)/2.*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	float a, b;
	cin >> a>> b;
	float s;
	s = (a + b) / 2;
	cout << "среднее арифметическое =" << s << endl;
	system("pause");
	return 0;
}