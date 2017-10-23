//*37.	”далить из строки все слова, длина которых меньше п€ти символов. 
//¬ строке не используютс€ знаки препинани€.*//

#include<locale.h>
#include<Windows.h>
#include<string>
#include<tchar.h>
#include<iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	char text[] = "удалить из строки все слова длина которых п€ть символов";
	char text_arr[] = " ";
	int ds = 0;
	for (int i = 0; i < strlen(text); i++)
	{
		if (text[i] <= 5)
		{
			for (int j = i; j <= i-5; j--)
			{	text[j] = '  ';
			ds = 0;}
			}
			} 
		

	for (int i = 0; i < strlen(text); i++)
	{
		cout << text[i];
	}
	cout << endl;
	system(" pause");
	return 0;

}


	
