//*Найдите 6-ой член последовательности A(i)=A(i-1)*A(i-1)+1 , если А(1)=5.*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int  a[10];
	for (int i = 0; i < 10; i++)
	{
		a[0] = 5;
		a[i] = a[i - 1] * a[i - 1] + 1;
	}
	/*for (int i = 0; i <10;i++)
	{*/
		cout << "a[6]" << a[5] << "  " << endl;;
	//}
	system("pause");
	return 0;
}