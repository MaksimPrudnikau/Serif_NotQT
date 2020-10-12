#include "angular.h"

void Angular::importData()
{
	cout << "���������� ������ �����\n";
	cout << "X - ";
	cin >> A.x;
	cout << "Y - ";
	cin >> A.y;
	cout << "���������� ������ �����\n";
	cout << "X - ";
	cin >> B.x;
	cout << "Y - ";
	cin >> B.y;
	cout << "���� ���������� ��� ������ �����: (���� ��� ���)\n";
	cin >> alpha.grad >> alpha.min >> alpha.sec;
	cout << "���� ���������� ��� ������ �����: (���� ��� ���)\n";
	cin >> beta.grad >> beta.min >> beta.sec;
}

void Angular::getAnswer() 
{
	calculate();
	cout << "���������� ������� ����� (x,y)�\n";
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