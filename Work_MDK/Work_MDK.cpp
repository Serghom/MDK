﻿#include "pch.h"
#include "Task.h"
#include <iostream>


int main()
{
	int n;
	
	bool done = true;
	while (done)
	{
		system("cls");

		std::cout << "\nSelect an assignment:\n 1 - Task1\n 2 - Task3 \n 0 - Exit\nChoise: ";
		std::cin >> n;

		switch (n)
		{

		case 1:
			Task1_Main();
			break;
		case 2:
			Task3_Main();
			break;
		case 0:
			done = false;
			break;
		}

	}
	
	return 0;
}

