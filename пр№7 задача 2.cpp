//*26.	Заполнить    двумерный   массив   N x N случайными числами из интервала [-10 ; 10]. 
Найти сумму элементов. И если она отрицательная, заменить все элементы массива на противоположные по знаку, если положительная, удвоить каждый элемент массива. Массив повторно вывести на экран.*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
#include<stdio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int a[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) {
			a[i][j] = rand() % 21 - 10;
		}
	}


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) {
			cout << a[i][j] << "  ";
		} cout << endl;
	}
	cout << endl;

	int s = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) {
			s = s + a[i][j];
		}
	}


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) {
			{if (s < 0)  a[i][j] = a[i][j] * (-1); else  a[i][j] = a[i][j] * 2; }
		}
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) {
			cout << a[i][j] << "  ";
		} cout << endl;
	}

	cout << "s=" << s << endl;
	system("pause");
	return 0 ;
}