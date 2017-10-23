//*4.	ƒаны два числа. ¬озвести в квадрат те числа, значени€ которых отрицательны. *//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale (LC_ALL, "RUS");
	float a, b;
	cin >> a >> b;
	{
		(a < 0) || (b < 0) ? cout <<  a*a << endl << b*b : cout << a << endl << b <<endl;

	}
	system("pause");// pause
	return 0;
}

