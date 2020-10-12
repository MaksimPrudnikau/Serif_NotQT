#pragma once
#include "Header.h"
#include "serif.h"

class OppositeAngular : private virtual Serif
{
	Point A, B, C; //исходные
	Point N; //искомая
	Angle alpha, beta;
	void importData() override;
	void calculate() override;
public:
	void getAnswer() override;
};