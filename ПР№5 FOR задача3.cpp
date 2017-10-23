//*Найти сумму  всех целых чисел от 1 до а. (Значение а вводится с клавиатуры).*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	float a;
	cin >> a;
	int sum=0;
	for (int i = 0;i<a;cin >> a)
	{
		i++;
		sum += i;
	}
	cout << "сумма чисел от 1 до а =" << sum << endl;
	system("pause");
	return 0;
}