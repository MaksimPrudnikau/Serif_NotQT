#include "serif.h"

//������� �� �������� ����� ������ � ����.
int Serif::Angle::inGrad()
{
	return grad + min / 60. + sec / 3600.;
}