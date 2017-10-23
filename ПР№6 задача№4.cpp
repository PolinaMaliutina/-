//*Написать программу, осуществляющую заполнение и вывод на экран массива состоящего из 10 элементов последовательностью 1,-1,1,-1,...*//
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
		if (i % 2 == 0) a[i] = 1; else a[i] = -1;
	}
	for (int i = 0; i <10;i++)
	{
		cout << a[i] << "  ";
	}
	system("pause");
	return 0;
}