//*Написать программу, осуществляющую заполнение и вывод на экран массива состоящего из 10 элементов последовательностью 4, 7, 13, 25, ... (Удвоенное значение минус 1)*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int  a[10];
	for (int i = 0; i <10; i++)
	{ 
		a[i] = (i+4) * 2 - 1;
	}
	for (int i = 0; i <10; i++)
	{
		cout << a[i] << "  ";
	}
	system("pause");
	return 0;
}