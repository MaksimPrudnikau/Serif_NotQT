#pragma once
#include "Header.h"
#include "serif.h"
class Angular : private virtual Serif
{
	Point A, B; //��������
	Point N; //�������
	Angle alpha, beta;
	void importData() override;
	void calculate() override;
public: 
	void getAnswer() override;
};
