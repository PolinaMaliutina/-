//*21.	Вводится строка слов. Вывести слова в обратном порядке*//
#include <iostream>
#include <string>
#include <fstream>
#include <stack>
#include<locale.h>
#include<Windows.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	system("chcp 1251");
	std::stack<std::string> pul;
	std::string str;
	std::ifstream infile("text.txt");
	while (!infile.fail()) {
		if (!(infile >> str))
			break;
		if (str.find('.') != std::string::npos) {
			std::cout << str.substr(0, str.size() - 1);
			while (!pul.empty()) {
				std::cout << ' ' << pul.top();
				pul.pop();
			}
			std::cout << ". ";
		}
		else
			pul.push(str);
	}
	system("pause");
	return 0;
}
