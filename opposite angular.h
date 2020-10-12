#pragma once
#include "Header.h"
#include "serif.h"

class OppositeAngular : private virtual Serif
{
	Point A, B, C; //��������
	Point N; //�������
	Angle alpha, beta;
	void importData() override;
	void calculate() override;
public:
	void getAnswer() override;
};