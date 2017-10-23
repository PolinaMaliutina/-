//*Написать программу, заполняющую массив из 10 элементов по следую¬щему правилу: А(i) = (2*i – 1)/sin (i);*//
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
		a[i] = (2 * i -1) / sin(i);
	}
	for (int i = 0; i <10; i++)
	{
		cout << a[i] << "  ";
	}
	system("pause");
	return 0;
}