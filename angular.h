#pragma once
#include "Header.h"
#include "serif.h"
class Angular : private virtual Serif
{
	Point A, B; //��������
	Point N; //�������
	Angle alpha, beta;
	
public: 
	void importData() override;
	void getAnswer() override;
	void calculate() override;
};
