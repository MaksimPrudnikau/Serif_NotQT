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
		//Перевод из градусов минут секунд в Град.
		int inGrad();
	};

	virtual void getAnswer() = 0;
	virtual void calculate() = 0;
};