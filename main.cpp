#include "Header.h"
#include "main_functions.h"
#include "angular.h"



int main()
{
	setlocale(LC_CTYPE, "RUS");

	switch (chooseTheMethod())
	{
	case 1:
		cout << "Вы выбрали 1 метод\n";
		break;
	case 2:
		cout << "Вы выбрали 2 метод\n";
		break;
	case 3:
		Angular angular;
		break;
	case 4:
		cout << "Вы выбрали 4 метод\n";
		break;
	case 5:
		cout << "Вы выбрали 5 метод\n";
		break;
	case 6:
		cout << "Вы выбрали 6 метод\n";
		break;
	default:
		cout << "Введённая цифра не совпадает с номером выбора\n";
		chooseTheMethod();
		break;
	}
	return 0;
}