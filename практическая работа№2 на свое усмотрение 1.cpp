//*8.	Даны два числа, определить, равны они или нет, если числа не равны, вывести соответствующее сообщение в виде 5>2 или 2<5.*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale (LC_ALL, "RUS");
	float a, b;
	cin >> a >> b;
	{
		if (a == b) cout << "a=b"; else 
		if (a < b)  cout << "a<b"; else cout << a << ">" << b << endl;
	}
	system("pause");// pause
	return 0;
}