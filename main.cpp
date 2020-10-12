#include "Header.h"
#include "main_functions.h"
#include "angular.h"
#include "opposite angular.h"

int main()
{
	setlocale(LC_CTYPE, "RUS");
	int choice = chooseTheMethod();
	if (choice == 1)
	{

	}
	else if (choice == 2)
	{

	}
	else if (choice == 3)
	{
		Angular angular;
		angular.getAnswer();
	}
	else if (choice == 4)
	{
		OppositeAngular opposite_angular;
		opposite_angular.getAnswer();
	}
	else if (choice == 5)
	{

	}
	else if (choice == 6)
	{

	}
	else
	{
		cout << "¬ведЄнна€ цифра не совпадает с номером выбора\n";
		chooseTheMethod();
	}
	return 0;
}