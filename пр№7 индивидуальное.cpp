//*Задана матрица А(n,m), в каждом столбце которой минимальный элемент необходимо заменить суммой положительных элементов этого же столбца.*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
#include<stdio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int a[1][1], n, m,i,j;
	cout << "введите число строк ";
	cin >> n;
	cout << "введите число столбцов  ";
	cin >> m;
	
	for (int i = 0; i < n; i++)	
	{
			for (int j = 0; j < m; j++)
			{
				a[i][j] = rand();
				cout << a[i][j] << "   ";
			}
		}
	cout << endl;


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int sum = 0;
			int min = a[0][j];
			sum = sum + a[0][j];
			if (a[i][j] < min) min = a[i][j];

			for (int j = 0; j < 5; j++) {
				if (a[i][j] == min) a[i][j] = sum;
				cout << "min=" << min << "sum=" << sum << endl;
			}
			cout << endl;
		}
	}

	system("pause");
	return 0;
}