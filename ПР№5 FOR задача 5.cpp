//*ћой богатый д€дюшка подарил мне  1 доллар в мой первый день рождени€. ¬ каждый следующий день рождени€ он удваивал свой подарок и прибавл€л к нему столько долларов, сколько мне исполнилось лет. Ќаписать программу, определ€ющую, сколько денег будет на счете в 16 лет.*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
int sum = 1;
	for (int i = 1;i < 17;)
	{
		i++;
		sum += sum * 2 + i;
	}
	cout << sum << "долларов в 16 лет" << endl;
	system("pause");
	return 0;
}