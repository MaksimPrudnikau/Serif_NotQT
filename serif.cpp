#include "serif.h"

//������� �� �������� ����� ������ � ����.
double Serif::Angle::inGrad()
{
	return grad + min / 60. + sec / 3600.;
}

double Serif::Angle::inRad()
{
	return this->inGrad() * M_PI / 180;
}

bool Serif::Angle::isCorrect()
{

}