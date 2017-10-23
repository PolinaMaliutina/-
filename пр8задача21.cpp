//*21.	Вводится строка слов. Вывести слова в обратном порядке*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
#include<string.h>
using namespace std;
void main()
{
	char text[80], text1[80];
	char*p;
	int i;
	cin.getline (text, 80);
	strrev(text);
	char *pr = " ., ";
	text1[0] = '\0';
	p = strtok(text, pr);
	while (p != NULL)
	{
		strrev(p);
		strcat(text1, p);
		strcat(text1, " ");
		p = strtok(NULL, pr);
	}
	cout << text1 << endl;
	cin.get();
	system("pause");
	return;
}