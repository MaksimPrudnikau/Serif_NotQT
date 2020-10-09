#pragma once
#include "Header.h"

int chooseTheMethod()
{
	int choice;
	cout << "1 - Полярная засечка\n";
	cout << "2 - Биполярная засечка\n";
	cout << "3 - Прямая угловая засечка\n";
	cout << "4 - Обратная угловая засечка\n";
	cout << "5 - Прямая линейная засечка\n";
	cout << "6 - Обратная линейная засечка\n";
	cin >> choice;
	return choice;
}