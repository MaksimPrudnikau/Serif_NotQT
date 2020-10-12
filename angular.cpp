#include "angular.h"

void Angular::importData()
{
	cout << "Координаты первой точки\n";
	cout << "X - ";
	cin >> A.x;
	cout << "Y - ";
	cin >> A.y;
	cout << "Координаты второй точки\n";
	cout << "X - ";
	cin >> B.x;
	cout << "Y - ";
	cin >> B.y;
	cout << "Угол измеренный при первой точке: (град мин сек)\n";
	cin >> alpha.grad >> alpha.min >> alpha.sec;
	cout << "Угол измеренный при второй точке: (град мин сек)\n";
	cin >> beta.grad >> beta.min >> beta.sec;
}

void Angular::getAnswer() 
{
	calculate();
	cout << "Координаты искомой точки (x,y)м\n";
	cout << "(" << N.x << "," << N.y << ")\n";
}

void Angular::calculate()
{
	importData();
	double gamma = (180 - (alpha.inGrad() + beta.inGrad())) * M_PI / 180;
	double
		ctg_a = 1 / tan(alpha.inRad()),
		ctg_b = 1 / tan(beta.inRad()),
		ctg_y = 1 / tan(gamma);
	N.x = (A.x * ctg_b + B.x * ctg_a + B.y - A.y) / (ctg_a + ctg_b);
	N.y = (A.y * ctg_b + B.y * ctg_a - B.x + A.x) / (ctg_a + ctg_b);
}