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
		int inGrad();
	};

	virtual void getAnswer() = 0;
	virtual void calculate() = 0;
};