//*21.	Вводится строка слов. Вывести слова в обратном порядке*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	string a;
	string	b;
	cin>>a>>b;
	//system("CLS");
	cout<<b << ' ' << a << std::endl;

	system("pause");
	return 0;

}