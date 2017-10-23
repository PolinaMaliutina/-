#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	float a;
	cin >> a;
	float y,z;
	y = (cos(a) + sin(a)) / (cos(a) - sin(a));
	z = tan(2 * a) + (1/sin(a))*(2 * a);
	cout << "значение у=" << y << endl << "значение z =" << z << endl;
	float r;
	r = y - z;
	cout << "разность =" << r << endl;
	system("pause");
	return 0;
}