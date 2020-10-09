#pragma once
#include "Header.h"
#include "serif.h"
class Angular : private virtual Serif
{
	double
		x_1, y_1,
		x_2, y_2;
	Angle alpha, beta;

	void importData();
public: 
	void getAnswer() override;
	void calculate() override;
};
