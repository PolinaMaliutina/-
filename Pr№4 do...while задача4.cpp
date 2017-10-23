//*÷аревна Ц л€гушка ежедневно съедает на 20   комаров больше, чем в предыдущий день, и еще 2 комара. Ќаписать программу, определ€ющую через сколько дней количество съеденных комаров превысит 100, если в первый день было съедено 12 комаров.*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int i = 1;// счетчик дней
	int sum = 12;// счетчик суммы
	do
	{
		i++;
		sum += sum + 22;
	} while (sum < 100);
	cout << "больше 100 съеденных комаров в" << i << "день" << endl << "sum=" << sum << endl;
	system("pause");
	return 0;
}