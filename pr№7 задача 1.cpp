//*Заполнить произвольный массив размером N x N (N<10) по следующему правилу:a*//
//*12345*//
//*54321 *//
//*12345*//
//*54321*//
//*12345*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
#include<iomanip>
using namespace std;
const unsigned int DIM1 =5;
const unsigned int DIM2 =5;
int ary[DIM1][DIM2];
int main()
{
	setlocale(LC_ALL, "RUS");
	for (int i = 0; i < DIM1; i++) {
		for (int j = 0; j < DIM2; j++) {
			if (j % 2) cout << 54321 << endl;] else cout << 12345 << endl;
		} cout << endl;
}
	
	system("pause");
	return 0;
}