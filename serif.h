#pragma once
#include "Header.h"

class Serif
{
protected:
	struct Angle
	{
		int grad;
		int min;
		int sec;
		//������� �� �������� ����� ������ � ����.
		double inGrad();
		double inRad();
	};
	struct Point
	{
		double x;
		double y;
	};
	static int choice;
	virtual void importData() = 0;
	virtual void getAnswer() = 0;
	virtual void calculate() = 0;
};