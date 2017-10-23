//*÷аревна Ц л€гушка ежедневно съедает на 20   комаров больше, чем в предыдущий день, и еще 2 комара. Ќаписать программу, определ€ющую через сколько дней количество съеденных комаров превысит 100, если в первый день было съедено 12 комаров.*//
#include<iostream>
#include<locale.h>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int sum = 12, i;
	for(i = 1;sum<100;)
	{
		i++;
		sum += sum + 22;
	}
	cout << "больше 100 съеденных комаров в" << i << endl << "sum=" << sum << endl;
	system("pause");
	return 0;
}