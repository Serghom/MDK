/*
Выполнил: Сергей Хомутов
Группа: П2-15					Дата: 11.09.2018
*/


#include "pch.h"
#include <iostream>


/*
1. Дана последовательность целых чисел (вводятся с клавиатуры),
последний элемент которой — число 0.
Найти сумму всех положительных элементов этой
последовательности и количество её отрицательных элементов.
Организовать функцию для выполнения задания.
*/

int sum(int sum, int n) {
	sum += n;
	return sum;
}

int Task1_0()
{
	system("cls");

	int n, ss = 0, sc = 0, arr[1000];

	std::cout << "Enter the array.\nThe end of the array is 0\nSeparating numbers with spaces\nEnter: ";

	for (int i = 0; i < 1000; i++)
	{

		std::cin >> arr[i];
		if (arr[i] == 0)
		{
			n = i + 1;
			break;
		}

		if (arr[i] < 0)
		{
			sc++;
			
		}
		else if (arr[i] % 2 == 0)
		{
			ss = sum(ss, arr[i]);
		}
	}

	std::cout << "Sum: " << ss << ", Number of odd: " << sc;

	return 0;

}
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

int Factorial(int n)
{
	int factorial = 1;
	for (int i = 0; i < n; i++)
	{
		factorial *= (i + 1);
	}

	return factorial;
}
/*
2. Дано вещественное число X и целое число N (> 0). Найти значение выражения:
1 + X + X2/(2!) + … + XN/N!

*/
int Task1_1()
{
	system("cls");

	int sum = 0, n, x;
	std::cout << "n: ";
	std::cin >> n;
	if (n < 1)
	{
		return -1;
	}
	std::cout << "x: ";
	std::cin >> x;

	for (int i = 0; i < n; i++)
	{
		int k = i + 1;
		sum += (x*k) / Factorial(k);
	}
	std::cout << sum << std::endl;
	std::cout << Factorial(n);
	return 0;
}

int Task1_Main()
{

	system("cls");
	
	int n;
	bool done = true;
	while (done)
	{

		std::cout << "\nSelect an assignment in \"Task1\": \n 1 - Task1_0 \n 2 - Task1_1 \n 0 - Back\nChoise: ";
		std::cin >> n;
	
		switch (n)
		{

		case 1:
			Task1_0();
			break;
		case 2:
			Task1_1();
			break;
		case 0:
			done = false;
			break;
		}

	}

	return 0;
}

