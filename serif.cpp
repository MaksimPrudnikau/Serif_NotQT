#include "serif.h"

//Перевод из градусов минут секунд в Град.
int Serif::Angle::inGrad()
{
	return grad + min / 60. + sec / 3600.;
}