#include "Header.h"
#include "main_functions.h"
#include "angular.h"



int main()
{
	setlocale(LC_CTYPE, "RUS");

	switch (chooseTheMethod())
	{
	case 1:
		cout << "�� ������� 1 �����\n";
		break;
	case 2:
		cout << "�� ������� 2 �����\n";
		break;
	case 3:
		Angular angular;
		break;
	case 4:
		cout << "�� ������� 4 �����\n";
		break;
	case 5:
		cout << "�� ������� 5 �����\n";
		break;
	case 6:
		cout << "�� ������� 6 �����\n";
		break;
	default:
		cout << "�������� ����� �� ��������� � ������� ������\n";
		chooseTheMethod();
		break;
	}
	return 0;
}