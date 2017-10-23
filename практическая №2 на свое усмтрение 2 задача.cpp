//*12.	С клавиатуры вводятся два числа А и В. Меньшее из этих чисел заменить их полусуммой, а большее удвоенным произведением*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	float a, b;
	float m, bb;
	cin >> a >> b;
	if (a < b)
	{
		m = 0.5*(a + b);
	bb = 2 * (a*b); cout << "a=" << m << endl << "b=" << bb << endl; }
	else if (a > b){
	//float m, bb;
		bb = 0.5*(a + b);
		m = 2 * (a*b);
	cout << "a=" << m << endl << "b=" << bb << endl; };
	system ("pause");
	return 0;
}
