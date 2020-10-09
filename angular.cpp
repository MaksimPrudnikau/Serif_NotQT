#include "angular.h"

void Angular::importData()
{

	cout << "Координаты первой точки\n";
	cout << "X - ";
	cin >> x_1;
	cout << "\nY - ";
	cin >> y_1;
	cout << "Координаты второй точки\n";
	cout << "X - ";
	cin >> x_2;
	cout << "\nY - ";
	cin >> y_2;
	cout << "Угол измеренный при первой точке: (град мин сек)\n";
	cin >> alpha.grad >> alpha.min >> alpha.sec;
	cout << "Угол измеренный при второй точке: (град мин сек)\n";
	cin >> beta.grad >> beta.min >> beta.sec;
}



void Angular::getAnswer() 
{
}

void Angular::calculate()
{
	double y = 180 - (alpha.inGrad() + beta.inGrad());
}