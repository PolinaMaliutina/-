#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int **mas, *ptr;
int b, n, m, i, j, k;
int main()
{
	setlocale(0, "russian");
	// Выделение памяти под матрицу
	printf("Введите n=");
	scanf_s("%d", &n);
	printf("Введите m=");
	scanf_s("%d", &m);
	mas = new int *[n]; // выделение памяти под массив указателей
	for (i = 0; i<n; i++)
		mas[i] = new int[m]; // выделение памяти под строки матрицы
							 //Заполнение матрицы данными
	for (i = 0; i<n; i++)
	{
		printf("Введите %d элемента %d-й строки\n", m, i);
		for (j = 0; j<m; j++)
			scanf_s("%d", &mas[i][j]);
	}
	// Вывод исходной матрицы на экран
	puts("Введенная матрица:");
	for (i = 0; i<n; i++)
	{
		for (j = 0; j < m; j++)
		printf("%3d", mas[i][j]);
		printf("\n");
	}
	// Сортировка строк матрицы - реализована через указатели
	for (i = 0; i<n; i++)
	{
		k = 1;
		while (k != 0)
		{
			ptr = mas[i];
			for (k = 0, j = 0; j<m - 1; ptr++, j++)
				if (*ptr>*(ptr + 1))
				{
					b = *ptr; *ptr = *(ptr + 1); *(ptr + 1) = b;
					k++;
				
				}
		}
	}
	// Вывод результата
	puts("Сортированная матрица:");
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<m; j++)
			printf("%3d", mas[i][j]);
		printf("\n");
	}
	// Удаление динамической матрицы
	for (i = 0; i<n; i++) // удаление строк динамической матрицы
		delete[] mas[i];
	delete[] mas; // удаление массива указжателей на строки
	puts("Нажмите любую клавишу для завершения...");
	_getch();
	return 0;
}
