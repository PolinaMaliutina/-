//*38.	Удалить в строке все лишние пробелы. 
//Лишними считаются пробелы, следующие непосредственно за пробелами. 
//Т.е. между словами всегда должен находиться один пробел.*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	const int s = 100;
	char str2[s];//, textBox1, labelt2;
	//str2 = textBox1;
	string result = "";
	for (int i = 0; i < s; i++)
	if (str2[i] != '.')
		result = result + str2[i];
		printf("&s",result);
		system ("pause");
	return  0;
}

