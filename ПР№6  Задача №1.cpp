//*Заполнить массив целыми положительными и отрицательными числами из интервала [-10, 10] и вывести его в строчку. Поменять знаки элементов массива на противоположные и повторно вывести массив на экран в строчку.*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int a[30];
	for (int i = 0; i < 30; i++)
	{
		a[i] = rand() % 21 - 10;
	}
	cout << "массив1= ";
	for (int i = 0; i < 30; i++)
		cout << a[i] << "  ";

	cout << endl << "массив2= ";
	for (int i = 0; i < 30; i++)
	{
		 cout <<  a[i] * (-1) << "  ";
	}
	for (int i = 0; i < 30; i++)
		cout << a[i] << "  ";

		system("pause");
		return 0;
	}