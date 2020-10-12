#pragma once
#include "Header.h"
#include "serif.h"
class Angular : private virtual Serif
{
	Point A, B; //исходные
	Point N; //искомая
	Angle alpha, beta;
	
public: 
	void importData() override;
	void getAnswer() override;
	void calculate() override;
};
