#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int **mas, *ptr;
int b, n, m, i, j, k;
int main()
{
	setlocale(0, "russian");
	// ��������� ������ ��� �������
	printf("������� n=");
	scanf_s("%d", &n);
	printf("������� m=");
	scanf_s("%d", &m);
	mas = new int *[n]; // ��������� ������ ��� ������ ����������
	for (i = 0; i<n; i++)
		mas[i] = new int[m]; // ��������� ������ ��� ������ �������
							 //���������� ������� �������
	for (i = 0; i<n; i++)
	{
		printf("������� %d �������� %d-� ������\n", m, i);
		for (j = 0; j<m; j++)
			scanf_s("%d", &mas[i][j]);
	}
	// ����� �������� ������� �� �����
	puts("��������� �������:");
	for (i = 0; i<n; i++)
	{
		for (j = 0; j < m; j++)
		printf("%3d", mas[i][j]);
		printf("\n");
	}
	// ���������� ����� ������� - ����������� ����� ���������
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
	// ����� ����������
	puts("������������� �������:");
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<m; j++)
			printf("%3d", mas[i][j]);
		printf("\n");
	}
	// �������� ������������ �������
	for (i = 0; i<n; i++) // �������� ����� ������������ �������
		delete[] mas[i];
	delete[] mas; // �������� ������� ����������� �� ������
	puts("������� ����� ������� ��� ����������...");
	_getch();
	return 0;
}
