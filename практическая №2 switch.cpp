//*14.	Дано целое число  К. Вывести на экран строку описание оценки, соответствующее числу К.(1-плохо, 2-неудовлетворительно, 3-удовлетворительно, 4-хорошо, 5-отлично). Если К не лежит в диапазоне 1-5, то вывести строку «ошибка».*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int k;
	cin >> k;
	switch (k)
	{
	case 1: cout << "плохо" << endl; break;
	case 2: cout << "не удовлетворительно" << endl; break;
	case 3: cout << "удовлетворительно" << endl; break;
	case 4:cout << "хорошо" << endl; break;
	case 5: cout << "отлично" << endl; break;
	default:cout << "ошибка" << endl; break;}
			//cout << "k=" << k << endl;
			system("pause");
		return 0;
	
}
