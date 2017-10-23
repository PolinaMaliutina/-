//*2.	«аполнить массив размером N x N (N<10)   по следующему правилу: A(i, j) = 2 * i + j / 2 ;*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int num;                            // размер массива
	cout << "¬ведите целочисленное значение: ";
	cin >> num;                         //получение от пользовател€ размера массива
	int **p_darr = new int[num];      	//выделение пам€ти дл€ массива
	for (int i = 0; i < num; i++) { 
		for (int j = 0; j < num; j++) { //заполнение массива и вывод значений его элементов 
			int a[1][1];
			a[i][j] = (2 * i) + (j / 2);
		}
		p_darr[i] = i;
		cout << "значение " << i << " элементa ist" << p_darr[i] << endl;
	}
	delete[]p_darr;                     //очистка пам€ти
	system("pause");
	return 0;
}