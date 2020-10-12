#include "opposite angular.h"

void OppositeAngular::importData()
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
	cout << "Координаты третьей точки\n";
	cout << "X - ";
	cin >> C.x;
	cout << "Y - ";
	cin >> C.y;
	cout << "Угол измеренный при первой точке: (град мин сек)\n";
	cin >> alpha.grad >> alpha.min >> alpha.sec;
	cout << "Угол измеренный при второй точке: (град мин сек)\n";
	cin >> beta.grad >> beta.min >> beta.sec;
}

void OppositeAngular::getAnswer()
{
	calculate();
	cout << "Координаты искомой точки (x,y)м\n";
	cout << "(" << N.x << "," << N.y << ")\n";
}

void OppositeAngular::calculate()
{
	importData();
	double
		ctg_a = 1 / tan(alpha.inRad()),
		ctg_b = 1 / tan(beta.inRad());
	double ctg_y =
		((B.y - A.y) * ctg_a - (C.y - B.y) * ctg_b + (A.x - C.x))
		/((B.x - A.x) * ctg_a - (C.x - B.x) * ctg_b - (A.y - C.y));
	double
		z1 = (B.y - A.y) * (ctg_a - ctg_y) - (B.x - A.x) * (1 + ctg_a * ctg_y),
		z2 = (C.y - B.y) * (ctg_b + ctg_y) + (C.x - B.x) * (1 - ctg_b * ctg_y);
	double
		Z = (z1 + z2) / 2.;
	double
		delta_x = Z / (1 + pow(ctg_y, 2)),
		delta_y = delta_x * ctg_y;
	N.x = B.x + delta_x;
	N.y = B.y + delta_y;
}