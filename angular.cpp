#include "angular.h"

void Angular::importData()
{

	cout << "���������� ������ �����\n";
	cout << "X - ";
	cin >> x_1;
	cout << "\nY - ";
	cin >> y_1;
	cout << "���������� ������ �����\n";
	cout << "X - ";
	cin >> x_2;
	cout << "\nY - ";
	cin >> y_2;
	cout << "���� ���������� ��� ������ �����: (���� ��� ���)\n";
	cin >> alpha.grad >> alpha.min >> alpha.sec;
	cout << "���� ���������� ��� ������ �����: (���� ��� ���)\n";
	cin >> beta.grad >> beta.min >> beta.sec;
}



void Angular::getAnswer() 
{
}

void Angular::calculate()
{
	double y = 180 - (alpha.inGrad() + beta.inGrad());
}