
/*
Выполнил: Сергей Хомутов
Группа: П2-15					Дата: 19.09.2018
*/

#include "pch.h"
#include <iostream>
#include <cmath>

/*
1.	Дни недели пронумерованы следующим образом:
0 — воскресенье, 1 — понедельник, 2 — вторник, …, 6 — суббота.
Дано целое число K, лежащее в диапазоне 1–365.
Определить номер дня недели для K-го дня года, если известно,
что в этом году 1 января было понедельником.
*/
int Task3_0()
{

	system("cls");

	int k;

	std::cout << "Enter day of the year: ";
	std::cin >> k;
	std::cout << k << " day of the week is: " << k % 7 << std::endl;

	return 0;
}
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=


/*
2.	Для данного вещественного x найти значение следующей функции f, принимающей вещественные значения:
			−x, если x ≤ 0,
f (x) = 	x2, если 0 < x < 2,
			4,  если x ≥ 2
*/
int Task3_1()
{

	system("cls");

	float x;

	std::cout << "Enter X: ";
	std::cin >> x;

	if (x <= 0)
	{
		x *= -1;
	}
	else if (0 < x && x < 2)
	{
		x *= x;
	}
	else if (x >= 2)
	{
		x = 4;
	}

	std::cout << "X = " << x;

	return 0;
}
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=


/*
3.	Элементы равностороннего треугольника пронумерованы следующим образом:
1 — сторона "a",
2 — радиус R1 вписанной окружности (R1 = a• √ 3/6),
3 — радиус R2 описанной окружности (R2 = 2•R1),
4 — площадь S = a 2 • √ 3/4.
Дан номер одного из этих элементов и его значение.
Вывести значения остальных элементов данного треугольника (в том же порядке).
*/
int Task3_2()
{
	system("cls");

	int n, x;
	std::cout << "Enter element of an equilateral triangle: ";
	std::cin >> n;
	std::cout << "Enter value of " << n << ": ";
	std::cin >> x;

	int a, R1, R2, S;

	switch (n)
	{
	case 1:
		a = x;
		R1 = a * sqrt(3) / 6;
		R2 = 2 * R1;
		S = pow(a, 2)*sqrt(3) / 4;
		break;
	case 2:
		R1 = x;
		a = R1 * 6 / sqrt(3);
		R2 = 2 * R1;
		S = pow(a, 2)*sqrt(3) / 4;
		break;
	case 3:
		R2 = x;
		R1 = R2 / 2;
		a = R1 * 6 / sqrt(3);
		S = pow(a, 2)*sqrt(3) / 4;
		break;
	case 4:
		S = x;
		a = sqrt(S * 4 / sqrt(3));
		R1 = a * sqrt(3) / 6;
		R2 = 2 * R1;
		break;
	}

	std::cout << "The length of the side is: " << a << "\nThe radius \"R1\" is : " << R1 << "\nThe radius \"R2\" is : " << R2 << "\nArea is: " << S;

	return 0;
}
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=


/*
4.	Даны два целых числа A и B (A < B).
Вывести в порядке убывания все целые числа,
расположенные между A и B (не включая числа A и B),
а также количество N этих чисел
*/
int Task3_3()
{
	system("cls");

	int a, b, n;

	std::cout << "Enter A: ";
	std::cin >> a;
	std::cout << "Enter B: ";
	std::cin >> b;

	std::cout << "Amount of elements: " << b - a - 1 << std::endl << "Elemets: ";

	for (; b - 1 > a; b--)
	{
		std::cout << b - 1 << " ";
	}

	return 0;
}
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=


/*
5.	Дано целое число N (> 0).
Используя операции деления нацело и взятия остатка от деления,
найти количество и сумму его цифр.
*/
int Task3_4()
{
	system("cls");

	int n, sum = 0, amo = 0;
	std::cout << "Enter N: ";
	std::cin >> n;

	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
		amo++;
	}

	std::cout << "Sum: " << sum << "\nAmount: " << amo;

	return 0;
}
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

int Task3_Main()
{
	system("cls");

	bool done = true;
	int n;

	while (done)
	{

		std::cout << "\nSelect an assignment \"Task3\":\n 1 - Task3_0\n 2 - Task3_1\n 3 - Task3_2\n 4 - Task3_3\n 5 - Task3_4\n 0 - Back\nChoise: ";
		std::cin >> n;

		switch (n)
		{

		case 1:
			Task3_0();
			break;
		case 2:
			Task3_1();
			break;
		case 3:
			Task3_2();
			break;
		case 4:
			Task3_3();
			break;
		case 5:
			Task3_4();
			break;
		case 0:
			done = false;
			break;
		}


	}

	return 0;
}
